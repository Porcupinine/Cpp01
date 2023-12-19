/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/10 13:05:13 by laura         #+#    #+#                 */
/*   Updated: 2023/11/10 13:05:13 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP01_WEAPON_H
#define CPP01_WEAPON_H

#include <string>

class Weapon {
	private:
		std::string m_type;
	public:
		 explicit Weapon(std::string type);
		~Weapon() = default;
		const std::string& getType();
		void setType(std::string weapon_type);
};

#endif //CPP01_WEAPON_H
