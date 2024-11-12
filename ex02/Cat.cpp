/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:42:43 by polmarti          #+#    #+#             */
/*   Updated: 2024/11/06 18:42:46 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	_type = "default_Cat";
	_brain = new Brain;
	set_ideas();
	_brain->ideas[0] = "default_Cat_idea";
	std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(Cat const &src) : Animal(src)
{
	std::cout << "Copy constructor Cat constructor called" << std::endl;
	*this = src;
}

Cat&       Cat::operator=(Cat const &src)
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
void	Cat::set_ideas(void)
{
	for(int i = 0; i < 100; i++)
		_brain->ideas[i] = "idea  cat";
}

void	Cat::set_ideas(unsigned int pos, std::string str)
{
	_brain->ideas[pos] = str;
}

std::string Cat::get_ideas(int pos)
{
	return(_brain->ideas[pos]); 
}

void    Cat::makeSound(void) const
{
	std::cout << "* * Meoowwwww * *" << std::endl;
}

Cat::~Cat(void)
{
	delete _brain;
	std::cout << "Default Cat destructor called" << std::endl;
}
