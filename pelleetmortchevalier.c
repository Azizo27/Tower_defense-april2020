

#include "bibli.h"




t_listeChevaliers * pelleChevalier(BITMAP * caseChevalier,t_listeChevaliers * la, int * clicker, int* validation)
{
    int couleur, coulb;
    couleur=getpixel(caseChevalier, mouse_x, mouse_y);
    coulb=getb(couleur);
    if((la->tab[coulb]!=NULL)&&(coulb!=255))
    {
        la->tab[coulb]=mortChevalier(la->tab[coulb]);
        *clicker=0;
        *validation=0;
    }
    return la;
}


t_chevalier * mortChevalier(t_chevalier * tab)
{
    t_chevalier * nouv;
    nouv=(t_chevalier *)malloc(sizeof(t_chevalier));
    nouv->tx=tab->tx;
    nouv->ty=tab->ty;
    nouv->x=tab->x;
    nouv->y=tab->y;
    nouv->vivant=0;
    return nouv;
}
