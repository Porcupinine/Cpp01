/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/09 10:51:45 by laura         #+#    #+#                 */
/*   Updated: 2023/11/09 10:51:45 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP01_ZOMBIE_H
#define CPP01_ZOMBIE_H

#include <string>

class Zombie {
	private:
		std::string name;
	public:
		void	anounce();
		void	get_name(std::string name);

};

Zombie* zombieHorde(int N, const std::string& name);
Zombie* funZombieHorde(int N);

#endif //CPP01_ZOMBIE_H
