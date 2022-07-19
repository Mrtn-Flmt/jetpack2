/*
** EPITECH PROJECT, 2022
** B-SYN-400-LIL-4-1-jetpack2tek3-martin.flament
** File description:
** game
*/

#ifndef GAME_H_
#define GAME_H_

#include "./player.h"
#include "./UIView.h"
#include "./obstacle.h"

typedef struct Game_t
{
    UIView_t _background;
    Player_t _player_one;
    Player_t _player_two;
    Obstacle_t _obstacle;
    char **_map;
    char *str;
    sfWindow *_window;
    sfEvent _event;

    sfClock *_clock;
    float _elapsed;

    char *_port;
    char *_address;
} Game_t;

#endif /* !GAME_H_ */
