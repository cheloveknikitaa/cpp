NAME		=	phone_book

SRCS		=	contact.cpp main.cpp phone_book.cpp

CPPFLAGS	=	-Wall -Wextra -Werror -I. -std=c++98

HDRS		=	contact.hpp	phone_book.hpp	header.hpp

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
