/*
** EPITECH PROJECT, 2023
** CSFML_WorkShop
** File description:
** game_sprites
*/

#include "my.h"
#include "struct.h"

sprites **game_sprites(void)
{
    int len = 2;
    sprites **save = malloc(sizeof(*save) * len);

    // Fill in the code here to create and populate sprite objects

    save[len - 1] = NULL;
    return save;
}