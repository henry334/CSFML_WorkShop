/*
** EPITECH PROJECT, 2023
** CSFML_WorkShop
** File description:
** game_text
*/

#include "my.h"
#include "struct.h"

text **game_text(void)
{
    int len = 2;
    text **t = malloc(sizeof(*t) * len);

    // Fill in the code here to create and populate text objects

    t[len - 1] = NULL;
    return t;
}