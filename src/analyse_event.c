/*
** EPITECH PROJECT, 2023
** CSFML_WORKSHOP
** File description:
** analyse_event
*/

#include "my.h"
#include "struct.h"

int button_click(wdw *wind_struct, sprites **ar, int start) {
    if (ar == NULL) {
        return LOOP;
    }
    int k = wind_struct->event.mouseButton.button;
    int x = wind_struct->event.mouseButton.x;
    int y = wind_struct->event.mouseButton.y;
    for (int c = start; ar[c] != NULL; c++) {
        // Fill in the condition to check if a button is clicked
    }
    return LOOP;
}

int events(wdw *wind_struct, sprites **ar, int start)
{
    while (sfRenderWindow_pollEvent
        (wind_struct->window, &wind_struct->event)) {
            switch (wind_struct->event.type) {
                case sfEvtClosed:
                    sfRenderWindow_close(wind_struct->window);
                    break;
                case sfEvtMouseButtonPressed:
                    return button_click(wind_struct, ar, start);
                case sfEvtKeyPressed:
                    return wind_struct->event.key.code;
                default:
                    continue;
            }
    }
    return LOOP;
}