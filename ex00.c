/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** ex00.c
*/

#include "ex00.h"

static void cthulhu_initializer(cthulhu_t *octopus)
{
    octopus->m_name = "Cthulhu";
    octopus->m_power = 42;
    printf("––––\n");
    printf("Building %s\n", octopus->m_name);
}

static void koala_initializer(koala_t *gustave, char *_name, char _is_A_Legend)
{
    gustave->m_parent = *new_cthulhu();
    gustave->m_is_a_legend = _is_A_Legend;
    gustave->m_parent.m_name = _name;
    if (!_is_A_Legend)
        gustave->m_parent.m_power = 0;
    printf("Building %s\n", _name);
}

cthulhu_t* new_cthulhu()
{
    cthulhu_t *newOctopus = malloc(sizeof(cthulhu_t));

    cthulhu_initializer(newOctopus);
    return (newOctopus);
}

void print_power(cthulhu_t *octopus)
{
    printf("Power => %i\n", octopus->m_power);
}

void attack(cthulhu_t *octopus)
{
    if (octopus->m_power >= 42) {
        printf("%s attacks and destroys the city\n", octopus->m_name);
        octopus->m_power -= 42;
    }
    else
        printf("%s can’t attack, he doesn’t have enough power\n", octopus->m_name);
}

void sleeping(cthulhu_t *octopus)
{
    printf("%s sleeps\n", octopus->m_name);
    octopus->m_power += 42000;
}

koala_t* new_koala(char *name, char is_a_legend)
{
    koala_t *newGustave = malloc(sizeof(koala_t));

    koala_initializer(newGustave, name, is_a_legend);
    return (newGustave);
}

void eat(koala_t *gustave)
{
    printf("%s eats\n", gustave->m_parent.m_name);
    gustave->m_parent.m_power += 42;
}