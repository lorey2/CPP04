/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <lorey@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 20:52:06 by lorey             #+#    #+#             */
/*   Updated: 2025/05/09 02:53:45 by lorey            ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"
#include <iostream>
#include <ostream>

Character::Character()
{
	this->name = "default character";
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(std::string cname)
{
	this->name = cname;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(const Character &character)
{
	*this = character;
}

Character& Character ::operator=(const Character &character)
{
	if (this == &character)
	{
		std::cout << "self assignement..." << std::endl;
		return *this;
	}
	this->name = character.name;
	for(int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete (this->inventory[i]);
		if (character.inventory[i])
			this->inventory[i] = character.inventory[i]->clone();
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete (this->inventory[i]);
	}
}

const std::string& Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
		if (this->inventory[idx])
			delete (this->inventory[idx]);
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3)
	{
		if (this->inventory[idx])
		{
			this->inventory[idx]->use(target);
			delete (this->inventory[idx]);
			this->inventory[idx] = NULL;
		}
	}
}
