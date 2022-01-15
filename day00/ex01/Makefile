# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sameye <sameye@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/14 13:02:07 by sameye            #+#    #+#              #
#    Updated: 2022/01/15 01:45:05 by sameye           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= phonebook

SRCS	:= phonebook.cpp Contact.class.cpp Phonebook.class.cpp
OBJS	:= $(SRCS:.cpp=.o)

CXX	:= g++
CXXFLAGS := -Wall -Werror -Wextra

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

.PHONY: all clean fclean format re
