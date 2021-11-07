NAME		=	a.out

SRCS		=	Form.cpp Bureaucrat.cpp main.cpp PresidentialPardonForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp Intern.cpp

HDRS		=	Form.hpp Bureaucrat.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp

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
				rm -rf *_shrubbery
				rm -rf ${NAME}

re			:	fclean all

run			:
				./${NAME}

git			:	${SRCS} ${HDRS}
				git add $^
				git add Makefile
