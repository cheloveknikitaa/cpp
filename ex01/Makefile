NAME		=	phone_book

SRCS		=	contact.cpp main.cpp phone_book.cpp

CPPFLAGS	=	-Wall -Wextra -Werror -I. -std=c++98 -g

CXX			=	clang++

OBJS		=	${SRCS:.cpp=.o}

.PHONY		:	all clean fclean re

all			:	${NAME}

${NAME}		:	${OBJS}
				${CXX} ${CPPFLAGS} -o $@ $^

clean		:
				rm -rf ${OBJS}

fclean		:	clean
				rm -rf ${NAME}

re			:	fclean all
