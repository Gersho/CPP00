SRCS		= Contact.cpp Phonebook.cpp main.cpp


OBJS			= $(addprefix objs/, $(SRCS:.cpp=.o))

DEPS			= $(addprefix deps/, $(SRCS:.cpp=.d))

NAME			= phonebook
CC				= clang++
CFLAGS			= --std=c++98 -Wall -Wextra -Werror

all:			$(NAME)

deps/%.d:			%.cpp
				@mkdir -p $(dir $@)
				$(CC) $(CFLAGS) -MM -MG -MT $(@:%.d=%.o) $< -o $@

objs/%.o: 			%.cpp	deps/%.d
				@mkdir -p $(dir $@)
				$(CC) $(CFLAGS) -c $< -o $@

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:			
				$(RM) $(OBJS)
				$(RM) $(DEPS)
				rm -rf objs/ deps/

fclean:			clean
				$(RM) $(NAME)

re:			fclean all

.PHONY:		re fclean clean all

-include $(DEPS)