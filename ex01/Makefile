# Program name
NAME    	= phonebook

# Compiler options
CXX     = g++ 
CFLAGS  = -Wall -Wextra -Werror -std=c++98

DIR_OBJ = obj/

# Colors
RESET_COLOR = \033[0m
BOLD = \033[1m
GREEN = \033[92m
BLUE = \033[94m

SRCS  = Contact_class.cpp \
		PhoneBook_class.cpp \
		main.cpp


OBJ = $(patsubst %.cpp,$(DIR_OBJ)%.o,$(SRCS))

# Compiling project
$(NAME): $(OBJ)
		@echo "$(BOLD)$(BLUE)🛠️ 🚧     Compiling project...     🚧🛠️$(RESET_COLOR)"
		@echo "\n"
		@$(CXX) $(CFLAGS) -o $(NAME) $(OBJ)
		@echo "$(BOLD)$(GREEN)📞📓   PhoneBook ready to use   📓📞$(RESET_COLOR)"

$(DIR_OBJ):
	@mkdir -p $(DIR_OBJ)

$(DIR_OBJ)%.o: %.cpp | $(DIR_OBJ)
	@$(CXX) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
		@echo "$(BOLD)$(BLUE)🧹🧼     Cleaning .o ...     🧼🧹$(RESET_COLOR)"
		@rm -rf $(DIR_OBJ)

fclean: clean
		@rm -rf $(NAME)
		@echo "\n"
		@echo "$(BOLD)$(GREEN)🧹🧼     Cleaning finished     🧼🧹$(RESET_COLOR)"

re: fclean all

.PHONY: all clean fclean re
