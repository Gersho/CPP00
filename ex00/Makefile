SRCS		= megaphone.cpp


OBJS			= $(SRCS:.cpp=.o)

NAME			= megaphone
CC				= clang++
RM				= rm -f
CFLAGS			= --std=c++98 -Wall -Wextra -Werror

all:			$(NAME)

%.o: 			%.cpp
				$(CC) $(CFLAGS) -c $< -o $@

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:			
				$(RM) $(OBJS)

fclean:			clean
				$(RM) megaphone

re:			fclean all

.PHONY:		re fclean clean all