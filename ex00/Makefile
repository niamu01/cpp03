NAME = ClapTrap
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror
C98 = -std=c++98
SRCS = main.cpp ClapTrap.cpp
OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

$(NAME) : $(SRCS)
	$(CXX) $(CXXFLAGS) $(C98) -c $(SRCS)
	$(CXX) $(CXXFLAGS) $(C98) $(OBJS) -o $(NAME)

.PHONY : all clean fclean re