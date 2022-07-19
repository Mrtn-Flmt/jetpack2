/*
** EPITECH PROJECT, 2022
** B-SYN-400-LIL-4-1-jetpack2tek3-martin.flament
** File description:
** keyboard
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <unistd.h>
#include <stdlib.h>
#include "./../include/game.h"
#include "./../include/my.h"

void key_close(Game_t *game, sfEvent *event)
{
    if (event->type == sfEvtClosed || event->key.code == sfKeyEscape)
        sfRenderWindow_close(game->_window);
}

void key_fire(Game_t *game, sfEvent *event)
{
    if (event->type == sfEvtKeyReleased) {
        game->_player_one._fire = 0;
    } else if (event->key.code == sfKeySpace) {
        game->_player_one._fire = 1;
    }
}

void key_management(Game_t *game, sfEvent *event)
{
    key_close(game, event);
    key_fire(game, event);
}