/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 19:18:46 by polmarti          #+#    #+#             */
/*   Updated: 2024/11/16 19:18:48 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
}

Cure::Cure(Cure const &src) : AMateria(src.getType())
{
	*this = src;
}

Cure&       Cure::operator=(Cure const &src)
{
	if (this != &src)
		std::cout << "copying the type doesn’t make sense." << std::endl;
	return (*this);
}

AMateria*	Cure::clone() const
{
	AMateria *ptr = new(std::nothrow) Cure();
	return (ptr);
}

void		Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() <<  "'s wounds *" << std::endl;
}

Cure::~Cure(void)
{
}