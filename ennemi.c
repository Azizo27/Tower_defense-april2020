

#include "bibli.h"


t_ennemi* creerennemi(int numero)

{
    t_ennemi* nouv;
    nouv=(t_ennemi*) malloc(sizeof(t_ennemi));
    nouv->tx=100;
    nouv->ty=100;
    nouv->type=1;

    nouv->dx=-0.08;
    if (numero==0)
    {
        nouv->x=1150;
        nouv->y=150;
    }

    if (numero==1)
    {
        nouv->x=1150;
        nouv->y=450;
    }
    if (numero==2)
    {
        nouv->x=1450;
        nouv->y=250;

    }
    if (numero==3)
    {
        nouv->x=1650;
        nouv->y=350;
    }
    if (numero==4)
    {
        nouv->x=1850;
        nouv->y=450;
    }
    if (numero==5)
    {
        nouv->x=2250;
        nouv->y=550;
    }
    if (numero==6)
    {
        nouv->x=2350;
        nouv->y=150;
    }
    if (numero==7)
    {
        nouv->x=2350;
        nouv->y=250;
    }
    if (numero==8)
    {
        nouv->x=2550;
        nouv->y=350;
    }
    if (numero==9)
    {
        nouv->x=2850;
        nouv->y=150;
    }
    if (numero==10)
    {
        nouv->x=2850;
        nouv->y=350;
    }
    if (numero==11)
    {
        nouv->x=2850;
        nouv->y=550;
    }
    nouv->hp=10000;
    nouv->dy=0;
    nouv->vivant=1;
    nouv->anim=0;
    nouv->cptimage=0;
    return nouv;
}

t_ennemi* creationenneminivdeux (int numero)

