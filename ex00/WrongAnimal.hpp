/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:44:52 by polmarti          #+#    #+#             */
/*   Updated: 2024/11/06 18:44:54 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include "Animal.hpp"

class WrongAnimal
{
	protected:
			
			std::string _type;
	public:

			WrongAnimal(void);
			WrongAnimal(WrongAnimal const &);
			WrongAnimal& operator=(WrongAnimal const &);
			void	makeSound(void) const;
			std::string getType(void) const;
			virtual ~WrongAnimal(void);
};

#endif
