# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sameye <sameye@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/14 13:02:07 by sameye            #+#    #+#              #
#    Updated: 2022/02/10 15:51:42 by sameye           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= Bureaucrat

SRCS	:= main.cpp Bureaucrat.cpp Form.cpp

CXX	:= c++
CXXFLAGS := -Wall -Werror -Wextra -std=c++98

OBJS	:= $(SRCS:.cpp=.o)

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
