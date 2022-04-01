#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): _name(ClapTrap::_name)
{
	ClapTrap::_name += "_clap_name";
	_energy = 50;
	std::cout << GREEN;
	std::cout << "DiamondTrap default constructor (" << _name << ") called" << std::endl;
	std::cout << RESET;
}

DiamondTrap::DiamondTrap(const DiamondTrap& rhs): ClapTrap(rhs), ScavTrap(rhs), FragTrap(rhs), _name(rhs._name)
{
	std::cout << GREEN;
	std::cout << "DiamondTrap copy constructor (" << _name << ") called" << std::endl;
	std::cout << RESET;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	_energy = 50;
	std::cout << GREEN;
	std::cout << "DiamondTrap string constructor (" << _name << ") called" << std::endl;
	std::cout << RESET;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << PURPLE;
	std::cout << "DiamondTrap destructor (" << _name << ") called" << std::endl;
	std::cout << RESET;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const& rhs)
{
	ScavTrap::operator=(rhs);
	_name = rhs._name;
	std::cout << CYAN;
	std::cout << "DiamondTrap operator = (" << _name << ") called" << std::endl;
	std::cout << RESET;
	return (*this);
}

void	DiamondTrap::whoAmI(void) const
{
	std::cout << YELLOW;
	std::cout << "This DiamondTrap name is " << _name << " and This ClapTrap name is " << ClapTrap::_name << std::endl;
	std::cout << RESET;
}