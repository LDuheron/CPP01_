/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 16:13:13 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/03 16:06:18 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>
#include "Weapon.hpp"

class Weapon {
	private:

		std::string type;

	public:
		Weapon( std::string str );
		~Weapon( void );

		const std::string &	 getType( void );
		void		setType( std::string newType );
};

#endif