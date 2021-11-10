NAME		=	a.out

SRCS		=	main.cpp Span.cpp

HDRS		=	Span.hpp

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98 -I.

CXX			=	clang++

OBJS		=	${SRCS:.cpp=.o}

Black=\033[0;30m
Color_Off=\033[0m
Green=\033[0;32m

.PHONY		:	all clean fclean re git run

all			:	${NAME} run

${OBJS}		:	${HDRS}

${NAME}		:	${OBJS}
				${CXX} ${CPPFLAGS} -o $@ $^
				@echo "${Green}⡴⠑⡄${Black}⠀⠀⠀⠀⠀⠀⠀ ${Green}⣀⣀⣤⣤⣤⣀⡀"
				@echo "⠸⡇⠀⠿⡀${Black}⠀⠀⠀${Green}⣀⡴⢿⣿⣿⣿⣿⣿⣿⣿⣷⣦⡀"
				@echo "${Black}⠀⠀${Green}⠀⠀⠑⢄⣠⠾⠁⣀⣄⡈⠙⣿⣿⣿⣿⣿⣿⣿⣿⣆"
				@echo "${Black}⠀⠀⠀⠀${Green}⢀⡀⠁⠀⠀⠈⠙⠛⠂⠈⣿⣿⣿⣿⣿⠿⡿⢿⣆"
				@echo "${Black}⠀⠀⠀${Green}⢀⡾⣁⣀⠀⠴⠂⠙⣗⡀⠀⢻⣿⣿⠭⢤⣴⣦⣤⣹${Black}⠀⠀⠀${Green}⢀⢴⣶⣆"
				@echo "${Black}⠀⠀${Green}⢀⣾⣿⣿⣿⣷⣮⣽⣾⣿⣥⣴⣿⣿⡿⢂⠔⢚⡿⢿⣿⣦⣴⣾⠸⣼⡿"
				@echo "${Black}⠀${Green}⢀⡞⠁⠙⠻⠿⠟⠉⠀⠛⢹⣿⣿⣿⣿⣿⣌⢤⣼⣿⣾⣿⡟⠉"
				@echo "⠀⣾⣷⣶⠇⠀⠀⣤⣄⣀⡀⠈⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇"
				@echo "⠀⠉⠈⠉⠀⠀⢦⡈⢻⣿⣿⣿⣶⣶⣶⣶⣤⣽⡹⣿⣿⣿⣿⡇"
				@echo "⠀⠀⠀⠀⠀⠀⠀⠉⠲⣽⡻⢿⣿⣿⣿⣿⣿⣿⣷⣜⣿⣿⣿⡇"
				@echo "⠀⠀ ⠀⠀⠀⠀⠀⢸⣿⣿⣷⣶⣮⣭⣽⣿⣿⣿⣿⣿⣿⣿⠇"
				@echo "⠀⠀⠀⠀⠀⠀⣀⣀⣈⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇"
				@echo "⠀⠀⠀⠀⠀⠀⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃${Color_Off}"

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
