/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 16:13:13 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/03 10:46:43 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie {
	private:

		std::string _name;

	public:

		Zombie( std::string name );
		~Zombie( void );

		void		announce( void );

};

void	randomChump( std::string name );
Zombie*	newZombie( std::string name );

#endif