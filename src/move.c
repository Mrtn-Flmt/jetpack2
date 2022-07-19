/*
** EPITECH PROJECT, 2022
** B-SYN-400-LIL-4-1-jetpack2tek3-martin.flament
** File description:
** move
*/

#include "./../include/player.h"
#include "./../include/UIView.h"
#include "./../include/game.h"

void move(Game_t *game)
{
    game->_elapsed = sfTime_asSeconds(sfClock_getElapsedTime(game->_clock));
    sfClock_restart(game->_clock);
    if (game->_player_one._sprite._position.y <= 800 &&
        game->_player_one._fire == 0) {
        game->_player_one._sprite._position.y += 300 * game->_elapsed;
    }
    if (game->_player_one._sprite._position.y >= 0 &&
        game->_player_one._fire == 1) {
        game->_player_one._sprite._position.y -= 300 * game->_elapsed;
    }
}