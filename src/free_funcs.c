/*
** EPITECH PROJECT, 2023
** CSFML_WORKSHOP
** File description:
** free_funcs
*/

#include "my.h"
#include "struct.h"

void free_double(char **map) {
    for (int i = 0; map[i] != NULL; i++) {
        free(map[i]);
    }
    free(map);
}

void free_sprites(sprites **obj)
{
    for (int i = 0; obj[i] != NULL; i++) {
        sfSprite_destroy(obj[i]->sprite);
        sfTexture_destroy(obj[i]->texture);
        free(obj[i]);
    }
    free(obj);
}

void free_text(text **obj)
{
    for (int i = 0; obj[i] != NULL; i++) {
        sfText_destroy(obj[i]->txt);
        free(obj[i]);
    }
    free(obj);
}