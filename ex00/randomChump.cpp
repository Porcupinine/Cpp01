/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   randomChump.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/09 11:07:42 by laura         #+#    #+#                 */
/*   Updated: 2023/11/09 11:07:42 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <utility>
#include "Zombie.h"

void randomChump(std::string name) {
	Zombie new_zombie;
	new_zombie.get_name(std::move(name));
	new_zombie.anounce();
}
