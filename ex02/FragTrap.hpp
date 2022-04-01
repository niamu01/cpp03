class FragTrap : public ClapTrap {
	public:
		FragTrap();
		FragTrap( std::string name);
		~FragTrap();
		FragTrap&	operator=( FragTrap const& frag);
		void	highFivesGuys(void);
};