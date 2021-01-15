/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Mage.hpp
*/

#ifndef MAGE_HPP
#define MAGE_HPP

#include "Character.hpp"

class Mage :
    virtual public Character
{

    public:
        Mage(const std::string& name, int level);

        int CloseAttack();
        int RangeAttack();
        void RestorePower();
        using Character::Heal;
        using Character::TakeDamage;
};

#endif // MAGE_HPP