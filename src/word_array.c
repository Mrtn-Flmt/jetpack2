/*
** EPITECH PROJECT, 2022
** B-SYN-400-LIL-4-1-jetpack2tek3-martin.flament
** File description:
** word_array
*/

#include <stdio.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <unistd.h>
#include "stdlib.h"
#include "./../include/my.h"

char *get_content(char *filename)
{
    FILE *ptr;
    char *str;
    int i = 0;
    int j = 0;
 
    ptr = fopen(filename, "r");
    if (NULL == ptr)
        printf("file can't be opened \n");
    while (!feof(ptr)) {
        fgetc(ptr);
        i++;
    }
    fclose(ptr);
    str = malloc(sizeof(char) * i+1);
    ptr = fopen(filename, "r");
    while (!feof(ptr)) {
        str[j] = fgetc(ptr);
        j++;
    }
    fclose(ptr);
    return (str);
}

int my_strlen(char const *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

int letter(char charac, int status)
{
    if (status == 1 && charac >= 33 && charac <= 126) {
        return (1);
    } else if (status == 2 && charac >= 33 && charac <= 126 && charac != 58) {
        return (1);
    }
    return (0);
}

int	count(char *str)
{
    int	i = 0;
    int	b = 0;

    while (str[i] != '\0') {
        if (letter(str[i], 1) == 1 && letter(str[i + 1], 1) != 1)
            b++;
        i++;
    }
    return (b);
}

char **my_str_to_word_array(char *str)
{
    int	nb = count(str);
    int	a = 0;
    int	b = 0;
    int	c = 0;
    char **result = malloc(sizeof(char *) * (nb + 1));

    while (b < nb) {
        c = 0;
        result[b] = malloc(sizeof(char) * my_strlen(str) + 1);
        while (str[a] != '\0' && letter(str[a], 1) != 0) {
            result[b][c] = str[a];
            c++;
            a++;
        }
        result[b][c] = '\0';
        a++;
        b++;
    }
    result[b] = NULL;
    return (result);
}
