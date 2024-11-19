/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 19:06:13 by polmarti          #+#    #+#             */
/*   Updated: 2024/11/16 19:06:14 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const str) : _name(str)
{
	for (int i = 0; i < 4; i++)
		_inv[i] = NULL;
}

Character::Character(Character const& src) : _name(src._name)
{
	*this = src;
}

Character&	Character::operator=(Character const &src)
{
	if (this != &src)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_inv[i])
				delete _inv[i];
			_inv[i] = src._inv[i]->clone();
		}
	}
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_inv[i])
			delete _inv[i];
	}
}

std::string const & Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inv[i] == NULL)
		{
			_inv[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if ((idx >= 0 && idx <= 3) && _inv[idx])
		_inv[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if(!(idx >= 0 && idx <= 3) || !_inv[idx])
	{
		std::cout << "No materia aviable in " << idx << " slot from " << _name << " character" << std::endl;
		return ;
	}
	_inv[idx]->use(target);
}
