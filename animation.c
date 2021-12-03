

#include "bibli.h"


void animChampionA (t_ennemi * unit, BITMAP * page, BITMAP * championA[nchampionA])
{
    unit->cptimage=unit->cptimage+1;
    if (unit->cptimage>=3*tempo)
    {
        unit->anim=unit->anim+1;
        unit->cptimage=0;
        if(unit->anim>=nchampionA)
        {
            unit->anim=0;
        }
    }
    if (unit->anim==0)
    draw_sprite_h_flip(page,championA [unit->anim],unit->x-100,unit->y-50);
    if (unit->anim==1)
    draw_sprite_h_flip(page,championA [unit->anim],unit->x-100,unit->y-76);
    if (unit->anim==2)
    draw_sprite_h_flip(page,championA [unit->anim],unit->x-100,unit->y-56);
    if (unit->anim==3)
    draw_sprite_h_flip(page,championA [unit->anim],unit->x-100,unit->y-63);
    if (unit->anim==4)
    draw_sprite_h_flip(page,championA [unit->anim],unit->x-100,unit->y-74);
    if (unit->anim==5)
    draw_sprite_h_flip(page,championA [unit->anim],unit->x-115,unit->y-62);
    if (unit->anim==6)
    draw_sprite_h_flip(page,championA [unit->anim],unit->x-112,unit->y-50);
    if (unit->anim==7)
    draw_sprite_h_flip(page,championA [unit->anim],unit->x-100,unit->y-50);
}

void animChampionM (t_ennemi * unit, BITMAP * page, BITMAP * championM[nchampionM])
{
    unit->cptimage=unit->cptimage+1;
    if (unit->cptimage>=3*tempo)
    {
        unit->anim=unit->anim+1;
        unit->cptimage=0;
        if(unit->anim>=nchampionM)
        {
            unit->anim=0;
        }
    }
    if (unit->anim==0)
    draw_sprite_h_flip(page,championM [unit->anim],unit->x-100,unit->y-50);
    if (unit->anim==1)
    draw_sprite_h_flip(page,championM [unit->anim],unit->x-100,unit->y-50);
    if (unit->anim==2)
    draw_sprite_h_flip(page,championM [unit->anim],unit->x-109,unit->y-50);
    if (unit->anim==3)
    draw_sprite_h_flip(page,championM [unit->anim],unit->x-100,unit->y-50);
    if (unit->anim==4)
    draw_sprite_h_flip(page,championM [unit->anim],unit->x-100,unit->y-50);
    if (unit->anim==5)
    draw_sprite_h_flip(page,championM [unit->anim],unit->x-100,unit->y-40);
    if (unit->anim==6)
    draw_sprite_h_flip(page,championM [unit->anim],unit->x-100,unit->y-30);
    if (unit->anim==7)
    draw_sprite_h_flip(page,championM [unit->anim],unit->x-100,unit->y-40);
}

void animLoupM (t_ennemi * unit, BITMAP * page, BITMAP * loupM[nloupsM])
{
    unit->cptimage=unit->cptimage+1;
    if (unit->cptimage>=3*tempo)
    {
        unit->anim=unit->anim+1;
        unit->cptimage=0;
        if(unit->anim>=nloupsM)
        {
            unit->anim=0;
        }
    }
    draw_sprite_h_flip(page,loupM [unit->anim],unit->x-100,unit->y-50);
}

void animLoupA (t_ennemi * unit, BITMAP * page, BITMAP * loupA[nloupsA])
{
    unit->cptimage=unit->cptimage+1;
    if (unit->cptimage>=3*tempo)
    {
        unit->anim=unit->anim+1;
        unit->cptimage=0;
        if(unit->anim>=nloupsA)
        {
            unit->anim=0;
        }
    }

    draw_sprite_h_flip(page,loupA[unit->anim],unit->x-100,unit->y-50);

}

void animBarbareM (t_ennemi * unit, BITMAP * page, BITMAP * barbareM[nbarbaresM])
{
    unit->cptimage=unit->cptimage+1;
    if (unit->cptimage>=4*tempo)
    {
        unit->anim=unit->anim+1;
        unit->cptimage=0;
        if(unit->anim>=nbarbaresM)
        {
            unit->anim=0;
        }
    }
    draw_sprite_h_flip(page,barbareM[unit->anim],unit->x-50,unit->y-50);
}

