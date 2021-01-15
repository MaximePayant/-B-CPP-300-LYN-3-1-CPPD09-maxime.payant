/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Mage.cpp
*/

#include "Mage.hpp"

Mage::Mage(const std::string& name, int level) :
Character(name, level)
{
    m_class = "Mage";
    m_race = "Gnome";
    m_strength = 6;
    m_stamina = 6;
    m_intelligence = 12;
    m_spirit = 11;
    m_agility = 7;
    std::cout << m_name << " teleported" << std::endl;
}

int Mage::CloseAttack()
{
    if (Range == RANGE)
        return (0);
    else if (m_energy < 10) {
        std::cout << m_name << " out of power" << std::endl;
        return (0);
    }
    m_energy -= 10;
    Range = RANGE;
    std::cout << m_name << " blinks" << std::endl;
    return (0);
}

int Mage::RangeAttack()
{
    if (m_energy < 25) {
        std::cout << m_name << " out of power" << std::endl;
        return (0);
    }
    m_energy -= 25;
    std::cout << m_name << " launches a fire ball" << std::endl;
    return (20 + m_spirit);
}

void Mage::RestorePower()
{
    std::size_t dif = 100 - m_energy;

    dif = ((int)dif < 50 + m_intelligence ? dif : 50 + m_intelligence);
    m_energy += dif;
    std::cout << m_name << " takes a mana potion" << std::endl;
}