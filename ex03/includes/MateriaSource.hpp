/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <lorey@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 19:46:47 by lorey             #+#    #+#             */
/*   Updated: 2025/05/08 21:38:02 by lorey            ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public virtual IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &materia_source);
		~MateriaSource() {}
		MateriaSource& operator=(const MateriaSource &materia_source);
		void learnMateria(AMateria*) = 0;
		AMateria* createMateria(std::string const & type) = 0;
};

#endif
