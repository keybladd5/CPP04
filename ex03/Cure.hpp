/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 19:18:55 by polmarti          #+#    #+#             */
/*   Updated: 2024/11/16 19:18:56 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
	public:

			Cure(void);
			Cure(Cure const &);
			Cure& operator=(Cure const &);
			AMateria*	clone() const;
			void		use(ICharacter& target);
			~Cure(void);
};

#endif

