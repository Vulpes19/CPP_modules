TARGET = megaphone

FILES = main.cpp

OBJS = $(FILES:%.cpp=%.o)

FLAGS = -std=c++98 -Wall -Wextra -Werror

INCLUDE = include/

DEL = rm -f

all: $(TARGET)

%.o: %.cpp
	c++ $(FLAGS) -c $< -o $@

$(TARGET): $(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(TARGET)

re: fclean all

clean:
	$(DEL) $(OBJS)

fclean:	clean
	$(DEL) $(TARGET)

.PHONY: clean fclean re all