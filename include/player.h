/*
** EPITECH PROJECT, 2022
** B-SYN-400-LIL-4-1-jetpack2tek3-martin.flament
** File description:
** player
*/

#ifndef PLAYER_H_
#define PLAYER_H_

#include "UIView.h"

typedef struct Player_t
{
    int _id;
    int _coin;
    int _alive;
    int _fire;

    UIView_t _sprite;
} Player_t;

#endif /* !PLAYER_H_ */
