/*
** EPITECH PROJECT, 2022
** B-SYN-400-LIL-4-1-jetpack2tek3-martin.flament
** File description:
** obstacle
*/

#include "./../include/obstacle.h"
#include "./../include/my.h"

int count_char_in_strstr(char **strstr, char x)
{
    int nb_char = 0;

    for (int y = 0; strstr[y] != NULL; y++) {
        for (int i = 0; strstr[y][i] != '\0'; i++) {
            if (strstr[y][i] == x)
                nb_char++;
        }
    }
    return (nb_char);
}

Obstacle_t init_obstacle(Game_t *game)
{
    Obstacle_t obstacle;

    obstacle._nb_wall = count_char_in_strstr(game->_map, 'e');
    obstacle._nb_coin = count_char_in_strstr(game->_map, 'c');
    obstacle._wall = malloc(sizeof(UIView_t) * obstacle._nb_wall);
    obstacle._coin = malloc(sizeof(UIView_t) * obstacle._nb_coin);
    int x = 0;
    int y = 0;

    printf("init_obstacle()._coin: %d 💰\n", obstacle._nb_coin);
    printf("init_obstacle()._wall: %d 🔋\n", obstacle._nb_wall);
    display_strstr(game->_map);

    for (int i = 0; game->_map[i] != NULL; i++) {
        for (int j = 0; game->_map[i][j] != '\0'; j++) {
            if (game->_map[i][j] == 'e') {
                obstacle._wall[x] = set_sprite_obstacle("./assets/wall.png", i * 10, j * 10);
                x++;
                printf("no clip _wall: %d\n", obstacle._wall[x]._no_clip);
                printf("-> 'e' détecté: %d\n", x);
            } else if (game->_map[i][j] == 'c') {
                obstacle._coin[y] = set_sprite_obstacle("./assets/coin.png", i * 10, j * 10);
                y++;
                printf("-> 'c' détecté: %d\n", y);
            }
        }
    }
    return (obstacle);
}
