/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/10 13:13:08 by laura         #+#    #+#                 */
/*   Updated: 2023/11/10 13:13:08 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.h"
#include <iostream>
#include <utility>

HumanB::HumanB(std::string b_name) : m_name(std::move(b_name)), m_weapon(nullptr) {
}

void HumanB::attack() {
	if (m_weapon == nullptr)
		std::cout<< m_name << "attacks with their barehands\n";
	else
		std::cout << m_name << "attacks with their " << m_weapon->getType() << "\n";
}

void HumanB::setWeapon(Weapon& new_weapon) {
	m_weapon = &new_weapon;
}