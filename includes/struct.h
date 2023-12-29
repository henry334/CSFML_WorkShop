/*
** EPITECH PROJECT, 2023
** CSFML_WORKSHOP
** File description:
** struct
*/

#pragma once

#include <SFML/Graphics.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/Audio.h>

typedef struct {
    sfText *txt;
    sfFont *f;
} text;

typedef struct {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f vect;
    sfIntRect rect;
} sprites;

typedef struct {
    sfRenderWindow *window;
    sfEvent event;
} wdw;
