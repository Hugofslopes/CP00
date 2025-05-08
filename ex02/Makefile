# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/22 14:55:18 by hfilipe-          #+#    #+#              #
#    Updated: 2025/05/08 14:13:34 by hfilipe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror
STD98 = -std=c++98
CXX = c++
INCLUDES = -I includes
SRC_DIR = src
OBJ_DIR = obj
SRC = Account.cpp tests.cpp 
SRCS = $(addprefix $(SRC_DIR)/, $(SRC))
OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRCS))
NAME = Account
DEPS = $(OBJS:.o=.d)

all: $(NAME)
$(NAME): $(OBJS)
	$(CXX) $(FLAGS) $(STD98) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(FLAGS) $(STD98) $(INCLUDES) -c $< -o $@

-include $(DEPS)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all