void animBarbareA (t_ennemi * unit, BITMAP * page, BITMAP * barbareA[nbarbaresA])
{
    unit->cptimage=unit->cptimage+1;
    if (unit->cptimage>=3*tempo)
    {
        unit->anim=unit->anim+1;
        unit->cptimage=0;
        if(unit->anim>=nbarbaresA)
        {
            unit->anim=0;
        }
    }
    if (unit->anim<=3)
    {
        draw_sprite_h_flip(page,barbareA[unit->anim],unit->x-50,unit->y-50);
    }
    else
    {
        draw_sprite_h_flip(page,barbareA[unit->anim],unit->x-100,unit->y-50);
    }
}


void animVendeur (t_chevalier * unit, BITMAP * page, BITMAP * vendeur[nvendeurs])
{
    unit->cptimage=unit->cptimage+1;
    if (unit->cptimage>=3*tempo)
    {
        unit->anim=unit->anim+1;
        unit->cptimage=0;
        if(unit->anim>=nvendeurs)
        {
            unit->anim=0;
        }
    }
    draw_sprite(page,vendeur[unit->anim],unit->x-50,unit->y-50);
}



void animArcher (t_chevalier * unit,BITMAP * page, BITMAP * archer[narchers],BITMAP * casecolallie,BITMAP * fleche,int i,t_flaiche * flaiche [30])
{
    int a,b1=0,cim1,b2=0,cim2,b3=0,cim3,b4=0,cim4,b5=0,cim5,bf=0,cimf;
    a=0;
    if (unit->x==250)
    {
        cim1=getpixel(casecolallie, unit->x+75, unit->y);

        b1=getb(cim1);

        cim2=getpixel(casecolallie, unit->x+175, unit->y);

        b2=getb(cim2);

        cim3=getpixel(casecolallie, unit->x+275, unit->y);

        b3=getb(cim3);

        cim4=getpixel(casecolallie, unit->x+375, unit->y);

        b4=getb(cim4);

        cim5=getpixel(casecolallie, unit->x+475, unit->y);

        b5=getb(cim5);

        if ((b1!=0)||(b2!=0)||(b3!=0)||(b4!=0)||(b5!=0))
            a=1;


    }
    if (unit->x==350)
    {
        cim1=getpixel(casecolallie, unit->x+75, unit->y);

        b1=getb(cim1);

        cim2=getpixel(casecolallie, unit->x+175, unit->y);

        b2=getb(cim2);

        cim3=getpixel(casecolallie, unit->x+275, unit->y);

        b3=getb(cim3);

        cim4=getpixel(casecolallie, unit->x+375, unit->y);

        b4=getb(cim4);
        if ((b1!=0)||(b2!=0)||(b3!=0)||(b4!=0))
            a=1;

    }
    if (unit->x==450)
    {
        cim1=getpixel(casecolallie, unit->x+75, unit->y);

        b1=getb(cim1);

        cim2=getpixel(casecolallie, unit->x+175, unit->y);

        b2=getb(cim2);

        cim3=getpixel(casecolallie, unit->x+275, unit->y);

        b3=getb(cim3);
        if ((b1!=0)||(b2!=0)||(b3!=0))
            a=1;

    }
    if (unit->x==550)
    {
        cim1=getpixel(casecolallie, unit->x+75, unit->y);

        b1=getb(cim1);

        cim2=getpixel(casecolallie, unit->x+175, unit->y);

        b2=getb(cim2);
        if ((b1!=0)||(b2!=0))
            a=1;

    }
    if (unit->x==650)
    {
        cim1=getpixel(casecolallie, unit->x+75, unit->y);

        b1=getb(cim1);

        if (b1!=0)
            a=1;


    }
    if (unit->x==750)
    {
        cim1=getpixel(casecolallie, unit->x+45, unit->y);

        b1=getb(cim1);
        if (b1!=0)
            a=1;
    }
    if (a==1)
    {
        unit->cptimage=unit->cptimage+1;
        if (unit->cptimage>=tempo)
        {
            unit->anim=unit->anim+1;
            unit->cptimage=0;
            if(unit->anim>=narchers)
            {
                unit->anim=0;
            }
        }

        draw_sprite_h_flip(page,archer[unit->anim],unit->x-50,unit->y-35);
    }
    else
        draw_sprite_h_flip(page,archer[0],unit->x-50,unit->y-35);
    if ((unit->anim==9)&&(unit->cptimage==0))
    {
        //allegro_message ("%d",i);
        flaiche[i]->f=1;
        flaiche[i]->fx=unit->x+50;
    }
    if (a==0)
    {
        flaiche[i]->f=0;
    }
    else
    {
        flaiche[i]->fx=flaiche[i]->fx+1;
        if (flaiche[i]->f!=0)
            draw_sprite_h_flip(page,fleche,flaiche[i]->fx-50,unit->y-25);
    }
    cimf=getpixel(casecolallie, flaiche[i]->fx, unit->y);

    bf=getb(cimf);
    if (bf!=0)
    {
        flaiche[i]->f=0;
    }
}



