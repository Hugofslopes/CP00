# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/22 14:55:18 by hfilipe-          #+#    #+#              #
#    Updated: 2025/04/22 15:59:34 by hfilipe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror
STD98 = -std=c++98
C++ = c++
SRC = PhoneBook.cpp
OBJT = $(SRC:.cpp=.o)
NAME = PhoneBook

all: $(NAME)

$(NAME):$(OBJT)
	$(C++) $(FLAGS) $(OBJT) -o $(NAME) 

%.o: %.cpp
	$(C++) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJT)

fclean: clean
	rm -f $(NAME)

re: fclean all