/*
** EPITECH PROJECT, 2022
** B-SYN-400-LIL-4-1-jetpack2tek3-martin.flament
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_

#include "./game.h"
#include "./player.h"
#include "./UIView.h"
#include "./obstacle.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int letter(char charac, int status);
int	count(char *str);
char **my_str_to_word_array(char *str);
char *get_content(char *filename);
int count_char_in_strstr(char **strstr, char x);

Game_t init_game();
Player_t init_player_one();
Player_t init_player_two();
Obstacle_t init_obstacle(Game_t *game);

UIView_t set_sprite(char *path_texture, int x, int y);
UIView_t set_sprite_obstacle(char *path_texture,
                            int x, int y);

void display(Game_t *game);
void display_sprite(sfRenderWindow *window, UIView_t *view);
void display_strstr(char **strstr);

void management_error(int ac, char **av, Game_t *game);

void key_close(Game_t *game, sfEvent *event);
void key_fire(Game_t *game, sfEvent *event);
void key_management(Game_t *game, sfEvent *event);

void move(Game_t *game);

void display_map(Game_t *game);
#endif /* !MY_H_ */
