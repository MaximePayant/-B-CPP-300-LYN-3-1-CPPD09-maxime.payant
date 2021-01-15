/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Priest.hpp
*/

#ifndef PRIEST_HPP
#define PRIEST_HPP

#include "Mage.hpp"

class Priest :
    virtual public Character,
    public Mage
{

    public:
        Priest(const std::string&name, int level);

        int CloseAttack();
        void Heal();
        using Mage::RangeAttack;
        using Mage::RestorePower;
        using Character::TakeDamage;

};

#endif // PRIEST_HPP