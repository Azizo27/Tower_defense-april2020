

#include "bibli.h"



t_listeChevaliers * ajouterChevalier(t_listeChevaliers * mesChevaliers, int * clicker, BITMAP * caseChevalier, int * validation, BITMAP* casecolallie, BITMAP* caseennemi)
{
    int i;
    t_chevalier * chevalier;
    if(mesChevaliers->n >= mesChevaliers->max)
    {
        return NULL;
    }
    i=0;
    while(mesChevaliers->tab[i] != NULL && i < mesChevaliers->max)
    {
        i++;
    }
    if( i < mesChevaliers->max)
    {
        chevalier=creerChevalier(&clicker,caseChevalier,i, &validation, casecolallie, caseennemi);
        mesChevaliers->tab[i]=chevalier;
        if(chevalier!=NULL)
        {
            mesChevaliers->n++;
        }
    }
    else
    {
        allegro_message("Anomalie gestion ajouterChevalier : liste corrompue");
    }
    return mesChevaliers;
}


t_chevalier * creerChevalier(int ** clicker, BITMAP * caseChevalier, int i, int **validation, BITMAP* casecolallie, BITMAP* caseennemi)
{
    t_chevalier *nouv;
    int couleur, coulr;
    int coulcollision;
    int cimboss, coulboss ;

    couleur=getpixel(caseChevalier, mouse_x, mouse_y);
    coulr=getr(couleur);

    cimboss=getpixel(caseennemi, mouse_x, mouse_y);
    coulboss=getb(cimboss);

    if(coulr==0 || coulboss==250)
    {
        return NULL;
    }

    nouv=(t_chevalier *)malloc(sizeof(t_chevalier));


    nouv->tx=50;
    nouv->ty=50;

    nouv->type=**clicker;
    if (nouv->type==1 || nouv->type==2)
    {
        coulcollision=makecol(0,0,5);
        nouv->hp=500;
    }
    if (nouv->type==3)
    {
        coulcollision=makecol(0,0,10);
        nouv->hp=500;
    }
    if (nouv->type==4)
    {
        coulcollision=makecol(0,0,15);
        nouv->hp=1000;
    }
    if (nouv->type==5)
    {
        coulcollision=makecol(0,0,20);
        nouv->hp=1500;
    }
    if (nouv->type==6)
    {
        coulcollision=makecol(0,0,25);
        nouv->hp=2000;
    }

    if((mouse_x>=200)&&(mouse_x<300)&&(mouse_y>=100)&&(mouse_y<200))
    {
        nouv->x=250;
        nouv->y=150;
        **clicker=0;
        rectfill(caseChevalier,200,100,299,199,makecol(0,0,i));
        rectfill(casecolallie, 200, 100, 299, 199, coulcollision);
    }
    if((mouse_x>=300)&&(mouse_x<400)&&(mouse_y>=100)&&(mouse_y<200))
    {
        nouv->x=350;
        nouv->y=150;
        **clicker=0;
        rectfill(caseChevalier,300,100,399,199,makecol(0,0,i));
        rectfill(casecolallie, 300, 100, 399, 199, coulcollision);
    }
    if((mouse_x>=400)&&(mouse_x<500)&&(mouse_y>=100)&&(mouse_y<200))
    {
        nouv->x=450;
        nouv->y=150;
        **clicker=0;
        rectfill(caseChevalier,400,100,499,199,makecol(0,0,i));
        rectfill(casecolallie, 400, 100, 499, 199, coulcollision);
    }
    if((mouse_x>=500)&&(mouse_x<600)&&(mouse_y>=100)&&(mouse_y<200))
    {
        nouv->x=550;
        nouv->y=150;
        **clicker=0;
        rectfill(caseChevalier,500,100,599,199,makecol(0,0,i));
        rectfill(casecolallie, 500, 100, 599, 199, coulcollision);
    }
    if((mouse_x>=600)&&(mouse_x<700)&&(mouse_y>=100)&&(mouse_y<200))
    {
        nouv->x=650;
        nouv->y=150;
        **clicker=0;
        rectfill(caseChevalier,600,100,699,199,makecol(0,0,i));
        rectfill(casecolallie, 600, 100, 699, 199, coulcollision);
    }
    if((mouse_x>=700)&&(mouse_x<800)&&(mouse_y>=100)&&(mouse_y<200))
    {
        nouv->x=750;
        nouv->y=150;
        **clicker=0;
        rectfill(caseChevalier,700,100,799,199,makecol(0,0,i));
        rectfill(casecolallie, 700, 100, 799, 199, coulcollision);
    }


    if((mouse_x>=200)&&(mouse_x<300)&&(mouse_y>=200)&&(mouse_y<300))
    {
        nouv->x=250;
        nouv->y=250;
        **clicker=0;
        rectfill(caseChevalier,200,200,299,299,makecol(0,0,i));
        rectfill(casecolallie, 200, 200, 299, 299, coulcollision);
    }
    if((mouse_x>=300)&&(mouse_x<400)&&(mouse_y>=200)&&(mouse_y<300))
    {
        nouv->x=350;
        nouv->y=250;
        **clicker=0;
        rectfill(caseChevalier,300,200,399,299,makecol(0,0,i));
        rectfill(casecolallie, 300, 200, 399, 299, coulcollision);
    }
    if((mouse_x>=400)&&(mouse_x<500)&&(mouse_y>=200)&&(mouse_y<300))
    {
        nouv->x=450;
        nouv->y=250;
        **clicker=0;
        rectfill(caseChevalier,400,200,499,299,makecol(0,0,i));
        rectfill(casecolallie, 400, 200, 499, 299, coulcollision);
    }
    if((mouse_x>=500)&&(mouse_x<600)&&(mouse_y>=200)&&(mouse_y<300))
    {
        nouv->x=550;
        nouv->y=250;
        **clicker=0;
        rectfill(caseChevalier,500,200,599,299,makecol(0,0,i));
        rectfill(casecolallie, 500, 200, 599, 299, coulcollision);
    }
    if((mouse_x>=600)&&(mouse_x<700)&&(mouse_y>=200)&&(mouse_y<300))
    {
        nouv->x=650;
        nouv->y=250;
        **clicker=0;
        rectfill(caseChevalier,600,200,699,299,makecol(0,0,i));
        rectfill(casecolallie, 600, 200, 699, 299, coulcollision);
    }
    if((mouse_x>=700)&&(mouse_x<800)&&(mouse_y>=200)&&(mouse_y<300))
    {
        nouv->x=750;
        nouv->y=250;
        **clicker=0;
        rectfill(caseChevalier,700,200,799,299,makecol(0,0,i));
        rectfill(casecolallie, 700, 200, 799, 299, coulcollision);
    }


    if((mouse_x>=200)&&(mouse_x<300)&&(mouse_y>=300)&&(mouse_y<400))
    {
        nouv->x=250;
        nouv->y=350;
        **clicker=0;
        rectfill(caseChevalier,200,300,299,399,makecol(0,0,i));
        rectfill(casecolallie, 200, 300, 299, 399, coulcollision);
    }
    if((mouse_x>=300)&&(mouse_x<400)&&(mouse_y>=300)&&(mouse_y<400))
    {
        nouv->x=350;
        nouv->y=350;
        **clicker=0;
        rectfill(caseChevalier,300,300,399,399,makecol(0,0,i));
        rectfill(casecolallie, 300, 300, 399, 399, coulcollision);
    }
    if((mouse_x>=400)&&(mouse_x<500)&&(mouse_y>=300)&&(mouse_y<400))
    {
        nouv->x=450;
        nouv->y=350;
        **clicker=0;
        rectfill(caseChevalier,400,300,499,399,makecol(0,0,i));
        rectfill(casecolallie, 400, 300, 499, 399, coulcollision);
    }
    if((mouse_x>=500)&&(mouse_x<600)&&(mouse_y>=300)&&(mouse_y<400))
    {
        nouv->x=550;
        nouv->y=350;
        **clicker=0;
        rectfill(caseChevalier,500,300,599,399,makecol(0,0,i));
        rectfill(casecolallie, 500, 300, 599, 399, coulcollision);
    }
    if((mouse_x>=600)&&(mouse_x<700)&&(mouse_y>=300)&&(mouse_y<400))
    {
        nouv->x=650;
        nouv->y=350;
        **clicker=0;
        rectfill(caseChevalier,600,300,699,399,makecol(0,0,i));
        rectfill(casecolallie, 600, 300, 699, 399, coulcollision);
    }
    if((mouse_x>=700)&&(mouse_x<800)&&(mouse_y>=300)&&(mouse_y<400))
    {
        nouv->x=750;
        nouv->y=350;
        **clicker=0;
        rectfill(caseChevalier,700,300,799,399,makecol(0,0,i));
        rectfill(casecolallie, 700, 300, 799, 399, coulcollision);
    }


    if((mouse_x>=200)&&(mouse_x<300)&&(mouse_y>=400)&&(mouse_y<500))
    {
        nouv->x=250;
        nouv->y=450;
        **clicker=0;
        rectfill(caseChevalier,200,400,299,499,makecol(0,0,i));
        rectfill(casecolallie, 200, 400, 299, 499, coulcollision);
    }
    if((mouse_x>=300)&&(mouse_x<400)&&(mouse_y>=400)&&(mouse_y<500))
    {
        nouv->x=350;
        nouv->y=450;
        **clicker=0;
        rectfill(caseChevalier,300,400,399,499,makecol(0,0,i));
        rectfill(casecolallie, 300, 400, 399, 499, coulcollision);
    }
    if((mouse_x>=400)&&(mouse_x<500)&&(mouse_y>=400)&&(mouse_y<500))
    {
        nouv->x=450;
        nouv->y=450;
        **clicker=0;
        rectfill(caseChevalier,400,400,499,499,makecol(0,0,i));
        rectfill(casecolallie, 400, 400, 499, 499, coulcollision);
    }
    if((mouse_x>=500)&&(mouse_x<600)&&(mouse_y>=400)&&(mouse_y<500))
    {
        nouv->x=550;
        nouv->y=450;
        **clicker=0;
        rectfill(caseChevalier,500,400,599,499,makecol(0,0,i));
        rectfill(casecolallie, 500, 400, 599, 499, coulcollision);
    }
    if((mouse_x>=600)&&(mouse_x<700)&&(mouse_y>=400)&&(mouse_y<500))
    {
        nouv->x=650;
        nouv->y=450;
        **clicker=0;
        rectfill(caseChevalier,600,400,699,499,makecol(0,0,i));
        rectfill(casecolallie, 600, 400, 699, 499, coulcollision);
    }
    if((mouse_x>=700)&&(mouse_x<800)&&(mouse_y>=400)&&(mouse_y<500))
    {
        nouv->x=750;
        nouv->y=450;
        **clicker=0;
        rectfill(caseChevalier,700,400,799,499,makecol(0,0,i));
        rectfill(casecolallie, 700, 400, 799, 499, coulcollision);
    }


    if((mouse_x>=200)&&(mouse_x<300)&&(mouse_y>=500)&&(mouse_y<600))
    {
        nouv->x=250;
        nouv->y=550;
        **clicker=0;
        rectfill(caseChevalier,200,500,299,599,makecol(0,0,i));
        rectfill(casecolallie, 200, 500, 299, 599, coulcollision);
    }
    if((mouse_x>=300)&&(mouse_x<400)&&(mouse_y>=500)&&(mouse_y<600))
    {
        nouv->x=350;
        nouv->y=550;
        **clicker=0;
        rectfill(caseChevalier,300,500,399,599,makecol(0,0,i));
        rectfill(casecolallie, 300, 500, 399, 599, coulcollision);
    }
    if((mouse_x>=400)&&(mouse_x<500)&&(mouse_y>=500)&&(mouse_y<600))
    {
        nouv->x=450;
        nouv->y=550;
        **clicker=0;
        rectfill(caseChevalier,400,500,499,599,makecol(0,0,i));
        rectfill(casecolallie, 400, 500, 499, 599, coulcollision);
    }
    if((mouse_x>=500)&&(mouse_x<600)&&(mouse_y>=500)&&(mouse_y<600))
    {
        nouv->x=550;
        nouv->y=550;
        **clicker=0;
        rectfill(caseChevalier,500,500,599,599,makecol(0,0,i));
        rectfill(casecolallie, 500, 500, 599, 599, coulcollision);
    }
    if((mouse_x>=600)&&(mouse_x<700)&&(mouse_y>=500)&&(mouse_y<600))
    {
        nouv->x=650;
        nouv->y=550;
        **clicker=0;
        rectfill(caseChevalier,600,500,699,599,makecol(0,0,i));
        rectfill(casecolallie, 600, 500, 699, 599, coulcollision);
    }
    if((mouse_x>=700)&&(mouse_x<800)&&(mouse_y>=500)&&(mouse_y<600))
    {
        nouv->x=750;
        nouv->y=550;
        **clicker=0;
        rectfill(caseChevalier,700,500,799,599,makecol(0,0,i));
        rectfill(casecolallie, 700, 500, 799, 599, coulcollision);
    }

    nouv->vivant=1;
    nouv->anim=0;
    nouv->cptimage=0;
    **validation=0;
    return nouv;
}
