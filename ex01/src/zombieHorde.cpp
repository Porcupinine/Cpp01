/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/09 12:40:01 by laura         #+#    #+#                 */
/*   Updated: 2023/11/09 12:40:01 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.h"

Zombie* zombieHorde(int N, const std::string& name) {
	auto *horde = new Zombie[N];
	for (int x = 0; x < N; x++) {
		horde[x].set_name(name);
		horde->announce();
	}
	return horde;
}

//Zombie* funZombieHorde(int N) {
//	std::string names[28] = {"Zumbi dos Palmares", "Fleshy", "Brainy",
//							 "Chompzilla", "Grin Reaper", "Cranium Cruncher",
//							 "Munchkin Mort", "Chuck", "McBite", "Zombielicious",
//							 "Wacky Riser", "Jolly Ghoul ", "Resilient Wretch",
//							 "Invictus Mortem", "Astral Mortalis", "Animus Fidelis",
//							 "Sanctus Calamitas", "Sanguine Seraph", "Serene Exanimate",
//							 "Luminiferous Cadaver", "Frankstein", "Zombrosio", "Frankie",
//							 "Jack Skeleton", "Cadaverton", "Mortallica",
//							 "Zombert Einstein", "Alice",	};
//	for (int x = 0; x < N; x++) {
//		int y = rand()%N;
//		randomChump(names[y]);
//	}
//}