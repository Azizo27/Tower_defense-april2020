

#include "bibli.h"




void siZoneAjout(BITMAP * page, BITMAP * caseChevalier, BITMAP* caseennemi)
{
    int couleur, coulg;
    int cimboss, coulboss;
    couleur=getpixel(caseChevalier, mouse_x, mouse_y);
    coulg=getg(couleur);

    cimboss=getpixel(caseennemi, mouse_x, mouse_y);
    coulboss=getb(cimboss);


    if(coulg!=0 && coulboss!=250)
    {
        if((mouse_x>=200)&&(mouse_x<300)&&(mouse_y>=100)&&(mouse_y<200))
        {
            rect(page,200,100,299,199,makecol(0,255,0));
        }
        if((mouse_x>=300)&&(mouse_x<400)&&(mouse_y>=100)&&(mouse_y<200))
        {
            rect(page,300,100,399,199,makecol(0,255,0));
        }
        if((mouse_x>=400)&&(mouse_x<500)&&(mouse_y>=100)&&(mouse_y<200))
        {
            rect(page,400,100,499,199,makecol(0,255,0));
        }
        if((mouse_x>=500)&&(mouse_x<600)&&(mouse_y>=100)&&(mouse_y<200))
        {
            rect(page,500,100,599,199,makecol(0,255,0));
        }
        if((mouse_x>=600)&&(mouse_x<700)&&(mouse_y>=100)&&(mouse_y<200))
        {
            rect(page,600,100,699,199,makecol(0,255,0));
        }
        if((mouse_x>=700)&&(mouse_x<800)&&(mouse_y>=100)&&(mouse_y<200))
        {
            rect(page,700,100,799,199,makecol(0,255,0));
        }


        if((mouse_x>=200)&&(mouse_x<300)&&(mouse_y>=200)&&(mouse_y<300))
        {
            rect(page,200,200,299,299,makecol(0,255,0));
        }
        if((mouse_x>=300)&&(mouse_x<400)&&(mouse_y>=200)&&(mouse_y<300))
        {
            rect(page,300,200,399,299,makecol(0,255,0));
        }
        if((mouse_x>=400)&&(mouse_x<500)&&(mouse_y>=200)&&(mouse_y<300))
        {
            rect(page,400,200,499,299,makecol(0,255,0));
        }
        if((mouse_x>=500)&&(mouse_x<600)&&(mouse_y>=200)&&(mouse_y<300))
        {
            rect(page,500,200,599,299,makecol(0,255,0));
        }
        if((mouse_x>=600)&&(mouse_x<700)&&(mouse_y>=200)&&(mouse_y<300))
        {
            rect(page,600,200,699,299,makecol(0,255,0));
        }
        if((mouse_x>=700)&&(mouse_x<800)&&(mouse_y>=200)&&(mouse_y<300))
        {
            rect(page,700,200,799,299,makecol(0,255,0));
        }


        if((mouse_x>=200)&&(mouse_x<300)&&(mouse_y>=300)&&(mouse_y<400))
        {
            rect(page,200,300,299,399,makecol(0,255,0));
        }
        if((mouse_x>=300)&&(mouse_x<400)&&(mouse_y>=300)&&(mouse_y<400))
        {
            rect(page,300,300,399,399,makecol(0,255,0));
        }
        if((mouse_x>=400)&&(mouse_x<500)&&(mouse_y>=300)&&(mouse_y<400))
        {
            rect(page,400,300,499,399,makecol(0,255,0));
        }
        if((mouse_x>=500)&&(mouse_x<600)&&(mouse_y>=300)&&(mouse_y<400))
        {
            rect(page,500,300,599,399,makecol(0,255,0));
        }
        if((mouse_x>=600)&&(mouse_x<700)&&(mouse_y>=300)&&(mouse_y<400))
        {
            rect(page,600,300,699,399,makecol(0,255,0));
        }
        if((mouse_x>=700)&&(mouse_x<800)&&(mouse_y>=300)&&(mouse_y<400))
        {
            rect(page,700,300,799,399,makecol(0,255,0));
        }


        if((mouse_x>=200)&&(mouse_x<300)&&(mouse_y>=400)&&(mouse_y<500))
        {
            rect(page,200,400,299,499,makecol(0,255,0));
        }
        if((mouse_x>=300)&&(mouse_x<400)&&(mouse_y>=400)&&(mouse_y<500))
        {
            rect(page,300,400,399,499,makecol(0,255,0));
        }
        if((mouse_x>=400)&&(mouse_x<500)&&(mouse_y>=400)&&(mouse_y<500))
        {
            rect(page,400,400,499,499,makecol(0,255,0));
        }
        if((mouse_x>=500)&&(mouse_x<600)&&(mouse_y>=400)&&(mouse_y<500))
        {
            rect(page,500,400,599,499,makecol(0,255,0));
        }
        if((mouse_x>=600)&&(mouse_x<700)&&(mouse_y>=400)&&(mouse_y<500))
        {
            rect(page,600,400,699,499,makecol(0,255,0));
        }
        if((mouse_x>=700)&&(mouse_x<800)&&(mouse_y>=400)&&(mouse_y<500))
        {
            rect(page,700,400,799,499,makecol(0,255,0));
        }


        if((mouse_x>=200)&&(mouse_x<300)&&(mouse_y>=500)&&(mouse_y<600))
        {
            rect(page,200,500,299,599,makecol(0,255,0));
        }
        if((mouse_x>=300)&&(mouse_x<400)&&(mouse_y>=500)&&(mouse_y<600))
        {
            rect(page,300,500,399,599,makecol(0,255,0));
        }
        if((mouse_x>=400)&&(mouse_x<500)&&(mouse_y>=500)&&(mouse_y<600))
        {
            rect(page,400,500,499,599,makecol(0,255,0));
        }
        if((mouse_x>=500)&&(mouse_x<600)&&(mouse_y>=500)&&(mouse_y<600))
        {
            rect(page,500,500,599,599,makecol(0,255,0));
        }
        if((mouse_x>=600)&&(mouse_x<700)&&(mouse_y>=500)&&(mouse_y<600))
        {
            rect(page,600,500,699,599,makecol(0,255,0));
        }
        if((mouse_x>=700)&&(mouse_x<800)&&(mouse_y>=500)&&(mouse_y<600))
        {
            rect(page,700,500,799,599,makecol(0,255,0));
        }
    }
}

