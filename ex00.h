/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** ex00.h
*/

#ifndef EX00_H
#define EX00_H

#include <stdio.h>
#include <stdlib.h>

typedef struct cthulhu_s
{
    char *m_name;
    int m_power;
} cthulhu_t;

cthulhu_t *new_cthulhu();
void print_power(cthulhu_t *octopus);
void attack(cthulhu_t *octopus);
void sleeping(cthulhu_t *octopus);

typedef struct koala_s
{
    cthulhu_t m_parent;
    char m_is_a_legend;
} koala_t;

koala_t *new_koala(char *name, char is_a_legend);
void eat(koala_t *gustave);

#endif // EX00_H