# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/04 10:47:01 by tmaillar          #+#    #+#              #
#    Updated: 2024/06/04 10:49:06 by tmaillar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		:= firstUtilClass

CCPP		:= c++
CXXFLAGS 	:= -std=c++98 -g -Wall -Wextra -Werror
CPPFLAGS	+= -I./include
CPPFLAGS	+= -MMD -MP -MF $(@:.o=.d)

SRC_DIR		:= ./src
OBJ_DIR		:= ./obj

ROOT_SRC	:= main.cpp \
				Fixed.cpp 

ROOT_DIR	:= $(SRC_DIR)
ROOT_OBJ	:= $(addprefix $(OBJ_DIR)/, $(ROOT_SRC:.cpp=.o))

SRC			:= $(ROOT_SRC)

OBJ			:= $(ROOT_OBJ)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(@D)
	@$(CCPP) $(CXXFLAGS) $(CPPFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJ)
	@echo "$(YELLOW) Compiling $(NAME) $(CPPFLAGS) ...$(END)"
	@echo "$(GREEN) $(NAME) compiled successfully.$(END)"
	@echo "$(YELLOW) Building $(NAME) ...$(END)" 
	@$(CCPP) $(OBJ) -o $(NAME)
	@echo "$(GREEN) $(NAME) built successfully. $(END)"

clean:
	@echo "$(YELLOW) Cleaning object files and dependencies...$(END)"
	@rm -rf $(OBJ_DIR)
	@echo "$(GREEN) Clean complete.$(END)"

fclean: clean
	@echo "$(YELLOW) Cleaning object files, dependencies and removing $(NAME)...$(END)"
	@rm -rf $(NAME)
	@echo "$(GREEN) Full clean complete.$(END)"


re: fclean
	@$(MAKE) --no-print-directory all


YELLOW=\033[0;33m
GREEN=\033[0;32m
END=\033[0m

.PHONY:	all clean fclean re 

-include $(OBJ:.o=.d)