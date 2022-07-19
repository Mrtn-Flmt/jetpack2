/*
** EPITECH PROJECT, 2022
** B-SYN-400-LIL-4-1-jetpack2tek3-martin.flament
** File description:
** display
*/

#include "./../include/my.h"

void display(Game_t *game)
{
    sfRenderWindow_clear(game->_window, sfBlack);
    display_sprite(game->_window, &game->_background);
    display_sprite(game->_window, &game->_player_one._sprite);
    // display_sprite(game->_window, &game->_player_two._sprite);
    display_map(game->_map);
    sfRenderWindow_display(game->_window);
}

void display_sprite(sfRenderWindow *window, struct UIView_t *view)
{
    sfSprite_setPosition(view->_sprite,
                        view->_position);
    sfRenderWindow_drawSprite(window, view->_sprite, NULL);
}

void display_obstacle(sfRenderWindow *window, struct UIView_t view)
{
    sfSprite_setPosition(view._sprite,
                        view._position);
    sfRenderWindow_drawSprite(window, view._sprite, NULL);
}

void display_strstr(char **strstr)
{
    for (int y = 0; strstr[y] != NULL; y++) {
        for (int i = 0; strstr[y][i] != '\0'; i++)
            printf("%c", strstr[y][i]);
        printf("\n");
    }
}

void display_map(Game_t *game)
{
    printf("❌\ndisplay_map()._nb_coin: %d\n", game->_obstacle._nb_coin);
    printf("display_map()._nb_wall: %d\n❌\n", game->_obstacle._nb_wall);
    // printf("❌ display_map()._no_clip: _coin %d\n", game->_obstacle._coin[0]._no_clip);

    // for (int i = 0; i != 3; i++) {
    //     printf("❌ display_map()._no_clip: _coin %d\n", game->_obstacle._coin[i]._no_clip);
        // display_obstacle(game->_window, game->_obstacle._coin[i]);
    // }
    // for (int i = 0; i != 5; i++) {
    //     printf("❌ display_map()._no_clip: _wall: %d\n", game->_obstacle._wall[i]._no_clip);
    //     display_obstacle(game->_window, game->_obstacle._wall[i]);
    // }
}

