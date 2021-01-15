/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Warrior.cpp
*/

#include "Warrior.hpp"

Warrior::Warrior(const std::string&name, int level, const std::string& weapon) :
Character(name, level),
m_weapon(weapon)
{
    m_class = "Warrior";
    m_race = "Dwarf";
    m_strength = 12;
    m_stamina = 12;
    m_intelligence = 6;
    m_spirit = 5;
    m_agility = 7;
    std::cout
        << "I'm "
        << m_name
        << " KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG"
        << std::endl;
}

int Warrior::RangeAttack()
{
    if (Range == RANGE)
        return (0);
    else if (m_energy < 30) {
        std::cout << m_name << " out of power" << std::endl;
        return (0);
    }
    m_energy -= 30;
    std::cout
        << m_name
        << " strikes with his "
        << m_weapon
        << std::endl;
    return (20 + m_strength);
}

int Warrior::CloseAttack()
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