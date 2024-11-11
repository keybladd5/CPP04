/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:41:26 by polmarti          #+#    #+#             */
/*   Updated: 2024/11/06 18:41:28 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	_type = "default_animal";
	_brain = new Brain;
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(Animal const &src)
{
	std::cout << "Copy constructor Animal constructor called" << std::endl;
	*this = src;
}

Animal&       Animal::operator=(Animal const &src)
{
	std::cout << "copy assignment operator called" << std::endl;
	if (this != &src)
		_type = src._type;
	return (*this);
}

void	Animal::set_ideas(void)
{
	for(int i = 0; i < 100; i++)
		_brain->ideas[i] = "idea ";
}

std::string Animal::get_ideas(int i)
{
	return(_brain->ideas[i]); 
}

std::string Animal::getType(void) const
{
    return (_type);
}

void    Animal::makeSound(void) const
{
	std::cout << "* * generical sound * *" << std::endl;
}

Animal::~Animal(void)
{
	delete _brain;
	std::cout << "Default Animal destructor called" << std::endl;
}
