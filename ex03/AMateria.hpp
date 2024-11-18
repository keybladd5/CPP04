/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 18:31:01 by polmarti          #+#    #+#             */
/*   Updated: 2024/11/16 18:31:02 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>

class ICharacter;

class AMateria
{
	protected:

			const std::string _type;

	public:

			AMateria(std::string const & type);
			virtual ~AMateria(void);
			std::string const &	getType() const;
			virtual AMateria*	clone() const = 0;
			virtual void		use(ICharacter& target);
};
#endif


