/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 19:18:23 by polmarti          #+#    #+#             */
/*   Updated: 2024/11/16 19:18:25 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
}

Ice::Ice(Ice const &src) : AMateria(src.getType())
{
	*this = src;
}

Ice&       Ice::operator=(Ice const &src)
{
	if (this != &src)
		std::cout << "copying the type doesn’t make sense." << std::endl;
	return (*this);
}

AMateria*	Ice::clone() const
{
	AMateria *ptr = new(std::nothrow) Ice();
	return (ptr);
}

void		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice(void)
{
}
