

#include "bibli.h"



void affichagetabhp (t_listeChevaliers* la, BITMAP* bmp)
{
    int i;
    for(i=0; i<la->max; i++)
    {
        if(la->tab[i]!=NULL)
        {
            affichagehpallie(la->tab[i], bmp);
        }
    }
}


void affichagehpallie(t_chevalier* allie, BITMAP* bmp)
{
    if ((allie->type==1 || allie->type==2 || allie->type==3)&&(allie->vivant==1))
    {
        if(allie->hp>250 )
            rectfill(bmp, allie->x - allie->tx/2, allie->y - allie->ty, allie->x + allie->tx/2, allie->y - 45, makecol(0,255,0));
    }
    if (allie->type==4 && allie->vivant==1)
    {
        if (allie->hp>750)
            rectfill(bmp, allie->x - allie->tx/2, allie->y - allie->ty, allie->x + allie->tx/2, allie->y -45, makecol(0,255,0));
        if (allie->hp>500 && allie->hp<750)
            rectfill(bmp, allie->x - allie->tx/2, allie->y - allie->ty, allie->x + 25, allie->y -45, makecol(0,255,0));
            if (allie->hp>250 && allie->hp<500)
            rectfill(bmp, allie->x - allie->tx/2, allie->y - allie->ty, allie->x , allie->y -45, makecol(0,255,0));
            if (allie->hp>0 && allie->hp<250)
            rectfill(bmp, allie->x - allie->tx/2, allie->y - allie->ty, allie->x - 25, allie->y -45, makecol(0,255,0));
    }

    if (allie->type==5 && allie->vivant==1)
    {
        if (allie->hp>1000)
            rectfill(bmp, allie->x - allie->tx/2, allie->y - allie->ty, allie->x + allie->tx/2, allie->y -45, makecol(0,255,0));
        if (allie->hp>500 && allie->hp<1000)
            rectfill(bmp, allie->x - allie->tx/2, allie->y - allie->ty, allie->x + 10, allie->y -45, makecol(0,255,0));
            if (allie->hp>0 && allie->hp<500)
            rectfill(bmp, allie->x - allie->tx/2, allie->y - allie->ty, allie->x - 10, allie->y -45, makecol(0,255,0));
    }

    if (allie->type==6 && allie->vivant==1)
    {
        if (allie->hp>1500)
            rectfill(bmp, allie->x - allie->tx/2, allie->y - allie->ty, allie->x + allie->tx/2, allie->y -45, makecol(0,255,0));
        if (allie->hp>1000 && allie->hp<1500)
            rectfill(bmp, allie->x - allie->tx/2, allie->y - allie->ty, allie->x + 25, allie->y -45, makecol(0,255,0));
            if (allie->hp>500 && allie->hp<1000)
            rectfill(bmp, allie->x - allie->tx/2, allie->y - allie->ty, allie->x , allie->y -45, makecol(0,255,0));
            if (allie->hp>0 && allie->hp<500)
            rectfill(bmp, allie->x - allie->tx/2, allie->y - allie->ty, allie->x - 25, allie->y -45, makecol(0,255,0));
    }
}



