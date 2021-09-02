NAME		=	a.out

SRCS		=	main.cpp	Dog.cpp	Animal.cpp	Cat.cpp WrongDog.cpp	WrongAnimal.cpp	WrongCat.cpp

HDRS		=	Dog.hpp	Animal.hpp	Cat.hpp	WrongDog.hpp	WrongAnimal.hpp	WrongCat.hpp

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98 -I. -Wshadow -Wno-shadow

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

re			:	fclean all

run			:
				./${NAME}

git			:	${SRCS} ${HDRS}
				git add $^
				git add Makefile
