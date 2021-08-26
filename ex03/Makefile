NAME		=	club

SRCS		=	main.cpp	Weapon.cpp	HumanA.cpp	HumanB.cpp

HDRS		=	Weapon.hpp	HumanA.hpp	HumanB.hpp

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98 -I.

CXX			=	clang++

OBJS		=	${SRCS:.cpp=.o}

.PHONY		:	all clean fclean re run git

all			:	${NAME} run

${OBJS}		:	${HDRS}

${NAME}		:	${OBJS}
				${CXX} ${CPPFLAGS} -o $@ $^

clean		:
				rm -rf ${OBJS}

fclean		:	clean
				rm -rf ${NAME}

re			:	fclean all

run			:
				./${NAME}

git			:	${SRCS} ${HDRS}
				git add $^
				git add Makefile
