/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorey <lorey@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 15:28:15 by lorey             #+#    #+#             */
/*   Updated: 2025/05/02 16:01:05 by lorey            ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
# include <iostream>
# include <iomanip>
# include <string>

class Cat: public Animal
{
	public:
		Cat();
		Cat(const Cat &cat);
		~Cat();
		Cat& operator=(const Cat &cat);
		void	makeSound() const;
};

#endif
