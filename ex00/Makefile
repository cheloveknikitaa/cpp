NAME		=	zombie

SRCS		=	main.cpp	Zombie.cpp	newZombie.cpp	randomChump.cpp

HDRS		=	Zombie.hpp

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98 -I.

CXX			=	clang++

OBJS		=	${SRCS:.cpp=.o}

.PHONY		:	all clean fclean re

all			:	${NAME}

${OBJS}		:	${HDRS}

${NAME}		:	${OBJS}
				${CXX} ${CPPFLAGS} -o $@ $^

clean		:
				rm -rf ${OBJS}

fclean		:	clean
				rm -rf ${NAME}

re			:	fclean all
