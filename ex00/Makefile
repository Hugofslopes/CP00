# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/22 14:55:18 by hfilipe-          #+#    #+#              #
#    Updated: 2025/05/08 14:13:36 by hfilipe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror
STD98 = -std=c++98
C++ = c++
SRC = megaphone.cpp
OBJT = $(SRC:.cpp=.o)
NAME = megaphone

all: $(NAME)

$(NAME):$(OBJT)
	$(C++) $(FLAGS) $(OBJT) -o $(NAME) 

%.o: %.cpp
	$(C++) $(FLAGS) $(STD98) -c $< -o $@

clean:
	rm -f $(OBJT)

fclean: clean
	rm -f $(NAME)

re: fclean all