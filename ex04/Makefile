NAME		=	replace

SRCS		=	main.cpp	Replace.cpp

HDRS		=	Replace.hpp

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
				rm -rf *.replace

re			:	fclean all

run			:
				./${NAME} Makefile N NN
				./${NAME} Makefile.replace NN N

git			:	${SRCS}
				git add $^
				git add Makefile
