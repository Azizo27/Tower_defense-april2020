

#include "bibli.h"

void allegroinit()
{
    allegro_init();
    install_keyboard();
    install_mouse();
    set_color_depth(desktop_color_depth());
    if (set_gfx_mode(GFX_AUTODETECT_WINDOWED,800,600,0,0)!=0)
    {
        allegro_message("Probleme mode graphique");
        allegro_exit();
        exit(EXIT_FAILURE);
    }
}


t_listeChevaliers * creerListeChevaliers(int max)
{
    t_listeChevaliers *nouv;
    int i;
    nouv=(t_listeChevaliers *)malloc(1*sizeof(t_listeChevaliers));
    nouv->max=max;
    nouv->n=0;
    nouv->tab=(t_chevalier **)malloc(max*sizeof(t_chevalier*));
    for (i=0; i<max; i++)
    {
        nouv->tab[i]=NULL;
    }
    return nouv;
}


