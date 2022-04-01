#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include <string>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	public:
		DiamondTrap();
		DiamondTrap(DiamondTrap const& src);
		DiamondTrap(std::string name);
		~DiamondTrap();

		DiamondTrap&	operator=(DiamondTrap const& src);

		void			whoAmI(void) const;
		using			ScavTrap::attack;
		using			ScavTrap::_energy;
		//using			
	private:
		std::string		_name;
};

#endif