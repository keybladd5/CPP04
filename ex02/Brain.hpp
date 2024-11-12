/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:33:45 by polmarti          #+#    #+#             */
/*   Updated: 2024/11/11 19:33:46 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
class Brain
{
	public:
			std::string ideas[100];
			Brain(void);
			Brain(Brain const &);
			Brain& operator=(Brain const &);
			~Brain(void);
};
#endif
