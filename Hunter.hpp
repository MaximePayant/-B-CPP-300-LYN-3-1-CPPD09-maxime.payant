/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Hunter.hpp
*/

#ifndef HUNTER_HPP
#define HUNTER_HPP

#include "Warrior.hpp"

class Hunter :
    virtual public Character,
    private Warrior
{

    public:
        Hunter(const std::string& name, int level, const std::string& weapon = "sword");

        int RangeAttack();
        using Warrior::CloseAttack;
        using Character::Heal;
        using Character::RestorePower;
        using Character::TakeDamage;

};

#endif // HUNTER_HPP