void animForgeron (t_chevalier * unit,BITMAP * page, BITMAP * forgeron[nforgerons])
{
    unit->cptimage=unit->cptimage+1;
    if (unit->cptimage>=tempo)
    {
        unit->anim=unit->anim+1;
        unit->cptimage=0;
        if(unit->anim>=nforgerons)
        {
            unit->anim=0;
        }
    }

    draw_sprite_h_flip(page,forgeron[unit->anim],unit->x-50,unit->y-50);

}




void animShevalier (t_chevalier * unit,BITMAP * page, BITMAP * shevalier[nchevaliers],BITMAP * casecolallie)
{
    int cim;
    int b;
    int r;
    cim=getpixel(casecolallie, unit->x+75, unit->y);
    r=getr(cim);
    b=getb(cim);
    if (b!=0&&r==0)
    {
        unit->cptimage=unit->cptimage+1;
        if (unit->cptimage>=tempo)
        {
            unit->anim=unit->anim+1;
            unit->cptimage=0;
            if(unit->anim>=nchevaliers)
            {
                unit->anim=0;
            }
        }
        draw_sprite_h_flip(page,shevalier[unit->anim],unit->x-50,unit->y-50);
    }
    else
        draw_sprite_h_flip(page,shevalier[0],unit->x-50,unit->y-50);
}




void animLancier (t_chevalier * unit,BITMAP * page, BITMAP * lancier[nlanciers],BITMAP * casecolallie)
{
    int cim;
    int b,r;
    cim=getpixel(casecolallie, unit->x+75, unit->y);
    r=getr(cim);
    b=getb(cim);
    if (b!=0&&r==0)
    {
        unit->cptimage=unit->cptimage+1;
        if (unit->cptimage>=tempo)
        {
            unit->anim=unit->anim+1;
            unit->cptimage=0;
            if(unit->anim>=nlanciers)
            {
                unit->anim=0;
            }
        }

        draw_sprite_h_flip(page,lancier[unit->anim],unit->x-50,unit->y-50);
    }
    else
        draw_sprite_h_flip(page,lancier[0],unit->x-50,unit->y-50);

}



