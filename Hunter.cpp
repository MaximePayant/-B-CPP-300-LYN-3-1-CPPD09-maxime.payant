/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Hunter.cpp
*/

#include "Hunter.hpp"

Hunter::Hunter(const std::string& name, int level, const std::string& weapon) :
Character(name, level),
Warrior(name, level, weapon)
{
    m_class = "Hunter";
    m_race = "Elf";
    m_strength = 9;
    m_stamina = 9;
    m_intelligence = 5;
    m_spirit = 6;
    m_agility = 25;
    std::cout << m_name << " is born from a tree" << std::endl;
}

int Hunter::RangeAttack()
{
    if (m_energy < 25) {
        std::cout << m_name << " out of power" << std::endl;
        return (0);
    }
    m_energy -= 25;
    std::cout << m_name << " uses his bow" << std::endl;
    return (20 + m_agility);
}