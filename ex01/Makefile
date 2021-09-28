SRCS		= Contact.cpp Phonebook.cpp main.cpp


OBJS			= $(SRCS:.cpp=.o)

NAME			= phonebook
CC				= clang++
RM				= rm -f
CFLAGS			= --std=c++98 -Wall -Wextra -Werror

all:			$(NAME)

%.o: 			%.cpp	Contact.hpp Phonebook.hpp
				$(CC) $(CFLAGS) -c $< -o $@

$(NAME):		$(OBJS) Contact.hpp Phonebook.hpp
				$(CC) $(CFLAGS) -IContact.hpp -IPhonebook.hpp -o $(NAME) $(OBJS)

clean:			
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:			fclean all

.PHONY:		re fclean clean all