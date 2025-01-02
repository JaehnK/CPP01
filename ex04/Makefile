C++ = c++
CPP_FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	main.cpp \
		file.cpp \
		replace.cpp \


HEADR =  ex04.hpp \
		
OBJS = $(SRCS:.cpp=.o)

NAME = ex04

all: $(NAME)

$(NAME):$(OBJS)
		$(C++) $(CPP_FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
		$(C++) $(CPP_FLAGS) -c $< -o $@

clean:
		rm -f $(OBJS)

fclean:
		make clean
		rm -f $(NAME)

re:
	make fclean
	make all

.PHONY: all clean fclean re
 