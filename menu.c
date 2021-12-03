

#include "bibli.h"


int selectionMenu ()
{
    int choixMenu=10;
    if ((mouse_x>=200&&mouse_x<=400)&&(mouse_y-200>=0&&mouse_y<=240))
    {

        if (mouse_b &1)
        {
            choixMenu=1;
        }
    }
    if ((mouse_x>=400&&mouse_x<=600)&&(mouse_y-200>=0&&mouse_y<=240))
    {

        if (mouse_b &1)
        {
            choixMenu=2;
        }
    }
    if ((mouse_x>=200&&mouse_x<=400)&&(mouse_y-250>=0&&mouse_y<=290))
    {

        if (mouse_b &1)
        {
            choixMenu=3;
        }
    }
    if ((mouse_x>=400&&mouse_x<=600)&&(mouse_y-250>=0&&mouse_y<=290))
    {

        if (mouse_b &1)
        {
            choixMenu=4;
        }
    }

    if ((mouse_x>=300&&mouse_x<=500)&&(mouse_y-300>=0&&mouse_y<=340))
    {

        if (mouse_b &1)
        {
            choixMenu=0;
            /// cela nous fais quitter le programme
        }
    }
    return choixMenu;
}

int selectionDif(int * dif)
{
    if ((mouse_x>=100&&mouse_x<=300)&&(mouse_y-200>=0&&mouse_y<=240))
    {

        if (mouse_b &1)
        {
            *dif=1;
        }
    }
    if ((mouse_x>=300&&mouse_x<=500)&&(mouse_y-200>=0&&mouse_y<=240))
    {

        if (mouse_b &1)
        {
            *dif=2;
        }
    }
    if ((mouse_x>=500&&mouse_x<=700)&&(mouse_y-200>=0&&mouse_y<=240))
    {

        if (mouse_b &1)
        {
            *dif=3;
        }
    }
    if ((mouse_x>=300&&mouse_x<=500)&&(mouse_y-300>=0&&mouse_y<=340))
    {

        if (mouse_b &1)
        {
            return 15;
            /// cela nous fais quitter le programme
        }
    }
}






int selectionNiveau ()
{
    int choixMenu=10;
    if ((mouse_x>=300&&mouse_x<=500)&&(mouse_y-250>=0&&mouse_y<=290))
    {

        if (mouse_b &1)
        {
            choixMenu=1;
            rest(100);
        }
    }
    if ((mouse_x>=300&&mouse_x<=500)&&(mouse_y-300>=0&&mouse_y<=340))
    {

        if (mouse_b &1)
        {
            choixMenu=2;
            rest(100);
        }
    }
    if ((mouse_x>=300&&mouse_x<=500)&&(mouse_y-350>=0&&mouse_y<=390))
    {

        if (mouse_b &1)
        {
            choixMenu=3;
            rest(100);
        }
    }

    if ((mouse_x>=300&&mouse_x<=500)&&(mouse_y-400>=0&&mouse_y<=440))
    {

        if (mouse_b &1)
        {
            choixMenu=100;
            rest(100);
        }
    }
    return choixMenu;
}
