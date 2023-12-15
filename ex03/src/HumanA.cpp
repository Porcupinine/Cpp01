/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/10 13:16:56 by laura         #+#    #+#                 */
/*   Updated: 2023/11/10 13:16:56 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.h"
#include <iostream>
#include <utility>

HumanA::HumanA(std::string a_name, Weapon& weapon) : m_name(std::move(a_name)), m_weapon(weapon) {
}

void HumanA::attack() {
	std::cout << m_name << " attacks with their " << m_weapon.getType() << "\n";
}