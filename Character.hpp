/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Character.hpp
*/

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>

class Character
{

    public:
        typedef enum {CLOSE, RANGE} AttackRange;
        static AttackRange Range;

        Character() = delete;
        Character(const Character&) = delete;
        Character(Character&&) = delete;
        Character(const std::string& name, int level);

        const std::string &getName() const  { return (m_name);   };
        int getLvl() const                  { return (m_level);  };
        int getPv() const                   { return (m_hp);     };
        int getPower() const                { return (m_energy); };
        const std::string& getClass() const { return (m_class);  };
        const std::string& getRace() const  { return (m_race);   };

        int getStrength() const     { return (m_strength);     };
        int getStamina() const      { return (m_stamina);      };
        int getIntelligence() const { return (m_intelligence); };
        int getSpirit() const       { return (m_spirit);       };
        int getAgility() const      { return (m_agility);      };

        int CloseAttack();
        int RangeAttack();
        void Heal();
        void RestorePower();
        void TakeDamage(int damage);

    protected:
        std::string m_name;
        std::size_t m_level;
        std::size_t m_hp;

        std::size_t m_energy;

        std::string m_class;
        std::string m_race;
        int m_strength;
        int m_stamina;
        int m_intelligence;
        int m_spirit;
        int m_agility;

};


#endif // CHARACTER_HPP