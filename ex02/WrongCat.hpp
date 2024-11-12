/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:45:11 by polmarti          #+#    #+#             */
/*   Updated: 2024/11/06 18:45:15 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:

			WrongCat(void);
			WrongCat(WrongCat const &);
			WrongCat& operator=(WrongCat const &);
			void	makeSound(void) const;
			~WrongCat(void);
};

#endif

