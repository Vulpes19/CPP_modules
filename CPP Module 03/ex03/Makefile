TARGET = DiamondTrap

FILES = main.cpp DiamondTrap.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

OBJS = $(FILES:%.cpp=%.o)

FLAGS = -Wshadow -Wno-shadow -std=c++98 -Wall -Wextra -Werror

INCLUDE = include/

DEL = rm -f

all: $(TARGET)

%.o: %.cpp
	c++ $(FLAGS) -c -I $(INCLUDE) $< -o $@

$(TARGET): $(OBJS) $(INCLUDE)
	c++ $(FLAGS) $(OBJS) -o $(TARGET)

re: fclean all

clean:
	$(DEL) $(OBJS)

fclean:	clean
	$(DEL) $(TARGET)

.PHONY: clean fclean re all