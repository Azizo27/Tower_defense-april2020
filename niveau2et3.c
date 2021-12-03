
#include "bibli.h"


t_ennemi* creationenneminivtrois (int numero)

{
    t_ennemi* nouv;
    nouv=(t_ennemi*) malloc(sizeof(t_ennemi));
    nouv->tx=100;
    nouv->ty=100;

    if (numero==0)
    {
        nouv->type=4;
        nouv->x=550;
        nouv->y=350;
    }

    if (numero==1)
    {
        nouv->type=1;
        nouv->x=1050;
        nouv->y=150;
    }
    if (numero==2)
    {
        nouv->type=1;
        nouv->x=1150;
        nouv->y=550;

    }
    if (numero==3)
    {
        nouv->type=2;
        nouv->x=2050;
        nouv->y=450;

    }
    if (numero==4)
    {
        nouv->type=1;
        nouv->x=1650;
        nouv->y=250;
    }



    if (nouv->type==1)
    {
        nouv->hp=10000;
        nouv->dx=-0.08;
    }
    if (nouv->type==2)
    {
        nouv->hp=5000;
        nouv->dx=-0.15;
    }

    if (nouv->type==4)
    {
        nouv->hp=20000;
        nouv->dx=-0.08;
    }

    nouv->dy=0;
    nouv->vivant=1;
    nouv->anim=0;
    nouv->cptimage=0;
    return nouv;
}



t_ennemi* creationboss()
{
    t_ennemi* boss;
    boss=(t_ennemi*) malloc(sizeof(t_ennemi));
    boss->tx=300;
    boss->ty=300;
    boss->type=3;

    boss->dx=-0.05;
    boss->x=1150;
    boss->y=350;

    boss->hp=50000;
    boss->dy=-0.07;
    boss->vivant=1;
    boss->anim=0;
    boss->cptimage=0;
    return boss;
}


void degatdistanceboss(t_ennemi* adversaire, BITMAP* casecolallie, int distancecase, int ennemiy)
{
    int cimcase, bleu;
    cimcase=getpixel(casecolallie, adversaire->x-distancecase, ennemiy);
    bleu=getb(cimcase);

    if (bleu==10)
    {
        if (adversaire->x<=750)
            adversaire->hp=adversaire->hp-4;
    }

    if (bleu==15)
    {
        if (adversaire->x<=750)
            adversaire->hp=adversaire->hp-6;
    }
}


///A faire si le boss est vivant
///CE programme sera appelé 3 fois
///ennemiy sera égal a adversaire->y, adversaire->y-52, adversaire->y + 52
void actualiserboss(t_ennemi* adversaire, BITMAP* casecolallie,BITMAP * page,BITMAP * barbareM[nbarbaresM],BITMAP * barbareA[nbarbaresA], BITMAP* caseennemi,BITMAP * loupA [nloupsA],BITMAP * loupM[nloupsM], int ennemiy, int* arret)
{
    int cim, b;
    cim=getpixel(casecolallie, adversaire->x-150, ennemiy);
    b=getb(cim);
    if (b==5 || b==10 || b==15 || b==20 || b==25)
    {
        *arret=*arret+1;
        ///Animation attaque

        if (b==5)
        {
            // forgerons et vendeurs
        }
        if (b==10)
            if (adversaire->x<=750)
                adversaire->hp=adversaire->hp - 4;

        if (b==15)
            // sorciers
            if (adversaire->x<=750)
                adversaire->hp=adversaire->hp - 6;

        if (b==20)
            // lanciers
            if (adversaire->x<=950)
                adversaire->hp=adversaire->hp - 8;

        if (b==25)
            // chevaliers
            if (adversaire->x<=950)
                adversaire->hp=adversaire->hp - 12;
    }
    /*else
    {
        ///Animation mouvement

        adversaire->x=adversaire->x+adversaire->dx;
        adversaire->y=adversaire->y + adversaire->dy;
    }*/

    degatdistanceboss(adversaire, casecolallie, 252, ennemiy);
    degatdistanceboss(adversaire, casecolallie, 352,  ennemiy);
    degatdistanceboss(adversaire, casecolallie, 452, ennemiy);
    degatdistanceboss(adversaire, casecolallie, 552, ennemiy);
    degatdistanceboss(adversaire, casecolallie, 652, ennemiy);


    if (adversaire->hp<=0)
        adversaire->hp=0;

    if (adversaire->hp==0)
        adversaire->vivant=0;
}


