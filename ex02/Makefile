NAME		=	a.out

SRCS		=	main.cpp	Fixed.cpp

HDRS		=	Fixed.hpp

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98 -I.

CXX			=	clang++

OBJS		=	${SRCS:.cpp=.o}

.PHONY		:	all clean fclean re git run

all			:	${NAME} run

${OBJS}		:	${HDRS}

${NAME}		:	${OBJS}
				${CXX} ${CPPFLAGS} -o $@ $^

clean		:
				rm -rf ${OBJS}

fclean		:	clean
				rm -rf ${NAME}
				rm -rf *.replace

re			:	fclean all

run			:
				./${NAME}

git			:	${SRCS} ${HDRS}
				git add $^
				git add Makefile
