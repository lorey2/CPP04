/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <lorey@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 20:04:28 by lorey             #+#    #+#             */
/*   Updated: 2025/05/08 21:41:52 by lorey            ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include <iostream>
# include <iomanip>
# include <string>

class AMateria
{
	protected:
		std::string mat_type;
	public:
		AMateria();
		AMateria(std::string const & type);
		virtual ~AMateria();
		virtual AMateria& operator=(const AMateria &amateria);
		AMateria(const AMateria &amateria);
//[...]
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif // AMATERIA_HPP
