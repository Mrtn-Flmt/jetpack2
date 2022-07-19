/*
** EPITECH PROJECT, 2021
** my_src.c
** File description:
** file of my_runner
*/


#include "./../include/my.h"
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    Game_t game;
    sfEvent event;
    game = init_game();
    printf("🔑\nmain()._nb_coin: %d\nmain()._nb_wall: %d\n🔑\n",game._obstacle._nb_coin, game._obstacle._nb_wall);
    while (sfRenderWindow_isOpen(game._window)) {
        while (sfRenderWindow_pollEvent(game._window, &event))
            key_management(&game, &event);
        move(&game);
        display(&game);
    }
    printf("🔑\nmain()._nb_coin: %d\nmain()._nb_wall: %d\n🔑\n",game._obstacle._nb_coin, game._obstacle._nb_wall);
    return (0);
}