{
    t_ennemi* nouv;
    nouv=(t_ennemi*) malloc(sizeof(t_ennemi));
    nouv->tx=100;
    nouv->ty=100;

    if (numero==0)
    {
        nouv->type=1;
        nouv->x=1250;
        nouv->y=250;
    }

    if (numero==1)
    {
        nouv->type=1;
        nouv->x=950;
        nouv->y=350;
    }
    if (numero==2)
    {
        nouv->type=2;
        nouv->x=2550;
        nouv->y=450;

    }
    if (numero==3)
    {
        nouv->type=1;
        nouv->x=1250;
        nouv->y=150;
    }
    if (numero==4)
    {
        nouv->type=2;
        nouv->x=3450;
        nouv->y=550;
    }
    if (numero==5)
    {
        nouv->type=1;
        nouv->x=1450;
        nouv->y=250;
    }
    if (numero==6)
    {
        nouv->type=2;
        nouv->x=4250;
        nouv->y=350;
    }
    if (numero==7)
    {
        nouv->type=2;
        nouv->x=4150;
        nouv->y=150;
    }
    if (numero==8)
    {
        nouv->type=1;
        nouv->x=2650;
        nouv->y=450;
    }
    if (numero==9)
    {
        nouv->type=2;
        nouv->x=3150;
        nouv->y=250;
    }
    if (numero==10)
    {
        nouv->type=1;
        nouv->x=2250;
        nouv->y=350;
    }
    if (numero==11)
    {
        nouv->type=2;
        nouv->x=5150;
        nouv->y=550;
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

    nouv->dy=0;
    nouv->vivant=1;
    nouv->anim=0;
    nouv->cptimage=0;
    return nouv;
}

void degatdistanceennemi(t_ennemi* adversaire, BITMAP* casecolallie, int distancecase, BITMAP* caseennemi)
{
    int cimcase, bleu;
    int cim1, cim2, cim3, cim4;
    int  bleuun=0, bleudeux=0, bleutrois=0, bleuquatre=0;

    cimcase=getpixel(casecolallie, adversaire->x-distancecase, adversaire->y);
    bleu=getb(cimcase);

    if (distancecase==150)
    {
        cim1=getpixel(caseennemi, adversaire->x - 52, adversaire->y);
        bleuun=getb(cim1);
    }
    if (distancecase==250)
    {
        cim1=getpixel(caseennemi, adversaire->x - 52, adversaire->y);
        bleuun=getb(cim1);

        cim2=getpixel(caseennemi, adversaire->x - 152, adversaire->y);
        bleudeux=getb(cim2);
    }
    if (distancecase==350)
    {
        cim1=getpixel(caseennemi, adversaire->x - 52, adversaire->y);
        bleuun=getb(cim1);

        cim2=getpixel(caseennemi, adversaire->x - 152, adversaire->y);
        bleudeux=getb(cim2);

        cim3=getpixel(caseennemi, adversaire->x - 252, adversaire->y);
        bleutrois=getb(cim3);


    }
    if (distancecase==450)
    {
        cim1=getpixel(caseennemi, adversaire->x - 52, adversaire->y);
        bleuun=getb(cim1);

        cim2=getpixel(caseennemi, adversaire->x - 152, adversaire->y);
        bleudeux=getb(cim2);

        cim3=getpixel(caseennemi, adversaire->x - 252, adversaire->y);
        bleutrois=getb(cim3);

        cim4=getpixel(caseennemi, adversaire->x - 352, adversaire->y);
        bleuquatre=getb(cim4);

    }


    if (bleu==10 && bleuun==0 && bleudeux==0 && bleutrois==0 && bleuquatre==0)
        if (adversaire->x<=750)
            adversaire->hp=adversaire->hp-4;

    if (bleu==15 && bleuun==0 && bleudeux==0 && bleutrois==0 && bleuquatre==0)
        if (adversaire->x<=750)
        {
            adversaire->hp=adversaire->hp-6;
            ///Code pour ralentir les ennemis
            if (adversaire->type==1)
                adversaire->dx=-0.02;
            if (adversaire->type==2)
                adversaire->dx=-0.05;
        }
}

void actualisationennemi(t_ennemi* adversaire, BITMAP* casecolallie,BITMAP * page,BITMAP * barbareM[nbarbaresM],BITMAP * barbareA[nbarbaresA], BITMAP* caseennemi,BITMAP * loupA [nloupsA],BITMAP * loupM[nloupsM],BITMAP * championA [nchampionA],BITMAP * championM [nchampionM])
{
    int cim, b;

    cim=getpixel(casecolallie, adversaire->x-50, adversaire->y);
    b=getb(cim);
    if (b==5 || b==10 || b==15 || b==20 || b==25)
    {
        if (adversaire->vivant!=0 && adversaire->type==1)
            animBarbareA(adversaire,page,barbareA);

        if (adversaire->vivant!=0 && adversaire->type==2)
        {
            if (adversaire->anim>=nloupsA)
                adversaire->anim=0;
            animLoupA(adversaire,page,loupA);
        }
        if (adversaire->vivant!=0 && adversaire->type==4)
        {
            animChampionA(adversaire,page,championA);
        }

        if (b==5)
        {
            // forgerons et vendeurs
        }
        if (b==10)
            if (adversaire->x<=800)
                adversaire->hp=adversaire->hp - 4;

        if (b==15)
            // sorciers
            if (adversaire->x<=800)
                adversaire->hp=adversaire->hp - 6;

        if (b==20)
            // lanciers
            if (adversaire->x<=850)
                adversaire->hp=adversaire->hp - 8;

        if (b==25)
            // chevaliers
            if (adversaire->x<=850)
                adversaire->hp=adversaire->hp - 12;
    }
    else
    {
        if (adversaire->vivant!=0 && adversaire->type==1)
            animBarbareM(adversaire,page,barbareM);

        if (adversaire->vivant!=0 && adversaire->type==2)
        {
            animLoupM(adversaire,page,loupM);
        }
        if (adversaire->vivant!=0 && adversaire->type==4)
        {
            animChampionM(adversaire,page,championM);
        }
        adversaire->x=adversaire->x+adversaire->dx;
        adversaire->y=adversaire->y + adversaire->dy;
    }

    degatdistanceennemi(adversaire, casecolallie, 150, caseennemi);
    degatdistanceennemi(adversaire, casecolallie, 250, caseennemi);
    degatdistanceennemi(adversaire, casecolallie, 350, caseennemi);
    degatdistanceennemi(adversaire, casecolallie, 450, caseennemi);
    degatdistanceennemi(adversaire, casecolallie, 550, caseennemi);


    if (adversaire->hp<=0)
        adversaire->hp=0;

    if (adversaire->hp==0)
        adversaire->vivant=0;
}



void enleverennemi(t_ennemi* la[30], int i)
{
    if (la[i]!=NULL)
    {
        free(la[i]);
        //la[i]=NULL;
    }
}


void actualisertableauennemi (t_ennemi* la[30], int nombreennemi, t_listeChevaliers* allie, BITMAP* casecolallie,BITMAP * page,BITMAP * barbareM[nbarbaresM],BITMAP * barbareA[nbarbaresA], BITMAP* caseennemi,BITMAP * loupA [nloupsA],BITMAP * loupM[nloupsM],BITMAP * championA [nchampionA],BITMAP * championM [nchampionM])
{
    int i;
    for (i=0; i<nombreennemi; i++)
        if (la[i]!=NULL)
        {
            actualisationennemi(la[i], casecolallie,page,barbareM,barbareA, caseennemi,loupA,loupM,championA,championM);
            if (!la[i]->vivant)
                enleverennemi (la, i);
        }
}

void dessinerennemi(BITMAP* bmp, t_ennemi* adversaire)
{
    if (adversaire->vivant==1)
        rectfill(bmp, adversaire->x - adversaire->tx/2, adversaire->y - adversaire->ty/2, adversaire->x + adversaire->tx/2, adversaire->y + adversaire->ty/2, makecol(0,0,255));
}


void dessinertableauennemi(BITMAP* bmp, t_ennemi* la[30], int nombrennemi)
{
    int i;
    clear(bmp);
    for (i=0; i<nombrennemi; i++)
    {
        if (la[i]!=NULL)
            dessinerennemi(bmp, la[i]);

    }
}
