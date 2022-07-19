/*
** EPITECH PROJECT, 2022
** B-SYN-400-LIL-4-1-jetpack2tek3-martin.flament
** File description:
** UIView
*/

#ifndef UIVIEW_H_
#define UIVIEW_H_

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>

typedef struct UIView_t
{
    sfTexture *_texture;
    sfSprite *_sprite;
    sfVector2f _position;
    sfIntRect _rect;
    sfClock *_clock;
    int _no_clip;
} UIView_t;


#endif /* !UIVIEW_H_ */
