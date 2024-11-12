/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:42:29 by polmarti          #+#    #+#             */
/*   Updated: 2024/11/06 18:42:31 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	_type = "default_Dog";
	_brain = new Brain;
	set_ideas();
	_brain->ideas[0] = "default_Dog_idea";
	std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(Dog const &src) : Animal(src)
{
	std::cout << "Copy constructor Dog constructor called" << std::endl;
	*this = src;
}

Dog&       Dog::operator=(Dog const &src)
{
	std::cout << "copy assignment operator called" << std::endl;
	if (this != &src)
	{
		_type = src._type;
		_brain = new Brain;
		for (int i = 0; i < 100; i++)
			_brain->ideas[i] = src._brain->ideas[i]; 
	}
	return (*this);
}
void	Dog::set_ideas(void)
{
	for(int i = 0; i < 100; i++)
		_brain->ideas[i] = "idea dog";
}

void	Dog::set_ideas(unsigned int pos, std::string str)
{
	_brain->ideas[pos] = str;
}

std::string Dog::get_ideas(int pos)
{
	return(_brain->ideas[pos]); 
}
void    Dog::makeSound(void) const
{
	std::cout << "* * Bark!Bark! * *" << std::endl;
}

Dog::~Dog(void)
{
	delete _brain;
	std::cout << "Default Dog destructor called" << std::endl;
}
