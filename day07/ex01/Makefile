# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sameye <sameye@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/14 13:02:07 by sameye            #+#    #+#              #
#    Updated: 2022/02/22 16:25:46 by sameye           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= iter

SRCS	:= main.cpp
OBJS	:= $(SRCS:.cpp=.o)

CXX	:= clang++
CXXFLAGS := -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(OBJS) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
