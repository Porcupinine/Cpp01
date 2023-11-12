/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/10 13:08:34 by laura         #+#    #+#                 */
/*   Updated: 2023/11/10 13:08:34 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP01_HUMANA_H
#define CPP01_HUMANA_H

#include <string>
#include "Weapon.h"

class HumanA {
	private:
		std::string	m_name;
		Weapon&		m_weapon;
	public:
		HumanA(std::string a_name, Weapon& weapon);
		~HumanA() = default;
		void attack();
};

#endif //CPP01_HUMANA_H