void dessinerboss(BITMAP* bmp, t_ennemi* adversaire)
{
    clear(bmp);
    ///On a juste a changer sa couleur si on veut qu il fasse plus de dégat (et à attribuer dans collision allié des degats pour cette meme couleur)
    ///Il faudrait mieux changer sa couleur pour dire qu on n a pas le droit de poser des troupes sur lui
    if (adversaire->vivant==1)
        rectfill(bmp, adversaire->x - adversaire->tx/2, adversaire->y - adversaire->ty/2, adversaire->x + adversaire->tx/2, adversaire->y + adversaire->ty/2, makecol(0,0,250));
}


///SI vivant==0, on crée deux ennemis (faire une variable qui s incrémente pour que la boucle ne crée pas TOUT le temps des ennemis)





int niveautrois (BITMAP * vendeur[nvendeurs], BITMAP * forgeron[nforgerons], BITMAP * archer[narchers], BITMAP * sorcier[nsorciers], BITMAP * lancier[nlanciers], BITMAP * shevalier[nchevaliers],BITMAP * barbareM[nbarbaresM],BITMAP * barbareA [nbarbaresA], int nivunoudeux,BITMAP * loupA [nloupsA],BITMAP * loupM [nloupsM],BITMAP * explosion [nexplosions], int choixdif,int  point)
{

    //t_listeEnnemis * mesEnnemis;
    t_listeChevaliers * mesChevaliers;
    //t_listeProjectiles * mesProjectiles;
    t_flaiche * tabf [30];
    int clicker=0;


    int argentepeiste;
    int argentdistance;
    int validation=0;
    int prixunite=0;
    int compteurproche=0;
    int compteurloin=0;

    t_ennemi* adversaire[30];
    int nombreennemi=5;
    int tousmort=0;

    t_ennemi* boss;
    int arret=0;
    int prixprod=20, prixmag=50, prixarcher=30, prixlanc=40, prixchev=50;

    int i;

    /// la c est moi

    char nomfichier [256];
    BITMAP * goldR;
    BITMAP * goldB;
    BITMAP * roi;
    BITMAP * imageBarbare;
    BITMAP * bulle [nbulles];

    BITMAP * fleche;
    BITMAP * ballon;
    BITMAP * championA [nchampionA];
    BITMAP * championM [nchampionM];


    /// le champion

    for (int i=0; i<nchampionM; i++)
    {
        sprintf(nomfichier,"championM%d.bmp",i);

        championM[i] = load_bitmap(nomfichier,NULL);
        if (!championM[i])
        {
            allegro_message("pas pu trouver %s ",nomfichier);
            exit(EXIT_FAILURE);
        }
    }
    for (int i=0; i<nchampionA; i++)
    {
        sprintf(nomfichier,"championA%d.bmp",i);

        championA[i] = load_bitmap(nomfichier,NULL);
        if (!championA[i])
        {
            allegro_message("pas pu trouver %s ",nomfichier);
            exit(EXIT_FAILURE);
        }
    }

    /// la c est plus moi
    BITMAP * decor;
    BITMAP * caseChevalier;
    BITMAP * caseIcone;
    BITMAP* caseennemi;
    BITMAP* casecolallie;
    BITMAP * page;
    BITMAP * iconePerso;
    BITMAP * defaite;
    BITMAP * victoire;
    BITMAP * mouse;


    /// load BITMAP des séquences "animées"
    mouse=load_bitmap("mouse.bmp",NULL);
    if(!mouse)
    {
        allegro_message("y a un pb pour la souris");
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    for (int i=0; i<nbulles; i++)
    {
        sprintf(nomfichier,"bulle%d.bmp",i);

        bulle[i] = load_bitmap(nomfichier,NULL);
        if (!bulle[i])
        {
            allegro_message("pas pu trouver %s ",nomfichier);
            exit(EXIT_FAILURE);
        }
    }
    roi=load_bitmap("king1.bmp",NULL);
    if(!roi)
    {
        allegro_message("y a un pb pour le roi");
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    imageBarbare=load_bitmap("UneImageBarbare.bmp",NULL);
    if(!imageBarbare)
    {
        allegro_message("y a un pb pour l image barbare");
        allegro_exit();
        exit(EXIT_FAILURE);
    }

    goldR=load_bitmap("goldR.bmp",NULL);
    if(!goldR)
    {
        allegro_message("y a un pb pour les goldR");
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    goldB=load_bitmap("goldB.bmp",NULL);
    if(!goldB)
    {
        allegro_message("y a un pb pour les goldB");
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    defaite=load_bitmap("defaite.bmp",NULL);
    if(!defaite)
    {
        allegro_message("y a un pb pour la defaite");
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    victoire=load_bitmap("victoire.bmp",NULL);
    if(!victoire)
    {
        allegro_message("y a un pb pour la victoire");
        allegro_exit();
        exit(EXIT_FAILURE);
    }


    /// load bitmap des ennemis
    for (int i=0; i<nloupsA; i++)
    {
        sprintf(nomfichier,"loupA%d.bmp",i);

        loupA[i] = load_bitmap(nomfichier,NULL);
        if (!loupA[i])
        {
            allegro_message("pas pu trouver %s ",nomfichier);
            exit(EXIT_FAILURE);
        }
    }
    for (int i=0; i<nloupsM; i++)
    {
        sprintf(nomfichier,"loupM%d.bmp",i);

        loupM[i] = load_bitmap(nomfichier,NULL);
        if (!loupM[i])
        {
            allegro_message("pas pu trouver %s ",nomfichier);
            exit(EXIT_FAILURE);
        }
    }
    for (int i=0; i<nbarbaresA; i++)
    {
        sprintf(nomfichier,"barbareA%d.bmp",i);

        barbareA[i] = load_bitmap(nomfichier,NULL);
        if (!barbareA[i])
        {
            allegro_message("pas pu trouver %s ",nomfichier);
            exit(EXIT_FAILURE);
        }
    }
    for (int i=0; i<nbarbaresM; i++)
    {
        sprintf(nomfichier,"barbareM%d.bmp",i);

        barbareM[i] = load_bitmap(nomfichier,NULL);
        if (!barbareM[i])
        {
            allegro_message("pas pu trouver %s ",nomfichier);
            exit(EXIT_FAILURE);
        }
    }
    ballon=load_bitmap("ballon.bmp",NULL);
    if(!ballon)
    {
        allegro_message("y a un pb pour le ballon");
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    /// load bitmap unitées

    for (int i=0; i<narchers; i++)
    {
        sprintf(nomfichier,"archer%d.bmp",i);

        archer[i] = load_bitmap(nomfichier,NULL);
        if (!archer[i])
        {
            allegro_message("pas pu trouver %s ",nomfichier);
            exit(EXIT_FAILURE);
        }
    }
    for (int i=0; i<nforgerons; i++)
    {
        sprintf(nomfichier,"forgeron%d.bmp",i);

        forgeron[i] = load_bitmap(nomfichier,NULL);
        if (!forgeron[i])
        {
            allegro_message("pas pu trouver %s ",nomfichier);
            exit(EXIT_FAILURE);
        }
    }
    for (int i=0; i<nsorciers; i++)
    {
        sprintf(nomfichier,"sorcier%d.bmp",i);

        sorcier[i] = load_bitmap(nomfichier,NULL);
        if (!sorcier[i])
        {
            allegro_message("pas pu trouver %s ",nomfichier);
            exit(EXIT_FAILURE);
        }
    }
    for (int i=0; i<nlanciers; i++)
    {
        sprintf(nomfichier,"lancier%d.bmp",i);

        lancier[i] = load_bitmap(nomfichier,NULL);
        if (!lancier[i])
        {
            allegro_message("pas pu trouver %s ",nomfichier);
            exit(EXIT_FAILURE);
        }
    }
    for (int i=0; i<nchevaliers; i++)
    {
        sprintf(nomfichier,"chevalier%d.bmp",i);

        shevalier[i] = load_bitmap(nomfichier,NULL);
        if (!shevalier[i])
        {
            allegro_message("pas pu trouver %s ",nomfichier);
            exit(EXIT_FAILURE);
        }
    }
    for (int i=0; i<nvendeurs; i++)
    {
        sprintf(nomfichier,"vendeur%d.bmp",i);

        vendeur[i] = load_bitmap(nomfichier,NULL);
        if (!vendeur[i])
        {
            allegro_message("pas pu trouver %s ",nomfichier);
            exit(EXIT_FAILURE);
        }
    }


    ///BITMAPS DES FLECHES/EXPLOSIONS

    for (int i=0; i<nexplosions; i++)
    {
        sprintf(nomfichier,"explosion%d.bmp",i);
        explosion[i] = load_bitmap(nomfichier,NULL);
        if (!explosion[i])
        {
            allegro_message("pas pu trouver %s ",nomfichier);
            exit(EXIT_FAILURE);
        }
    }
    fleche=load_bitmap("fleche.bmp",NULL);
    if(!fleche)
    {
        allegro_message("y a un pb pour la fleche");
        allegro_exit();
        exit(EXIT_FAILURE);
    }

    /// BITMAPS de collision decor buffer etc...


    page=create_bitmap(SCREEN_W,SCREEN_H);
    if(!page)
    {
        allegro_message("Probleme allocation BITMAP page");
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    decor=load_bitmap("decor.bmp",NULL);
    if(!decor)
    {
        allegro_message("pas pu trouver decorLignes.bmp");
        exit(EXIT_FAILURE);
    }
    iconePerso=load_bitmap("icone.bmp",NULL);
    if(!iconePerso)
    {
        allegro_message("pas pu trouver icone");
        exit(EXIT_FAILURE);
    }
    caseChevalier=create_bitmap(SCREEN_W,SCREEN_H);
    if(!caseChevalier)
    {
        allegro_message("Probleme allocation BITMAP caseChevalier");
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    caseIcone=create_bitmap(SCREEN_W,SCREEN_H);
    if(!caseIcone)
    {
        allegro_message("Probleme allocation BITMAP caseIcone");
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    caseennemi=create_bitmap(SCREEN_W + 300,SCREEN_H);
    if(!caseennemi)
    {
        allegro_message("Probleme allocation BITMAP caseChevalier");
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    rectfill(caseennemi, 0,0, caseennemi->w, caseennemi->h, makecol(0,0,0));
    casecolallie=create_bitmap(SCREEN_W,SCREEN_H);
    if(!casecolallie)
    {
        allegro_message("Probleme allocation BITMAP caseChevalier");
        allegro_exit();
        exit(EXIT_FAILURE);
    }




    /// initialisations


    for (i=0; i<30; i++)
    {
        adversaire[i]=(t_ennemi*)malloc(sizeof(t_ennemi));
        adversaire[i]=NULL;
    }

    for (i=0; i<nombreennemi; i++)
    {
        adversaire[i]=creationenneminivtrois(i);
    }
    for (i=0; i<30; i++)
    {
        tabf[i]=(t_flaiche*)malloc(sizeof(t_flaiche));
    }

    if (choixdif==1)
    {
        argentepeiste=300;
        argentdistance=300;
    }
    if (choixdif==2)
    {
        argentepeiste=150;
        argentdistance=150;
    }
    if (choixdif==3)
    {
        argentepeiste=50;
        argentdistance=50;
    }


    boss=creationboss();


    //mesEnnemis=creerListeEnnemis(100);
    mesChevaliers=creerListeChevaliers(30);
    //mesProjectiles=creerListeProjectiles(100);
    clear_to_color(caseChevalier,makecol(0,255,40));
    rectfill(caseChevalier,200,100,caseChevalier->w,caseChevalier->h,makecol(255,255,255));
    clear_to_color(caseIcone,makecol(0,0,0));
    clear_to_color(casecolallie,makecol(0,0,0));
    rectfill(caseIcone,130,0,230,100,makecol(255,1,0));
    rectfill(caseIcone,230,0,330,100,makecol(255,2,0));
    rectfill(caseIcone,330,0,430,100,makecol(255,3,0));
    rectfill(caseIcone,430,0,530,100,makecol(255,4,0));
    rectfill(caseIcone,530,0,630,100,makecol(255,5,0));
    rectfill(caseIcone,630,0,730,100,makecol(255,6,0));
    rectfill(caseIcone,730,25,780,75,makecol(255,7,0));





    /// debut du niveau
    while (!mouse_b &1)
    {
        clear(page);
        blit(decor,page,0,0,0,0,decor->w,decor->h);
        draw_sprite(page,roi,200,416);
        draw_sprite(page,bulle[5],400,100);
        //draw_sprite_h_flip(page,imageBarbare,100,368);
        blit(page,screen,0,0,0,0,page->w,page->h);
    }
    rest(500);
    while (!mouse_b &1)
    {
        clear(page);
        blit(decor,page,0,0,0,0,decor->w,decor->h);
        //draw_sprite(page,roi,200,416);
        draw_sprite(page,bulle[6],200,100);
        draw_sprite(page,imageBarbare,600,368);
        blit(page,screen,0,0,0,0,page->w,page->h);
    }
    rest(500);
    while(!key[KEY_ESC])
    {
        if (key[KEY_RIGHT])
        {
            blit(casecolallie, page, 0,0,0,0, decor->w, decor->h);
        }
        else
        {
            if (key[KEY_UP])
            {
                blit(caseennemi, page, 0,0,0,0, decor->w, decor->h);
            }

            else
            {
                if(key[KEY_LEFT])
                {
                    blit(caseChevalier,page,0,0,0,0,decor->w,decor->h);
                }
                else
                {
                    if(key[KEY_DOWN])
                    {
                        blit(caseIcone,page,0,0,0,0,decor->w,decor->h);
                    }
                    else
                    {
                        blit(decor,page,0,0,0,0,decor->w,decor->h);
                    }
                }
            }
        }
        dessinermenu(page,vendeur,forgeron,archer,sorcier,lancier,shevalier,iconePerso);



        icone(caseIcone,&clicker, &argentepeiste, &argentdistance, &validation, &prixunite);
        if(clicker!=0)
        {
            if(mouse_b&2)
            {
                recupererargent (&clicker, &validation, &argentepeiste, &argentdistance, prixunite);
            }
            else
            {
                if((mouse_x>=200)&&(mouse_x<=800)&&(mouse_y>=100)&&(mouse_y<=600))
                {
                    if(clicker!=7)
                    {
                        siZoneAjout(page,caseChevalier, caseennemi);
                        if(mouse_b&1)
                        {
                            mesChevaliers=ajouterChevalier(mesChevaliers,&clicker,caseChevalier, &validation, casecolallie, caseennemi);
                        }
                    }
                    else
                    {
                        if(clicker==7)
                        {
                            siZoneSupprimer(page,caseChevalier);
                            if(mouse_b&1)
                            {
                                mesChevaliers=pelleChevalier(caseChevalier,mesChevaliers,&clicker, &validation);
                            }
                        }
                    }
                }
            }
        }

        actualiserargent(&argentepeiste, &argentdistance, &compteurproche, &compteurloin, mesChevaliers);

        if (boss->vivant==1)
        {
            actualiserboss(boss, casecolallie, page, barbareM, barbareA, caseennemi, loupA, loupM, boss->y, &arret);
            actualiserboss(boss, casecolallie, page, barbareM, barbareA, caseennemi, loupA, loupM, boss->y - 52, &arret);
            actualiserboss(boss, casecolallie, page, barbareM, barbareA, caseennemi, loupA, loupM, boss->y + 52, &arret);

            if (arret==0)
            {
                draw_sprite (page,ballon,boss->x-150,boss->y-132);
                boss->x=boss->x + boss->dx;
                if (boss->y - boss->ty/2<=50)
                    boss->dy=0.07;
                if (boss->y + boss->ty/2>=600)
                    boss->dy=-0.07;
                boss->y=boss->y + boss->dy;
            }
            else
            {
                draw_sprite (page,ballon,boss->x-150,boss->y-132);
                arret=0;
            }
        }

        if (boss->vivant==0)
            actualisertableauennemi(adversaire, nombreennemi, mesChevaliers, casecolallie,page,barbareM,barbareA, caseennemi,loupA,loupM,championA,championM);

        actualiserListeChevalier(mesChevaliers,caseChevalier, casecolallie);

        collisiontaballie(caseennemi, mesChevaliers);


        draw_sprite(page,goldR,0,0);
        draw_sprite(page,goldB,0,20);

        textprintf_ex(page,font,20,7,makecol(255,255,255),makecol(0,0,0),"%d",argentepeiste);
        textprintf_ex(page,font,20,27,makecol(255,255,255),makecol(0,0,0),"%d",argentdistance);

        textprintf_ex(page,font,165,85,makecol(0,127,255),makecol(0,0,0),"%d",prixprod);
        textprintf_ex(page,font,265,85,makecol(255,0,0),makecol(0,0,0),"%d",prixprod);
        textprintf_ex(page,font,365,85,makecol(0,127,255),makecol(0,0,0),"%d",prixarcher);
        textprintf_ex(page,font,465,85,makecol(0,127,255),makecol(0,0,0),"%d",prixmag);
        textprintf_ex(page,font,565,85,makecol(255,0,0),makecol(0,0,0),"%d",prixlanc);
        textprintf_ex(page,font,665,85,makecol(255,0,0),makecol(0,0,0),"%d",prixchev);

        dessinerboss(caseennemi, boss);

        if (boss->vivant==0)
            dessinertableauennemi(caseennemi, adversaire, nombreennemi);

        ///Permet de voir si tous les ennemis sont mort OU si il y en a un qui a passé la ligne
        for (i=0; i<nombreennemi; i++)
            if (adversaire[i]->vivant==0)
                tousmort++;
        if (tousmort<nombreennemi)
            tousmort=0;
        if (tousmort==nombreennemi)
        {
            clear(page);
            while (!key[KEY_ESC])
            {
                draw_sprite (page,decor,0,0);
                draw_sprite (page,victoire,0,50);
                blit(page,screen,0,0,0,0,page->w,page->h);
            }
            while (!mouse_b &1)
            {
                clear(page);
                blit(decor,page,0,0,0,0,decor->w,decor->h);
                draw_sprite(page,roi,200,416);
                draw_sprite(page,bulle[7],400,100);
                //draw_sprite_h_flip(page,imageBarbare,100,368);
                blit(page,screen,0,0,0,0,page->w,page->h);
            }
            return 1;
        }
        for (i=0; i<nombreennemi; i++)
            if (adversaire[i]->x<150 && adversaire[i]->vivant==1)
            {
                clear(page);
                while (!key[KEY_ESC])
                {
                    draw_sprite (page,decor,0,0);
                    draw_sprite (page,defaite,0,50);
                    blit(page,screen,0,0,0,0,page->w,page->h);
                }
                return 0;
            }

        if (boss->vivant==1 && boss->x<200)
        {
            clear(page);
            while (!key[KEY_ESC])
            {
                draw_sprite (page,decor,0,0);
                draw_sprite (page,defaite,0,50);
                blit(page,screen,0,0,0,0,page->w,page->h);
            }
            return 0;
        }

        dessinerListeChevalier(page,caseennemi,mesChevaliers,vendeur,forgeron,archer,sorcier,lancier,shevalier,explosion,fleche,tabf);

        affichagetabhp(mesChevaliers, page);

        if (boss->vivant==0)
            affichagehpennemi(adversaire, nombreennemi, page);

        affichagehpboss(boss, page);
        dessinerSouris(clicker, caseIcone, page,vendeur,forgeron,archer,sorcier,lancier,shevalier,mouse);
        blit(page,screen,0,0,0,0,page->w,page->h);
        clear(page);
    }


    /// destroy des bitmaps une fois le niveau finni pour eviter les fuites de mémoire
    for (i=0; i<nforgerons; i++)
    {
        destroy_bitmap(forgeron[i]);
    }
    for (i=0; i<nvendeurs; i++)
    {
        destroy_bitmap(vendeur[i]);
    }
    for (i=0; i<narchers; i++)
    {
        destroy_bitmap(archer[i]);
    }
    for (i=0; i<nsorciers; i++)
    {
        destroy_bitmap(sorcier[i]);
    }
    for (i=0; i<nchevaliers; i++)
    {
        destroy_bitmap(shevalier[i]);
    }
    for (i=0; i<nlanciers; i++)
    {
        destroy_bitmap(lancier[i]);
    }
    for (i=0; i<nbulles; i++)
    {
        destroy_bitmap(bulle[i]);
    }
    for (i=0; i<nbarbaresA; i++)
    {
        destroy_bitmap(barbareA[i]);
    }
    for (i=0; i<nbarbaresM; i++)
    {
        destroy_bitmap(barbareM[i]);
    }
    for (i=0; i<nchampionA; i++)
    {
        destroy_bitmap(championA[i]);
    }
    for (i=0; i<nchampionM; i++)
    {
        destroy_bitmap(championM[i]);
    }
    destroy_bitmap (mouse);
    destroy_bitmap (victoire);
    destroy_bitmap (defaite);
    destroy_bitmap(roi);
    destroy_bitmap(imageBarbare);
    destroy_bitmap(ballon);
    return 0;
}
