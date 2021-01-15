/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Priest.cpp
*/

#include "Priest.hpp"

Priest::Priest(const std::string&name, int level) :
Character(name, level),
Mage(name, level)
{
    m_class = "Priest";
    m_race = "Orc";
    m_strength = 4;
    m_stamina = 4;
    m_intelligence = 42;
    m_spirit = 21;
    m_agility = 2;
    std::cout << m_name << " enters in the order" << std::endl;
}

int Priest::CloseAttack()
{
    if (m_energy < 10) {
        std::cout << m_name << " out of power" << std::endl;
        return (0);
    }
    if (Range == RANGE)
        return (0);
    m_energy -= 10;
    Range = RANGE;
    std::cout << m_name << " uses a spirit explosion" << std::endl;
    return (10 + m_spirit);
}

void Priest::Heal()
{
    if (m_energy < 10)
        std::cout << m_name << " out of power" << std::endl;
    else {
        m_energy -= 10;
        m_hp = (m_hp + 70 > 100 ? 100 : m_hp + 70);
        std::cout << m_name << " casts a little heal spell" << std::endl;
    }
}