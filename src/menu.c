/*
** EPITECH PROJECT, 2023
** CSFML_WORKSHOP
** File description:
** menu
*/

#include "my.h"
#include "struct.h"

int choose(int rep, wdw *wind_struct) {
    switch (rep) {
    case 0:
        return EXIT;
    case 1:
        return CONTINUE;
    case 2:
        return settings(wind_struct);
    default:
        break;
    }
    return LOOP;
}

int startmenu(wdw *wind_struct)
{
    sprites **sp = NULL; // REPLACE NULL WITH THE SPRITES YOU WANT TO DISPLAY BY CALLING THE FUNCTION
    sprites **buttons = NULL; // REPLACE NULL WITH THE SPRITES YOU WANT TO DISPLAY BY CALLING THE FUNCTION
    while (sfRenderWindow_isOpen(wind_struct->window)) {
        // CALL DISPLAY FUNCTIONS HERE FOR TEXT AND SPRITES (call display_sprite first it clear the window) display_sprite(..., ..., true = clear window))
        int rep = events(wind_struct, buttons, 0);
        rep = choose(rep, wind_struct);
        if (rep != LOOP)
            return rep;
    }
    // CALL FUNCTIONS HERE TO FREE THE TEXTS AND SPRITES
    return EXIT;
}