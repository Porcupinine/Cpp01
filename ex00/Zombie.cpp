/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/09 10:53:30 by laura         #+#    #+#                 */
/*   Updated: 2023/11/09 10:53:30 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <utility>
#include "Zombie.h"

void	Zombie::anounce() {
	std::cout<<name<<": BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::get_name(std::string new_name) {
	name = std::move(new_name);
}

Zombie::Zombie() {
//	std::cout<<"Zombie risen\n";
}

Zombie::~Zombie() {
	std::cout<<name<<" was head shot\n";
}




