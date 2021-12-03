

#include "bibli.h"


void collisiontaballie (BITMAP* caseennemi, t_listeChevaliers* la)
{
    int i;
    for(i=0; i<la->max; i++)
    {
        if((la->tab[i])!=NULL)
        {
            collisionallie(la->tab[i], caseennemi);

        }
    }
}



void collisionallie(t_chevalier* allie,BITMAP* caseennemi)
{
    int cim, b,r;
    cim=getpixel(caseennemi, allie->x+50, allie->y);
    b=getb(cim);
    r=getr(cim);
    if (b==0)
    {
    }
    if (b==250&&r==0)
    {
        allie->hp=allie->hp-2;
    }
    if (b==255&&r==0)
    {
        allie->hp=allie->hp-1;
    }
    if (allie->hp==0)
        allie->vivant=0;


}
