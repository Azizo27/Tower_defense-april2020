


#include "bibli.h"






void dessinerListeChevalier(BITMAP * page,BITMAP * cosacolallie, t_listeChevaliers *la,BITMAP * vendeur[nvendeurs], BITMAP * forgeron[nforgerons], BITMAP * archer[narchers], BITMAP * sorcier[nsorciers], BITMAP * lancier[nlanciers], BITMAP * shevalier[nchevaliers],BITMAP * explosion [nexplosions],BITMAP * fleche,t_flaiche * tabf [30])
{
    int i;

    for(i=0; i<la->max; i++)
    {
        if(la->tab[i]!=NULL)
        {
            dessinerChevalier(page,cosacolallie,la->tab[i],vendeur,forgeron,archer,sorcier,lancier,shevalier,explosion,fleche,i,tabf);
        }
    }
}

void dessinerChevalier(BITMAP *page,BITMAP * casecolallie,t_chevalier * chevalier,BITMAP * vendeur[nvendeurs], BITMAP * forgeron[nforgerons], BITMAP * archer[narchers], BITMAP * sorcier[nsorciers], BITMAP * lancier[nlanciers], BITMAP * shevalier[nchevaliers],BITMAP * explosion [nexplosions],BITMAP * fleche,int i,t_flaiche * tabf[30])
{
    if(chevalier->type==1)
    {
        animVendeur(chevalier,page,vendeur);
    }
    if(chevalier->type==2)
    {
        animForgeron(chevalier,page,forgeron);
    }
    if(chevalier->type==3)
    {
        animArcher(chevalier,page,archer,casecolallie,fleche,i,tabf);
    }
    if(chevalier->type==4)
    {
        animSorcier(chevalier,page,sorcier,casecolallie,explosion);
    }
    if(chevalier->type==5)
    {
        animLancier(chevalier,page,lancier,casecolallie);
    }
    if(chevalier->type==6)
    {
        animShevalier(chevalier,page,shevalier,casecolallie);
    }
}

void dessinermenu(BITMAP * page, BITMAP * vendeur[nvendeurs], BITMAP * forgeron[nforgerons], BITMAP * archer[narchers], BITMAP * sorcier[nsorciers], BITMAP * lancier[nlanciers], BITMAP * shevalier[nchevaliers],BITMAP * iconePerso)
{
    /*rectfill(page,190,25,240,75,makecol(255,255,255));
    circlefill(page,305,50,25,makecol(255,255,255));
    rectfill(page,370,25,420,75,makecol(255,0,0));
    rectfill(page,460,25,510,75,makecol(255,255,0));
    circlefill(page,575,50,25,makecol(255,0,0));
    circlefill(page,665,50,25,makecol(255,255,0));*/

    draw_sprite(page,vendeur[0],130,0);
    draw_sprite (page,iconePerso,130,0);
    draw_sprite_h_flip(page,forgeron[0],230,0);
    draw_sprite (page,iconePerso,230,0);
    draw_sprite_h_flip(page,archer[0],330,15);
    draw_sprite (page,iconePerso,330,0);
    draw_sprite_h_flip(page,sorcier[0],430,0);
    draw_sprite (page,iconePerso,430,0);
    draw_sprite_h_flip(page,lancier[0],530,0);
    draw_sprite (page,iconePerso,530,0);
    draw_sprite_h_flip(page,shevalier[0],630,0);
    draw_sprite (page,iconePerso,630,0);
    line(page,730,25,780,75,makecol(255,255,255));
    line(page,728,25,778,75,makecol(255,255,255));
    line(page,729,25,779,75,makecol(255,255,255));
    line(page,731,25,781,75,makecol(255,255,255));
    line(page,732,25,782,75,makecol(255,255,255));
    line(page,730,75,780,25,makecol(255,255,255));
    line(page,728,75,778,25,makecol(255,255,255));
    line(page,729,75,779,25,makecol(255,255,255));
    line(page,731,75,781,25,makecol(255,255,255));
    line(page,732,75,782,25,makecol(255,255,255));
}




void dessinerSouris(int clicker, BITMAP * caseIcone, BITMAP * page,BITMAP * vendeur[nvendeurs], BITMAP * forgeron[nforgerons], BITMAP * archer[narchers], BITMAP * sorcier[nsorciers], BITMAP * lancier[nlanciers], BITMAP * shevalier[nchevaliers],BITMAP * mouse)
{
    if(clicker==0)
    {
        draw_sprite (page,mouse,mouse_x,mouse_y);
    }
    if(clicker==1)
    {
        draw_sprite(page,vendeur[0],mouse_x-50,mouse_y-50);
    }
    if(clicker==2)
    {

        draw_sprite_h_flip(page,forgeron[0],mouse_x-50,mouse_y-50);

    }
    if(clicker==3)
    {

        draw_sprite_h_flip(page,archer[0],mouse_x-50,mouse_y-35);

    }
    if(clicker==4)
    {

        draw_sprite_h_flip(page,sorcier[0],mouse_x-50,mouse_y-50);

    }
    if(clicker==5)
    {

        draw_sprite_h_flip(page,lancier[0],mouse_x-50,mouse_y-50);

    }
    if(clicker==6)
    {

        draw_sprite_h_flip(page,shevalier[0],mouse_x-50,mouse_y-50);
    }
    if(clicker==7)
    {
        line(page,mouse_x-25,mouse_y-25,mouse_x+25,mouse_y+25,makecol(255,255,255));
        line(page,mouse_x-25-2,mouse_y-25,mouse_x+25-2,mouse_y+25,makecol(255,255,255));
        line(page,mouse_x-25-1,mouse_y-25,mouse_x+25-1,mouse_y+25,makecol(255,255,255));
        line(page,mouse_x-25+2,mouse_y-25,mouse_x+25+2,mouse_y+25,makecol(255,255,255));
        line(page,mouse_x-25+1,mouse_y-25,mouse_x+25+1,mouse_y+25,makecol(255,255,255));
        line(page,mouse_x-25,mouse_y+25,mouse_x+25,mouse_y-25,makecol(255,255,255));
        line(page,mouse_x-25-2,mouse_y+25,mouse_x+25-2,mouse_y-25,makecol(255,255,255));
        line(page,mouse_x-25-1,mouse_y+25,mouse_x+25-1,mouse_y-25,makecol(255,255,255));
        line(page,mouse_x-25+2,mouse_y+25,mouse_x+25+2,mouse_y-25,makecol(255,255,255));
        line(page,mouse_x-25+1,mouse_y+25,mouse_x+25+1,mouse_y-25,makecol(255,255,255));
    }
}

