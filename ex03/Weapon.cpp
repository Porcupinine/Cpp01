/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/10 13:20:57 by laura         #+#    #+#                 */
/*   Updated: 2023/11/10 13:20:57 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

#include <utility>

Weapon::Weapon(std::string type) : m_type(std::move(type)) {
}

std::string Weapon::getType() {
	return m_type;
}

void Weapon::setType(std::string weapon_type) {
	m_type = std::move(weapon_type);
}
