/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Paladin.cpp
*/

#include "Paladin.hpp"

Paladin::Paladin(const std::string& name, int level, const std::string& weapon) :
Character(name, level),
Warrior(name, level, weapon),
Priest(name, level)
{
    m_class = "Paladin";
    m_race = "Humain";
    m_strength = 9;
    m_stamina = 10;
    m_intelligence = 10;
    m_spirit = 10;
    m_agility = 2;
    std::cout << "the light falls on " << m_name << std::endl;
}

int Paladin::Intercept()
{
    if (Range == CLOSE)
        return (0);
    if (m_energy < 10) {
        std::cout << m_name << " out of power" << std::endl;
        return (0);
    }
    Range = CLOSE;
    m_energy -= 10;
    std::cout << m_name << " intercepts" << std::endl;
    return (0);
}