#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a("a");
	ClapTrap	b("b");
	ClapTrap	c;
	ClapTrap	d(c);
	c=d;

	std::cout << std::endl;
	a.attack("b");
	std::cout << std::endl;
	b.takeDamage(a.getDamage());
	std::cout << std::endl;
	b.attack("a");
	std::cout << std::endl;
	a.takeDamage(b.getDamage());
	std::cout << std::endl;
	c.attack("b");
	std::cout << std::endl;
	b.takeDamage(c.getDamage());
	std::cout << std::endl;
	a.beRepaired(3);
	std::cout << std::endl;
	return (0);
}