void affichagehpennemi(t_ennemi* adversaire[30], int nombreennemi, BITMAP* bmp)
{
    int i;
    for (i=0; i<nombreennemi; i++)
    {
        if (adversaire[i]->type==1 && adversaire[i]->vivant==1)
        {
            if (adversaire[i]->hp>7500)
            rectfill(bmp, adversaire[i]->x - adversaire[i]->tx/4, adversaire[i]->y - adversaire[i]->ty/2, adversaire[i]->x + adversaire[i]->tx/4, adversaire[i]->y -45, makecol(254, 0,0));
        if (adversaire[i]->hp>5000 && adversaire[i]->hp<7500)
            rectfill(bmp, adversaire[i]->x - adversaire[i]->tx/4, adversaire[i]->y - adversaire[i]->ty/2, adversaire[i]->x + 13, adversaire[i]->y -45, makecol(254, 0,0));
            if (adversaire[i]->hp>2500 && adversaire[i]->hp<5000)
            rectfill(bmp, adversaire[i]->x - adversaire[i]->tx/4, adversaire[i]->y - adversaire[i]->ty/2, adversaire[i]->x , adversaire[i]->y -45, makecol(254, 0,0));
            if (adversaire[i]->hp>0 && adversaire[i]->hp<2500)
            rectfill(bmp, adversaire[i]->x - adversaire[i]->tx/4, adversaire[i]->y - adversaire[i]->ty/2, adversaire[i]->x - 13, adversaire[i]->y -45, makecol(254, 0,0));
        }

        if (adversaire[i]->type==2 && adversaire[i]->vivant==1)
        {
            if (adversaire[i]->hp>3750)
            rectfill(bmp, adversaire[i]->x - adversaire[i]->tx/4, adversaire[i]->y - adversaire[i]->ty/2, adversaire[i]->x + adversaire[i]->tx/4, adversaire[i]->y -45, makecol(254, 0,0));
        if (adversaire[i]->hp>2500 && adversaire[i]->hp<3750)
            rectfill(bmp, adversaire[i]->x - adversaire[i]->tx/4, adversaire[i]->y - adversaire[i]->ty/2, adversaire[i]->x + 13, adversaire[i]->y -45, makecol(254, 0,0));
            if (adversaire[i]->hp>1250 && adversaire[i]->hp<2500)
            rectfill(bmp, adversaire[i]->x - adversaire[i]->tx/4, adversaire[i]->y - adversaire[i]->ty/2, adversaire[i]->x , adversaire[i]->y -45, makecol(254, 0,0));
            if (adversaire[i]->hp>0 && adversaire[i]->hp<1250)
            rectfill(bmp, adversaire[i]->x - adversaire[i]->tx/4, adversaire[i]->y - adversaire[i]->ty/2, adversaire[i]->x - 13, adversaire[i]->y -45, makecol(254, 0,0));
        }

        if (adversaire[i]->type==4 && adversaire[i]->vivant==1)
        {
            if (adversaire[i]->hp>15000)
            rectfill(bmp, adversaire[i]->x - adversaire[i]->tx/4, adversaire[i]->y - adversaire[i]->ty/2, adversaire[i]->x + adversaire[i]->tx/4, adversaire[i]->y -45, makecol(254, 0,0));
        if (adversaire[i]->hp>10000 && adversaire[i]->hp<15000)
            rectfill(bmp, adversaire[i]->x - adversaire[i]->tx/4, adversaire[i]->y - adversaire[i]->ty/2, adversaire[i]->x + 13, adversaire[i]->y -45, makecol(254, 0,0));
            if (adversaire[i]->hp>5000 && adversaire[i]->hp<10000)
            rectfill(bmp, adversaire[i]->x - adversaire[i]->tx/4, adversaire[i]->y - adversaire[i]->ty/2, adversaire[i]->x , adversaire[i]->y -45, makecol(254, 0,0));
            if (adversaire[i]->hp>0 && adversaire[i]->hp<5000)
            rectfill(bmp, adversaire[i]->x - adversaire[i]->tx/4, adversaire[i]->y - adversaire[i]->ty/2, adversaire[i]->x - 13, adversaire[i]->y -45, makecol(254, 0,0));
        }
    }
}


void affichagehpboss(t_ennemi* boss, BITMAP* bmp)
{
    if (boss->vivant==1)
    {if (boss->hp>37500)
        rectfill(bmp, boss->x - boss->tx/2, boss->y- boss->ty/2, boss->x + boss->tx/2, boss->y -145, makecol(254, 0,0));
    if (boss->hp>25000 && boss->hp<37500)
        rectfill(bmp, boss->x - boss->tx/2, boss->y- boss->ty/2, boss->x + 80, boss->y -145, makecol(254, 0,0));
        if (boss->hp>12500 && boss->hp<25000)
        rectfill(bmp, boss->x - boss->tx/2, boss->y- boss->ty/2, boss->x , boss->y -145, makecol(254, 0,0));
        if (boss->hp>0 && boss->hp<12500)
        rectfill(bmp, boss->x - boss->tx/2, boss->y- boss->ty/2, boss->x - 80, boss->y -145, makecol(254, 0,0));
    }
}

