
#include "bibli.h"

/*
https://fercoq.bitbucket.io/allegro/Alleg_C3/2_0_acteurs_en_quantite_variable.html
https://pedago ece.campusonline.me/mod/folder/view.php?id=69658
https://drive.google.com/drive/folders/1IT4mqtp_A7CQS6eqvJSIaaJeyAvhgKyC
https://fercoq.bitbucket.io/allegro/tp4/allegro_tp4.pdf
Decor
https://www.google.com/search?q=tower%20defense%20background&tbm=isch&tbs=rimg%3ACV8t9OltPZu2ImD340
3I79tteMw48HWqFr
NnToS5F20HVQfxtVb_1aJGSvwoZVFqxvOcy9Ut9v7EjqpDJXa0WmMHfKQpw0cZcMyYFn6O62GhF75iLRz206s52M5uJmu
e o7zwvfH7wBT7gqEgn3403I79tteBE9aQoY5Dx47ioSCcw48HWqFr NESO5ea
D3psdKhIJnToS5F20HVQRviUoK292wiIqEgkfxtVb_1aJGShEUVorrMGA96SoSCfwoZVFqxvOcEXvWQstsUoj2KhIJy9Ut9v7E
jqoRa7Z0SP60LukqEglDJXa0WmMHfBGaAMb0cEBPhCoSCaQpw0cZcMyYEf3pqgmI_1rePKhIJFn6O62GhF74RugSJIExi26
cqEgliLRz206s52BHFY1Ry8hjCrioSCc5uJmue o7EWw1o4
1HkDoKhIJzwvfH7wBT7gRwHlw900iWxphP3jqOSXI1Yk&rlz=1C1CHBF_frFR880FR880&hl=fr&ved=0CBwQuIIBahcKEwjQ
9JLP3MboAhUAAAAAHQAAAAAQKQ&biw=1349&bih=576#imgrc=M9j LXdFVFbv5M
Sprites
: https://www.spriters resource.com/


*/
int main()
{

    FILE* fp;


    int   sauv;
    int nivsuiv=0;
    int choixMenu=5;
    int choixdif=2;
    BITMAP * imageMenu;
    BITMAP * roi;
    BITMAP * imageBarbare;
    BITMAP * banderole;
    BITMAP * niveau;
    BITMAP * niveau1;
    BITMAP * niveau2;
    BITMAP * niveau3;
    BITMAP * quitter;
    BITMAP * mouse;

    BITMAP * page;

    BITMAP * explosion [nexplosions];


    BITMAP * archer[narchers];
    BITMAP * forgeron[nforgerons];
    BITMAP * sorcier [nsorciers];
    BITMAP * lancier [nlanciers];
    BITMAP * shevalier[nchevaliers];
    BITMAP * vendeur [nvendeurs];


    BITMAP * loupA [nloupsA];
    BITMAP * loupM [nloupsM];
    BITMAP * barbareA[nbarbaresA];
    BITMAP * barbareM[nbarbaresM];


    BITMAP * credits;
    BITMAP * reglages;
    BITMAP * facile;
    BITMAP * normal;
    BITMAP * regles;
    BITMAP * difficile;
    BITMAP * fondCredits;
    BITMAP * fondRegles;

    allegro_init();
    install_keyboard();
    install_mouse();

    set_color_depth(desktop_color_depth());


    if (set_gfx_mode(GFX_AUTODETECT_WINDOWED,800,600,0,0)!=0)
    {
        allegro_message("prb gfx mode");
        allegro_exit();
        exit(EXIT_FAILURE);
    }


    facile=load_bitmap("facile.bmp",NULL);
    if(!facile)
    {
        allegro_message("y a un pb pour facile");
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    normal=load_bitmap("normal.bmp",NULL);
    if(!normal)
    {
        allegro_message("y a un pb pour normal");
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    difficile=load_bitmap("difficile.bmp",NULL);
    if(!difficile)
    {
        allegro_message("y a un pb pour difficile");
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    credits=load_bitmap("credits.bmp",NULL);
    if(!credits)
    {
        allegro_message("y a un pb pour les credits");
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    fondCredits=load_bitmap("fondCredits.bmp",NULL);
    if(!fondCredits)
    {
        allegro_message("y a un pb pour le fond credits");
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    fondRegles=load_bitmap("fondRegles.bmp",NULL);
    if(!fondRegles)
    {
        allegro_message("y a un pb pour le fond regles");
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    regles=load_bitmap("regles.bmp",NULL);
    if(!regles)
    {
        allegro_message("y a un pb pour regles");
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    reglages=load_bitmap("reglages.bmp",NULL);
    if(!reglages)
    {
        allegro_message("y a un pb pour les reglages");
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    mouse=load_bitmap("mouse.bmp",NULL);
    if(!mouse)
    {
        allegro_message("y a un pb pour la sourie");
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    imageMenu=load_bitmap("screenMenu.bmp",NULL);
    if(!imageMenu)
    {
        allegro_message("y a un pb pour le menu");
        allegro_exit();
        exit(EXIT_FAILURE);
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
    banderole=load_bitmap("banderole.bmp",NULL);
    if(!banderole)
    {
        allegro_message("y a un pb pour banderole");
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    niveau=load_bitmap("niveau.bmp",NULL);
    if(!niveau)
    {
        allegro_message("y a un pb pour niveau");
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    niveau1=load_bitmap("niveau1.bmp",NULL);
    if(!niveau1)
    {
        allegro_message("y a un pb pour niveau1");
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    niveau2=load_bitmap("niveau2.bmp",NULL);
    if(!niveau2)
    {
        allegro_message("y a un pb pour niveau2");
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    niveau3=load_bitmap("niveau3.bmp",NULL);
    if(!niveau3)
    {
        allegro_message("y a un pb pour niveau3");
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    quitter=load_bitmap("quitter.bmp",NULL);
    if(!quitter)
    {
        allegro_message("y a un pb pour quitter");
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    /// fin du load des bitmaps du menu


    ///fin du load de tous les bitmaps et des initialisations.



    page=create_bitmap(SCREEN_W,SCREEN_H);

    while(!choixMenu==0)
    {
        choixMenu=5;
        blit(imageMenu,page,0,0,0,0,screen->w,screen->h);
        draw_sprite(page,banderole,0,0);
        draw_sprite(page,niveau,200,200);
        draw_sprite(page,reglages,400,200);
        draw_sprite(page,credits,200,250);
        draw_sprite(page,regles,400,250);
        draw_sprite(page,quitter,300,300);
        draw_sprite_h_flip(page,roi,600,416);
        draw_sprite_h_flip(page,imageBarbare,100,368);
        draw_sprite(page,mouse,mouse_x,mouse_y);
        blit(page,screen,0,0,0,0,screen->w,screen->h);
        clear (page);

        choixMenu=selectionMenu();

        ///si on clique sur la case niveau on rentre dans ce menu
         if (choixMenu==4)
        {
            while(!key[KEY_ESC]){
            blit(imageMenu,page,0,0,0,0,screen->w,screen->h);
            masked_blit(fondRegles,page,0,0,0,0,screen->w,screen->h);
            blit(page,screen,0,0,0,0,screen->w,screen->h);}
        }
        if (choixMenu==3)
        {
            while(!key[KEY_ESC]){
            blit(imageMenu,page,0,0,0,0,screen->w,screen->h);
            masked_blit(fondCredits,page,0,0,0,0,screen->w,screen->h);
            blit(page,screen,0,0,0,0,screen->w,screen->h);  }
        }
        if (choixMenu==2)
        {
            rest(500);
            while (choixMenu!=15)
            {
                blit(imageMenu,page,0,0,0,0,screen->w,screen->h);
                draw_sprite(page,facile,100,200);
                draw_sprite(page,normal,300,200);
                draw_sprite(page,difficile,500,200);
                draw_sprite(page,quitter,300,300);
                draw_sprite(page,mouse,mouse_x,mouse_y);
                if (choixdif==1)
                    textprintf_ex(page,font,400,50,makecol(0,0,0),makecol(255,255,255),"Facile");
                if (choixdif==2)
                    textprintf_ex(page,font,400,50,makecol(0,0,0),makecol(255,255,255),"normal");
                if (choixdif==3)
                    textprintf_ex(page,font,400,50,makecol(0,0,0),makecol(255,255,255),"difficile");
                blit(page,screen,0,0,0,0,screen->w,screen->h);
                choixMenu=selectionDif(&choixdif);
                //printf("%d",choixdif);
                }
            rest (500);
        }
        if (choixMenu==1)
        {

            choixMenu=10;


            do
            {
                blit (imageMenu,page,0,0,0,0,screen->w,screen->h);
                draw_sprite(page,banderole,0,0);
                draw_sprite_h_flip(page,roi,600,416);
                draw_sprite_h_flip(page,imageBarbare,100,368);
                draw_sprite(page,niveau1,300,250);
                draw_sprite(page,niveau2,300,300);
                draw_sprite(page,niveau3,300,350);
                draw_sprite(page,quitter,300,400);
                draw_sprite(page,mouse,mouse_x,mouse_y);
                blit (page,screen,0,0,0,0,screen->w,screen->h);
                clear(page);

                /// on selectionnne le niveau ou on selectionne quitter pour revenir en arrière
                choixMenu=selectionNiveau();

                /// si le niveau 1 a été cliqué on rentre dans cette boucle
                if (choixMenu==1)
                {
                    fp=fopen("sauvegarde.txt", "r");
                    if (fp==NULL)
                    {
                        printf("problème problème");
                    }
                    else
                    {
                        fscanf(fp, "%d",&(sauv));
                        fclose(fp);
                    }
                    if ((sauv==1)||(sauv==2)||(sauv==3))
                    {
                        nivsuiv=premNiveau(vendeur,forgeron,archer,sorcier,lancier,shevalier,barbareM,barbareA, 1,loupA,loupM,explosion, choixdif,sauv);
                        //printf("%d",choixMenu);
                    }
                    else
                    {
                        choixMenu=10;
                    }
                    rest(50);
                    fp=fopen("sauvegarde.txt", "r");
                    if (fp==NULL)
                    {
                        printf("problème problème");
                    }
                    else
                    {
                        fscanf(fp, "%d",&(sauv));
                        fclose(fp);
                    }

                    if (nivsuiv==1 && ((sauv==2)||(sauv==3)))
                    {
                        nivsuiv=0;
                        nivsuiv=premNiveau(vendeur,forgeron,archer,sorcier,lancier,shevalier,barbareM,barbareA, 2,loupA,loupM,explosion, choixdif,sauv);
                        fp=fopen("sauvegarde.txt", "r");
                        if (fp==NULL)
                        {
                            printf("problème problème");
                        }
                        else
                        {
                            fscanf(fp, "%d",&(sauv));
                            fclose(fp);
                        }
                        if (nivsuiv==1 && sauv==3)
                        {
                            nivsuiv=0;
                            nivsuiv=niveautrois(vendeur,forgeron,archer,sorcier,lancier,shevalier,barbareM,barbareA, 1,loupA,loupM,explosion, choixdif,sauv);
                        }
                    }
                }
                /// si le niveau 2 a été cliqué on rentre dans cette boucle
                if (choixMenu==2)
                {
                    fp=fopen("sauvegarde.txt", "r");
                    if (fp==NULL)
                    {
                        printf("problème problème");
                    }
                    else
                    {
                        fscanf(fp, "%d",&(sauv));
                        fclose(fp);
                    }

                    if ((sauv==2)||(sauv==3))
                        nivsuiv=premNiveau(vendeur,forgeron,archer,sorcier,lancier,shevalier,barbareM,barbareA, 2,loupA,loupM,explosion, choixdif,sauv);
                    // allegro_message("%d",nivsuiv);
                    fp=fopen("sauvegarde.txt", "r");
                    if (fp==NULL)
                    {
                        printf("problème problème");
                    }
                    else
                    {
                        fscanf(fp, "%d",&(sauv));
                        fclose(fp);
                    }

                    if (nivsuiv==1 && sauv==3)
                    {
                        //nivsuiv==0;
                        nivsuiv=niveautrois(vendeur,forgeron,archer,sorcier,lancier,shevalier,barbareM,barbareA, 1,loupA,loupM,explosion, choixdif,sauv);
                    }
                    else///AJOUTE

                        choixMenu=10;
                }

                /// si le niveau 3 a été cliqué on rentre dans cette boucle
                if (choixMenu==3)
                {
                    nivsuiv=0;
                    fp=fopen("sauvegarde.txt", "r");
                    if (fp==NULL)
                    {
                        printf("problème problème");
                    }
                    else
                    {
                        fscanf(fp, "%d",&(sauv));
                        fclose(fp);
                    }

                    if (sauv==3)
                        nivsuiv=niveautrois(vendeur,forgeron,archer,sorcier,lancier,shevalier,barbareM,barbareA, 1,loupA,loupM,explosion, choixdif,sauv);
                    else///AJOUTE

                        choixMenu=10;
                }
            }
            while (choixMenu!=100);

        }
    }
    return 0;

}
END_OF_MAIN();
