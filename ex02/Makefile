SRCS		= Account.cpp tests.cpp

OBJS			= $(SRCS:.cpp=.o)

NAME			= account
CC				= clang++
RM				= rm -f
CFLAGS			= --std=c++98 -Wall -Wextra -Werror

all:			$(NAME)

%.o: 			%.cpp Account.hpp
				$(CC) $(CFLAGS) -c $< -o $@

$(NAME):		$(OBJS) Account.hpp
				$(CC) $(CFLAGS) -IAccount.hpp -o $(NAME) $(OBJS)

clean:			
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:			fclean all

.PHONY:		re fclean clean all