void animSorcier (t_chevalier * unit,BITMAP * page, BITMAP * sorcier[nsorciers],BITMAP * casecolallie,BITMAP * explosion [nexplosions])
{
    int a,b1=0,cim0,b0=0,cim1,b2=0,cim2,b3=0,cim3,b4=0,cim4,b5=0,cim5;
    a=0;
    int cpt6=0,cpt1=0,cpt2=0,cpt3=0,cpt4=0,cpt5=0;
    if (unit->x==250)
    {
        cim0=getpixel(casecolallie, unit->x, unit->y);

        b0=getb(cim0);

        if (b1!=0)
            cpt1=1;

        cim1=getpixel(casecolallie, unit->x+75, unit->y);

        b1=getb(cim1);

        if (b1!=0)
            cpt2=1;

        cim2=getpixel(casecolallie, unit->x+175, unit->y);

        b2=getb(cim2);

        if (b2!=0)
            cpt3=1;

        cim3=getpixel(casecolallie, unit->x+275, unit->y);

        b3=getb(cim3);

        if (b3!=0)
            cpt4=1;

        cim4=getpixel(casecolallie, unit->x+375, unit->y);

        b4=getb(cim4);

        if (b4!=0)
            cpt5=1;

        cim5=getpixel(casecolallie, unit->x+475, unit->y);

        b5=getb(cim5);

        if (b5!=0)
            cpt6=1;

        if ((b0!=0)||(b1!=0)||(b2!=0)||(b3!=0)||(b4!=0)||(b5!=0))
        {
            a=1;
        }


    }
    if (unit->x==350)
    {
        cim0=getpixel(casecolallie, unit->x, unit->y);

        b0=getb(cim0);

        if (b1!=0)
            cpt1=1;

        cim1=getpixel(casecolallie, unit->x+75, unit->y);

        b1=getb(cim1);

        if (b1!=0)
            cpt2=1;

        cim2=getpixel(casecolallie, unit->x+175, unit->y);

        b2=getb(cim2);

        if (b2!=0)
            cpt3=1;

        cim3=getpixel(casecolallie, unit->x+275, unit->y);

        b3=getb(cim3);

        if (b3!=0)
            cpt4=1;

        cim4=getpixel(casecolallie, unit->x+375, unit->y);

        b4=getb(cim4);

        if (b4!=0)
            cpt5=1;

        if ((b0!=0)||(b1!=0)||(b2!=0)||(b3!=0)||(b4!=0)||(b5!=0))
        {
            a=1;
        }

    }
    if (unit->x==450)
    {
        cim0=getpixel(casecolallie, unit->x, unit->y);

        b0=getb(cim0);

        if (b1!=0)
            cpt1=1;

        cim1=getpixel(casecolallie, unit->x+75, unit->y);

        b1=getb(cim1);

        if (b1!=0)
            cpt2=1;

        cim2=getpixel(casecolallie, unit->x+175, unit->y);

        b2=getb(cim2);

        if (b2!=0)
            cpt3=1;

        cim3=getpixel(casecolallie, unit->x+275, unit->y);

        b3=getb(cim3);

        if (b3!=0)
            cpt4=1;
        if ((b0!=0)||(b1!=0)||(b2!=0)||(b3!=0)||(b4!=0)||(b5!=0))
        {
            a=1;
        }

    }
    if (unit->x==550)
    {
        cim0=getpixel(casecolallie, unit->x, unit->y);

        b0=getb(cim0);

        if (b1!=0)
            cpt1=1;

        cim1=getpixel(casecolallie, unit->x+75, unit->y);

        b1=getb(cim1);

        if (b1!=0)
            cpt2=1;

        cim2=getpixel(casecolallie, unit->x+175, unit->y);

        b2=getb(cim2);

        if (b2!=0)
            cpt3=1;

    }
    if (unit->x==650)
    {
        cim0=getpixel(casecolallie, unit->x, unit->y);

        b0=getb(cim0);

        if (b1!=0)
            cpt1=1;

        cim1=getpixel(casecolallie, unit->x+75, unit->y);

        b1=getb(cim1);

        if (b1!=0)
            cpt2=1;
        if ((b0!=0)||(b1!=0)||(b2!=0)||(b3!=0)||(b4!=0)||(b5!=0))
        {
            a=1;
        }


    }
    if (unit->x==750)
    {
        cim0=getpixel(casecolallie, unit->x, unit->y);

        b0=getb(cim0);

        if (b1!=0)
            cpt1=1;
        if ((b0!=0)||(b1!=0)||(b2!=0)||(b3!=0)||(b4!=0)||(b5!=0))
        {
            a=1;
        }
    }
    if (a==1)
    {
        unit->cptimage=unit->cptimage+1;
        if (unit->cptimage>=tempo)
        {
            unit->anim=unit->anim+1;
            unit->cptimage=0;
            if(unit->anim>=nsorciers)
            {
                unit->anim=0;
            }
        }

        draw_sprite_h_flip(page,sorcier[unit->anim],unit->x-50,unit->y-50);


        /// l explosion [nexplosions] sur l ennemi
        // printf ("%d %d %d %d %d %d\n",cpt1,cpt2,cpt3,cpt4,cpt5,cpt6);
        if (cpt1!=0)
        {
            if ((unit->anim==6)&&(unit->cptimage<25))
                draw_sprite_h_flip(page,explosion[0],unit->x+25,unit->y-50);

            if ((unit->anim==6)&&(unit->cptimage>25)&&(unit->cptimage<50))
                draw_sprite_h_flip(page,explosion [1],unit->x+25,unit->y-50);

            if ((unit->anim==7)&&(unit->cptimage>0)&&(unit->cptimage<25))
                draw_sprite_h_flip(page,explosion [2],unit->x+25,unit->y-50);

            if ((unit->anim==7)&&(unit->cptimage>25)&&(unit->cptimage<35))
                draw_sprite_h_flip(page,explosion [3],unit->x+25,unit->y-50);

            if ((unit->anim==7)&&(unit->cptimage>35)&&(unit->cptimage<50))
                draw_sprite_h_flip(page,explosion [4],unit->x+25,unit->y-100);

        }
        else
        {
            if (cpt2!=0)
            {
                if ((unit->anim==6)&&(unit->cptimage<25))
                    draw_sprite_h_flip(page,explosion [0],unit->x+50,unit->y-50);

                if ((unit->anim==6)&&(unit->cptimage>25)&&(unit->cptimage<50))
                    draw_sprite_h_flip(page,explosion [1],unit->x+50,unit->y-50);

                if ((unit->anim==7)&&(unit->cptimage>0)&&(unit->cptimage<25))
                    draw_sprite_h_flip(page,explosion [2],unit->x+50,unit->y-50);

                if ((unit->anim==7)&&(unit->cptimage>25)&&(unit->cptimage<35))
                    draw_sprite_h_flip(page,explosion [3],unit->x+50,unit->y-50);

                if ((unit->anim==7)&&(unit->cptimage>35)&&(unit->cptimage<50))
                    draw_sprite_h_flip(page,explosion [4],unit->x+50,unit->y-100);

            }
            else
            {
                if (cpt3!=0)
                {
                    if ((unit->anim==6)&&(unit->cptimage<25))
                        draw_sprite_h_flip(page,explosion [0],unit->x+100,unit->y-50);

                    if ((unit->anim==6)&&(unit->cptimage>25)&&(unit->cptimage<50))
                        draw_sprite_h_flip(page,explosion [1],unit->x+100,unit->y-50);

                    if ((unit->anim==7)&&(unit->cptimage>0)&&(unit->cptimage<25))
                        draw_sprite_h_flip(page,explosion [2],unit->x+100,unit->y-50);

                    if ((unit->anim==7)&&(unit->cptimage>25)&&(unit->cptimage<35))
                        draw_sprite_h_flip(page,explosion [3],unit->x+100,unit->y-50);

                    if ((unit->anim==7)&&(unit->cptimage>35)&&(unit->cptimage<50))
                        draw_sprite_h_flip(page,explosion [4],unit->x+100,unit->y-100);

                }
                else
                {
                    if (cpt4!=0)
                    {
                        if ((unit->anim==6)&&(unit->cptimage<25))
                            draw_sprite_h_flip(page,explosion [0],unit->x+200,unit->y-50);

                        if ((unit->anim==6)&&(unit->cptimage>25)&&(unit->cptimage<50))
                            draw_sprite_h_flip(page,explosion [1],unit->x+200,unit->y-50);

                        if ((unit->anim==7)&&(unit->cptimage>0)&&(unit->cptimage<25))
                            draw_sprite_h_flip(page,explosion [2],unit->x+200,unit->y-50);

                        if ((unit->anim==7)&&(unit->cptimage>25)&&(unit->cptimage<35))
                            draw_sprite_h_flip(page,explosion [3],unit->x+200,unit->y-50);

                        if ((unit->anim==7)&&(unit->cptimage>35)&&(unit->cptimage<50))
                            draw_sprite_h_flip(page,explosion [4],unit->x+200,unit->y-100);

                    }
                    else
                    {
                        if (cpt5!=0)
                        {
                            if ((unit->anim==6)&&(unit->cptimage<25))
                                draw_sprite_h_flip(page,explosion [0],unit->x+300,unit->y-50);

                            if ((unit->anim==6)&&(unit->cptimage>25)&&(unit->cptimage<50))
                                draw_sprite_h_flip(page,explosion [1],unit->x+300,unit->y-50);

                            if ((unit->anim==7)&&(unit->cptimage>0)&&(unit->cptimage<25))
                                draw_sprite_h_flip(page,explosion [2],unit->x+300,unit->y-50);

                            if ((unit->anim==7)&&(unit->cptimage>25)&&(unit->cptimage<35))
                                draw_sprite_h_flip(page,explosion [3],unit->x+300,unit->y-50);

                            if ((unit->anim==7)&&(unit->cptimage>35)&&(unit->cptimage<50))
                                draw_sprite_h_flip(page,explosion [4],unit->x+300,unit->y-100);

                        }
                        else
                        {
                            if (cpt6!=0)
                            {
                                if ((unit->anim==6)&&(unit->cptimage<25))
                                    draw_sprite_h_flip(page,explosion [0],unit->x+400,unit->y-50);

                                if ((unit->anim==6)&&(unit->cptimage>25)&&(unit->cptimage<50))
                                    draw_sprite_h_flip(page,explosion [1],unit->x+400,unit->y-50);

                                if ((unit->anim==7)&&(unit->cptimage>0)&&(unit->cptimage<25))
                                    draw_sprite_h_flip(page,explosion [2],unit->x+400,unit->y-50);

                                if ((unit->anim==7)&&(unit->cptimage>25)&&(unit->cptimage<35))
                                    draw_sprite_h_flip(page,explosion [3],unit->x+400,unit->y-50);

                                if ((unit->anim==7)&&(unit->cptimage>35)&&(unit->cptimage<50))
                                    draw_sprite_h_flip(page,explosion [4],unit->x+400,unit->y-100);

                            }
                        }
                    }
                }
            }
        }
    }
    else
        draw_sprite_h_flip(page,sorcier[0],unit->x-50,unit->y-50);


}


