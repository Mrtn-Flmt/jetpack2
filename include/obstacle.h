/*
** EPITECH PROJECT, 2022
** B-SYN-400-LIL-4-1-jetpack2tek3-martin.flament
** File description:
** obstacle
*/

#ifndef OBSTACLE_H_
#define OBSTACLE_H_

#include "./UIView.h"

typedef struct Obstacle_t
{
    UIView_t *_coin;
    UIView_t *_wall;
    int _nb_coin;
    int _nb_wall;
} Obstacle_t;

#endif /* !OBSTACLE_H_ */