void siZoneSupprimer(BITMAP * page, BITMAP * caseChevalier)
{
    int couleur, coulg;
    couleur=getpixel(caseChevalier, mouse_x, mouse_y);
    coulg=getg(couleur);
    if(coulg==0)
    {
        if((mouse_x>=200)&&(mouse_x<300)&&(mouse_y>=100)&&(mouse_y<200))
        {
            rect(page,200,100,299,199,makecol(255,0,0));
        }
        if((mouse_x>=300)&&(mouse_x<400)&&(mouse_y>=100)&&(mouse_y<200))
        {
            rect(page,300,100,399,199,makecol(255,0,0));
        }
        if((mouse_x>=400)&&(mouse_x<500)&&(mouse_y>=100)&&(mouse_y<200))
        {
            rect(page,400,100,499,199,makecol(255,0,0));
        }
        if((mouse_x>=500)&&(mouse_x<600)&&(mouse_y>=100)&&(mouse_y<200))
        {
            rect(page,500,100,599,199,makecol(255,0,0));
        }
        if((mouse_x>=600)&&(mouse_x<700)&&(mouse_y>=100)&&(mouse_y<200))
        {
            rect(page,600,100,699,199,makecol(255,0,0));
        }
        if((mouse_x>=700)&&(mouse_x<800)&&(mouse_y>=100)&&(mouse_y<200))
        {
            rect(page,700,100,799,199,makecol(255,0,0));
        }


        if((mouse_x>=200)&&(mouse_x<300)&&(mouse_y>=200)&&(mouse_y<300))
        {
            rect(page,200,200,299,299,makecol(255,0,0));
        }
        if((mouse_x>=300)&&(mouse_x<400)&&(mouse_y>=200)&&(mouse_y<300))
        {
            rect(page,300,200,399,299,makecol(255,0,0));
        }
        if((mouse_x>=400)&&(mouse_x<500)&&(mouse_y>=200)&&(mouse_y<300))
        {
            rect(page,400,200,499,299,makecol(255,0,0));
        }
        if((mouse_x>=500)&&(mouse_x<600)&&(mouse_y>=200)&&(mouse_y<300))
        {
            rect(page,500,200,599,299,makecol(255,0,0));
        }
        if((mouse_x>=600)&&(mouse_x<700)&&(mouse_y>=200)&&(mouse_y<300))
        {
            rect(page,600,200,699,299,makecol(255,0,0));
        }
        if((mouse_x>=700)&&(mouse_x<800)&&(mouse_y>=200)&&(mouse_y<300))
        {
            rect(page,700,200,799,299,makecol(255,0,0));
        }


        if((mouse_x>=200)&&(mouse_x<300)&&(mouse_y>=300)&&(mouse_y<400))
        {
            rect(page,200,300,299,399,makecol(255,0,0));
        }
        if((mouse_x>=300)&&(mouse_x<400)&&(mouse_y>=300)&&(mouse_y<400))
        {
            rect(page,300,300,399,399,makecol(255,0,0));
        }
        if((mouse_x>=400)&&(mouse_x<500)&&(mouse_y>=300)&&(mouse_y<400))
        {
            rect(page,400,300,499,399,makecol(255,0,0));
        }
        if((mouse_x>=500)&&(mouse_x<600)&&(mouse_y>=300)&&(mouse_y<400))
        {
            rect(page,500,300,599,399,makecol(255,0,0));
        }
        if((mouse_x>=600)&&(mouse_x<700)&&(mouse_y>=300)&&(mouse_y<400))
        {
            rect(page,600,300,699,399,makecol(255,0,0));
        }
        if((mouse_x>=700)&&(mouse_x<800)&&(mouse_y>=300)&&(mouse_y<400))
        {
            rect(page,700,300,799,399,makecol(255,0,0));
        }


        if((mouse_x>=200)&&(mouse_x<300)&&(mouse_y>=400)&&(mouse_y<500))
        {
            rect(page,200,400,299,499,makecol(255,0,0));
        }
        if((mouse_x>=300)&&(mouse_x<400)&&(mouse_y>=400)&&(mouse_y<500))
        {
            rect(page,300,400,399,499,makecol(255,0,0));
        }
        if((mouse_x>=400)&&(mouse_x<500)&&(mouse_y>=400)&&(mouse_y<500))
        {
            rect(page,400,400,499,499,makecol(255,0,0));
        }
        if((mouse_x>=500)&&(mouse_x<600)&&(mouse_y>=400)&&(mouse_y<500))
        {
            rect(page,500,400,599,499,makecol(255,0,0));
        }
        if((mouse_x>=600)&&(mouse_x<700)&&(mouse_y>=400)&&(mouse_y<500))
        {
            rect(page,600,400,699,499,makecol(255,0,0));
        }
        if((mouse_x>=700)&&(mouse_x<800)&&(mouse_y>=400)&&(mouse_y<500))
        {
            rect(page,700,400,799,499,makecol(255,0,0));
        }


        if((mouse_x>=200)&&(mouse_x<300)&&(mouse_y>=500)&&(mouse_y<600))
        {
            rect(page,200,500,299,599,makecol(255,0,0));
        }
        if((mouse_x>=300)&&(mouse_x<400)&&(mouse_y>=500)&&(mouse_y<600))
        {
            rect(page,300,500,399,599,makecol(255,0,0));
        }
        if((mouse_x>=400)&&(mouse_x<500)&&(mouse_y>=500)&&(mouse_y<600))
        {
            rect(page,400,500,499,599,makecol(255,0,0));
        }
        if((mouse_x>=500)&&(mouse_x<600)&&(mouse_y>=500)&&(mouse_y<600))
        {
            rect(page,500,500,599,599,makecol(255,0,0));
        }
        if((mouse_x>=600)&&(mouse_x<700)&&(mouse_y>=500)&&(mouse_y<600))
        {
            rect(page,600,500,699,599,makecol(255,0,0));
        }
        if((mouse_x>=700)&&(mouse_x<800)&&(mouse_y>=500)&&(mouse_y<600))
        {
            rect(page,700,500,799,599,makecol(255,0,0));
        }
    }
}
