cmake_minimum_required(VERSION 3.26)
project(Cpp01)

set(CMAKE_CXX_STANDARD 11)
#set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -D_GLIBCXX_DEBUG")
add_compile_options(-fsanitize=address -fsanitize=leak -g3)
add_link_options(-fsanitize=address -fsanitize=leak)


add_executable(Brainz ex00/src/main.cpp
		ex00/src/Zombie.cpp
		ex00/includes/Zombie.h
		ex00/src/newZombie.cpp
		ex00/src/randomChump.cpp)

add_executable(Horde ex01/src/main.cpp
		ex01/src/Zombie.cpp
		ex01/includes/Zombie.h
		ex01/src/zombieHorde.cpp)

add_executable(Hi ex02/main.cpp)

add_executable(Violence ex03/src/main.cpp
		ex03/src/Weapon.cpp
		ex03/includes/Weapon.h
		ex03/src/HumanA.cpp
		ex03/includes/HumanA.h
		ex03/src/HumanB.cpp
		ex03/includes/HumanB.h)

add_executable(Sed ex04/main.cpp)

add_executable(Harl ex05/main.cpp
		ex05/Harl.cpp
		ex05/Harl.h)

add_executable(Harl_felter ex06/main.cpp
		ex06/Harl.cpp
		ex06/main.cpp)