/*
** EPITECH PROJECT, 2023
** CSFML_WORKSHOP
** File description:
** main
*/

#include "my.h"
#include "struct.h"

void startgame(wdw *wind_struct)
{
    text **t = NULL; // REPLACE NULL WITH THE TEXTS YOU WANT TO DISPLAY
    while (sfRenderWindow_isOpen(wind_struct->window)) {
        sfRenderWindow_display(wind_struct->window);
        sfRenderWindow_clear(wind_struct->window, sfBlack);
        display_text(t, wind_struct);
        int rep = events(wind_struct, NULL, 0);
        if (rep != LOOP)
            printf("%d\n", rep);
    }
}

void start(wdw *wind_struct)
{
    int rep = startmenu(wind_struct);
    // startgame(wind_struct);
}

int main(int argv, char **argc)
{
    wdw wind_struct = init_window();
    // start(&wind_struct);
    return 0;
}