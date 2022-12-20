/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:26:11 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/20 16:01:22 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public:
		Cat( void );
		Cat( const Cat & );
        Cat &operator= ( const Cat & );
		~Cat( void );
		void    makeSound( void ) const;
		void		addIdea( std::string idea, int index );
		std::string talk( int index );
    private:
		Brain   *B;
};

#endif