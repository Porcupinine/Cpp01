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
#include "../includes/Zombie.h"

void	Zombie::announce() {
	std::cout<<name<<": BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie() {
	std::cout<<"Zombie risen\n";
}

Zombie::~Zombie() {
	std::cout<<name<<" was head shot\n";
}

Zombie::Zombie(std::string new_name) :name(std::move(new_name)) {

}

void Zombie::set_name(std::string new_name) {
	name = std::move(new_name);
}
