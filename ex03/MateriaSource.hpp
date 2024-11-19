/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 19:05:26 by polmarti          #+#    #+#             */
/*   Updated: 2024/11/16 19:05:27 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:

			AMateria *_inventory[4];
	
	public:

			MateriaSource();
			MateriaSource(MateriaSource const &);
			MateriaSource&	operator=(MateriaSource const &);
			void learnMateria(AMateria*);
			AMateria* createMateria(std::string const & type);
			~MateriaSource();

};
#endif

