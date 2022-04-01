#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "../ex00/ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(ScavTrap const& src);
		ScavTrap(std::string name);
		~ScavTrap();

		ScavTrap&	operator=(ScavTrap const& src);
		
		void		attack(std::string const& target);
		void		guardGuate(void);
	protected:
		bool		_guard_mode;
};

#endif