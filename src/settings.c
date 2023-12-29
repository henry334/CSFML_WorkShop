/*
** EPITECH PROJECT, 2023
** CSFML_WORKSHOP
** File description:
** settings
*/

#include "my.h"
#include "struct.h"

int check_click(int rep, wdw *wind_struct)
{
    (void)(wind_struct);
    switch (rep) {
        case 0:
            break;
        default:
            return CONTINUE;
    }
    return LOOP;
}

int settings(wdw *wind_struct)
{
    text **t = NULL; // REPLACE NULL WITH THE TEXT YOU WANT TO DISPLAY BY CALLING THE FUNCTION
    sprites **sts = NULL; // REPLACE NULL WITH THE SPRITES YOU WANT TO DISPLAY BY CALLING THE FUNCTION
    while (sfRenderWindow_isOpen(wind_struct->window)) {
        // CALL DISPLAY FUNCTIONS HERE FOR TEXT AND SPRITES (call display_sprites first it clear the window)
        int rep = events(wind_struct, sts, 0);
        if (rep != LOOP) {
            return check_click(rep, wind_struct);
        }
    }
    // CALL FUNCTIONS HERE TO FREE THE TEXTS AND SPRITES
    return EXIT;
}