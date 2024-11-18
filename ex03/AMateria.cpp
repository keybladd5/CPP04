/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 18:31:56 by polmarti          #+#    #+#             */
/*   Updated: 2024/11/16 18:31:58 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type): _type(type)
{
}
AMateria::~AMateria(void)
{
}

std::string const &AMateria::getType() const
{
	return (_type);
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
}