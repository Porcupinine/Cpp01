cmake_minimum_required(VERSION 3.26)
project(Cpp01)

set(CMAKE_CXX_STANDARD 11)
#set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -D_GLIBCXX_DEBUG")
#add_compile_options(-fsanitize=address -fsanitize=leak -g3)
#add_link_options(-fsanitize=address -fsanitize=leak)


add_executable(Brainz ex00/main.cpp
		ex00/Zombie.cpp
		ex00/Zombie.h
		ex00/newZombie.cpp
		ex00/randomChump.cpp)

add_executable(Horde ex01/main.cpp
		ex01/Zombie.cpp
		ex01/Zombie.h
		ex01/zombieHorde.cpp)

add_executable(Hi ex02/main.cpp)

add_executable(Violence ex03/main.cpp
		ex03/Weapon.cpp
		ex03/Weapon.h
		ex03/HumanA.cpp
		ex03/HumanA.h
		ex03/HumanB.cpp
		ex03/HumanB.h)

add_executable(Sed ex04/main.cpp)

add_executable(Harl ex05/main.cpp
		ex05/Harl.cpp
		ex05/Harl.h)

add_executable(Harl_felter ex06/main.cpp
		ex06/Harl.cpp
		ex06/main.cpp)