/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 19:18:02 by polmarti          #+#    #+#             */
/*   Updated: 2024/11/16 19:18:14 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
	public:

			Ice(void);
			Ice(Ice const &);
			Ice& operator=(Ice const &);
			AMateria*	clone() const;
			void		use(ICharacter& target);
			~Ice(void);
};

#endif
