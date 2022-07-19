/*
** EPITECH PROJECT, 2022
** B-SYN-400-LIL-4-1-jetpack2tek3-martin.flament
** File description:
** init
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include "./../include/my.h"

UIView_t set_sprite(char *path_texture,
                            int x, int y)
{
    UIView_t view;

    view._sprite = sfSprite_create();
    view._texture = sfTexture_createFromFile(path_texture, NULL);
    view._position.x = x;
    view._position.y = y;
    view._no_clip = 0;
    sfSprite_setTexture(view._sprite, view._texture, sfTrue);
    return (view);
}

UIView_t set_sprite_obstacle(char *path_texture,
                            int x, int y)
{
    UIView_t view;

    view._sprite = sfSprite_create();
    view._texture = sfTexture_createFromFile(path_texture, NULL);
    view._position.x = x;
    view._position.y = y;
    view._no_clip = 1;
    sfSprite_setTexture(view._sprite, view._texture, sfTrue);
    return (view);
}

Player_t init_player_one()
{
    Player_t p_one;

    p_one._id = 1;
    p_one._coin = 0;
    p_one._alive = 1;
    p_one._sprite = set_sprite("./assets/starship.png", 200, 1080/2);
    p_one._fire = 0;
    return (p_one);
}

Player_t init_player_two()
{
    Player_t p_two;

    p_two._id = 2;
    p_two._coin = 0;
    p_two._alive = 1;
    p_two._sprite = set_sprite("./assets/starship.png", 200, 1080/2);
    p_two._fire = 0;
    return (p_two);
}

Game_t init_game()
{
    Game_t game;


    sfRenderWindow_setFramerateLimit(game._window, 60);
    game._background = set_sprite("./assets/bg_stars.jpeg", 0, 0);
    game._player_one = init_player_one();
    game._player_two = init_player_two();
    sfVideoMode mode = {1920, 1080, 64};
    game._window = sfRenderWindow_create(mode, "jetpack2tek3",
                        sfResize | sfClose, NULL);
    game._map = my_str_to_word_array(get_content("map.txt"));
    game._obstacle = init_obstacle(&game);
    game._clock = sfClock_create();
    game._elapsed = sfTime_asSeconds(sfClock_getElapsedTime(game._clock));
    printf("init_game()._nb_coin: %d 💰\n", game._obstacle._nb_coin);
    printf("init_game()._nb_wall %d 🔋\n\n", game._obstacle._nb_wall);
    return (game);
}
