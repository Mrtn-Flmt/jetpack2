/*
** EPITECH PROJECT, 2022
** B-SYN-400-LIL-4-1-jetpack2tek3-martin.flament
** File description:
** error
*/

#include <getopt.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./../include/game.h"

void management_error(int ac, char **av, Game_t *game)
{
    int opt = getopt(ac, av, "h:p:");
      
    while ((opt = getopt(ac, av, "h:p:") != -1)) {
        if (opt == 'p')
            game->_port = atoi(optarg);
        else if (opt == 'h')
            game->_address = strdup(optarg);
    }
    return;
}