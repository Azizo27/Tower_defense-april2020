

#include "bibli.h"


void icone(BITMAP * caseIcone, int * clicker, int *argentepeiste, int* argentdistance, int *validation, int* prixunite)
{
    int couleur, coulr, coulg;
    couleur=getpixel(caseIcone, mouse_x, mouse_y);
    coulr=getr(couleur);
    coulg=getg(couleur);


    if((coulr==255)&&(mouse_b==1)&&(*validation==0))
    {
        if (coulg==1)
        *prixunite=20;
    if (coulg==2)
        *prixunite=20;
        if (coulg==7)
        *prixunite=0;

           if (coulg==3)
        *prixunite=30;
         if (coulg==4)
          *prixunite=50;
    if (coulg==5)
        *prixunite=40;
    if (coulg==6)
        *prixunite=50;


        if ((*argentepeiste>=*prixunite)&&((coulg==5)||(coulg==6)||(coulg==2)||(coulg==7)))
        {*validation=1;
        *argentepeiste=*argentepeiste-*prixunite;
        *clicker=coulg;
        }

        if ((*argentdistance>=*prixunite)&&((coulg==3)||(coulg==4)||(coulg==1)||(coulg==7)))
        {*validation=1;
        *argentdistance=*argentdistance-*prixunite;
        *clicker=coulg;
        }
    }
}




void actualiserargent(int* argentepeiste, int* argentdistance, int* compteurproche, int* compteurloin, t_listeChevaliers *la)
{
    int i;
    int poub1, poub2, poub3, poub4;


    poub1=*argentepeiste;
    poub2=*compteurproche;
    poub3=*compteurloin;
    poub4=*argentdistance;

    for(i=0; i<la->max; i++)
    {
        if(la->tab[i]!=NULL)
        {
            argentdutype(&poub1, &poub4,  &poub2, &poub3, la->tab[i]);
        }
    }
      *argentepeiste=poub1;
      *argentdistance=poub4;
    *compteurproche=poub2;
    *compteurloin=poub3;

}

void argentdutype(int* argentepeiste, int * argentdistance, int *compteurproche, int* compteurloin, t_chevalier * chevalier)
{
    if ((chevalier->vivant==1) &&(chevalier->type==2))
    {
        *compteurproche=*compteurproche+1;
        if (*compteurproche==300)
        {
            *argentepeiste=*argentepeiste +1;
            *compteurproche=0;
        }
    }
    if ((chevalier->vivant==1) &&(chevalier->type==1))
    {
        *compteurloin=*compteurloin+1;
        if (*compteurloin==300)
        {
            *argentdistance=*argentdistance +1;
            *compteurloin=0;
        }
    }
}



void recupererargent (int *clicker, int* validation, int* argentepeiste, int* argentdistance, int prixunite)
{
    *validation=0;
    if ((*clicker==3)||(*clicker==4)||(*clicker==1))
        *argentdistance=*argentdistance + prixunite;

    if ((*clicker==5)||(*clicker==6)||(*clicker==2))
        *argentepeiste=*argentepeiste + prixunite;

    *clicker=0;

}

























