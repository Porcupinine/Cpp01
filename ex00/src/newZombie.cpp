/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   newZombie.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/09 10:57:25 by laura         #+#    #+#                 */
/*   Updated: 2023/11/09 10:57:25 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.h"

#include <utility>

Zombie* newZombie( std::string name)  {
	auto *new_zombie = new Zombie(std::move(name));
	return new_zombie;
}
