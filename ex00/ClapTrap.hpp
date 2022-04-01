#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

# define RESET "\e[0m"
# define GREEN "\e[32m"
# define YELLOW "\e[33m"
# define PURPLE "\e[35m"

class ClapTrap {
public:
	ClapTrap();
	ClapTrap(std::string _name);
	ClapTrap(ClapTrap const & rhs);
	~ClapTrap();

	ClapTrap &	operator=(ClapTrap const & rhs);

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