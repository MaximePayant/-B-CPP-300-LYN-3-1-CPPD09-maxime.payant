/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Character.cpp
*/

#include "Character.hpp"

Character::AttackRange Character::Range = AttackRange::CLOSE;

Character::Character(const std::string& name, int level) :
m_name(name),
m_level(level),
m_hp(100),
m_energy(100),
m_strength(5),
m_stamina(5),
m_intelligence(5),
m_spirit(5),
m_agility(5)
{}

int Character::CloseAttack()
{
    if (m_energy < 10) {
        std::cout << m_name << " out of power" << std::endl;
        return (0);
    }
    else if (Range == AttackRange::RANGE)
        return (0);
    std::cout << m_name << " strikes with a wooden stick" << std::endl;
    return (10 + m_strength);
}

int Character::RangeAttack()
{
    if (m_energy < 10) {
        std::cout << m_name << " out of power" << std::endl;
        return (0);
    }
    std::cout << m_name << " tosses a stone" << std::endl;
    return (5 + m_strength);
}

void Character::Heal()
{
    m_hp = (m_hp + 50 > 100 ? 100 : m_hp + 50);
    std::cout << m_name << " takes a potion" << std::endl;
}

void Character::RestorePower()
{
    m_energy = 100;
    std::cout << m_name << " eats" << std::endl;
}

void Character::TakeDamage(int damage)
{
    m_hp = ((int)m_hp - damage < 0 ? 0 : m_hp - damage);
    if (m_hp)
        std::cout
            << m_name
            << " takes "
            << damage
            << " damage"
            << std::endl;
    else
        std::cout << m_name << " out of combat" << std::endl;
}

int main()
{
    return (0);
}