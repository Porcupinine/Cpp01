/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/10 13:08:55 by laura         #+#    #+#                 */
/*   Updated: 2023/11/10 13:08:55 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP01_HUMANB_H
#define CPP01_HUMANB_H

#include <string>
#include "Weapon.h"

class HumanB {
	private:
		std::string	m_name;
		Weapon*		m_weapon{};
	public:
		explicit HumanB(std::string b_name);
		~HumanB() = default;
		void attack();
		void setWeapon(Weapon& new_weapon);

};
#endif //CPP01_HUMANB_H
