#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	a("a");
	ScavTrap	b("b");

	std::cout << std::endl;
	
	a.attack("b");
	b.takeDamage(a.getDamage());
	
	std::cout << std::endl;
	
	b.attack("a");
	a.takeDamage(b.getDamage());
	
	std::cout << std::endl;
	
	a.attack("b");
	b.takeDamage(a.getDamage());
	
	std::cout << std::endl;
	
	b.attack("a");
	a.takeDamage(b.getDamage());
	
	std::cout << std::endl;
	
	b.guardGuate();
	
	std::cout << std::endl;
	return (0);
}