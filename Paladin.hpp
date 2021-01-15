/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Paladin.hpp
*/

#ifndef PALADIN_HPP
#define PALADIN_HPP

#include "Priest.hpp"
#include "Warrior.hpp"

class Paladin :
    virtual public Character,
    public Warrior,
    public Priest
{

    public:
        Paladin(const std::string& name, int level, const std::string& weapon = "hammer");

        int Intercept();
        using Warrior::CloseAttack;
        using Priest::RangeAttack;
        using Priest::Heal;
        using Character::RestorePower;
        using Character::TakeDamage;

};

#endif // PALADIN_HPP