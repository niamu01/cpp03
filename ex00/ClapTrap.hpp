#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

# define CYAN "\e[36m"
# define GREEN "\e[32m"
# define YELLOW "\e[33m"
# define RED "\e[31m"
# define RESET "\e[0m"

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(ClapTrap const & src);
		ClapTrap(std::string _name);
		~ClapTrap();

		ClapTrap &	operator=(ClapTrap const & src);

		void	attack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		
		unsigned int	getDamage(void) const;
	private:
		std::string		_name;
		unsigned int	_hit;
		unsigned int	_energy;
		unsigned int	_damage;
};

#endif