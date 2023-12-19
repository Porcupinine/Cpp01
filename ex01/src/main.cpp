/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/09 11:26:10 by laura         #+#    #+#                 */
/*   Updated: 2023/11/09 11:26:10 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Zombie.h"

int main() {
	Zombie *horde =	zombieHorde(25, "Zumbi dos Palmares");
	delete [] horde;
}
