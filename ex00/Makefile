NAME        = megaphone
#BONUS_NAME  = _bonus

CXX         = c++
CXXFLAGS    = -Wall -Wextra -Werror -O2 -g --MMD #-fsanitize=address -fno-omit-frame-pointer

SRC_DIR         = .
OBJ_DIR         = src_o
#SRC_BONUS_DIR   = src_bonus
#OBJ_BONUS_DIR   = src_bonus_o

SRC         = ./Account.cpp ./tests.cpp
OBJ         = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRC))
DEPS		= $(OBJ:.o=.d)

#SRC_BONUS   = $(wildcard $(SRC_BONUS_DIR)/*.cpp)
#OBJ_BONUS   = $(patsubst $(SRC_BONUS_DIR)/%.cpp, $(OBJ_BONUS_DIR)/%.o, $(SRC_BONUS))

# COLORS
CYAN    = \033[38;5;51m
PINK    = \033[38;5;211m
BLUE    = \033[38;5;27m
WHITE   = \033[38;5;15m

LBOR    = "▌│█║▌║▌║ "
RBOR    = " ║▌║▌║█│▌"

.PHONY: all clean fclean re bonus

all: $(NAME)
	@echo "$(CYAN)"
	@echo "\t⠀⠀⠀⠀⠀⣀⣤⡴⢀⣠⣤⣴⣶⡶⠿⠿⠿⠿⣿⣿⣶⣶⣦⣟⡶⢦⣄⡀⠀⠀⠀"
	@echo "\t⠀⠀⢀⣴⡿⠛⣡⡾⠛⢋⣩⡄⠀⠀⠀⠀⠀⠀⠀⠀⠶⣭⣙⠻⢿⣷⣌⢙⢷⣄⠀"
	@echo "\t⠀⣰⣿⠏⠌⣾⠋⢀⣴⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⢳⡄⠙⣿⡆⠀⢻⡆"
	@echo "\t⠀⢿⣿⡄⠀⢿⡄⠘⣷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡼⡣⣠⡿⠃⠀⣼⡇"
	@echo "\t⠀⠘⢿⣿⣦⣄⠙⠷⣬⣛⠷⣦⣤⣤⣀⣀⣀⣀⣤⣤⡴⠞⣫⣵⠾⠋⣁⣤⣾⠏⠀"
	@echo "\t⠀⠀⠀⠙⠿⣿⣿⣷⣶⣭⣍⣐⣀⣉⠉⠉⠉⠉⢁⣀⣀⣀⣤⣴⣶⡿⣿⡏⠀⠀⠀"
	@echo "\t⠀⠀⠀⠀⠀⢸⣿⡟⣿⣿⣿⣿⢿⣿⣿⣿⣿⣿⠿⠿⠿⠛⠛⠩⣁⣴⡿⠃⠀⠀⠀"
	@echo "\t⠀⠀⠀⠀⠀⠈⢿⣿⣮⣟⠿⣿⣿⣷⣶⣶⣶⣶⣶⣶⣶⣶⣾⠿⠟⠋⠀⠀⠀⠀⠀"
	@echo "\t⠀⠀⠀⠀⠀⢀⣾⠟⢿⣿⣿⣶⣭⣉⡉⠉⠉⠉⠩⢍⣩⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "\t⠀⠀⠀⠀⠀⠈⢿⣧⣄⠈⠉⠛⠻⠿⠿⠿⣿⣿⢿⡿⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "\t⠀⠀⠀⠀⠀⠀⣴⡿⠿⣿⣶⣤⣄⣀⣀⣀⣀⣀⣼⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "\t⠀⠀⠀⠀⠀⠀⠙⢿⣶⣦⣍⣉⡛⠛⠛⠛⠛⣻⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "\t⠀⠀⠀⠀⠀⠀⠀⠸⣿⣽⣛⡛⠿⠿⠿⠿⣿⡋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "\t⠀⠀⠀⠀⠀⠀⠀⠀⠈⢻⣿⣿⣿⠿⠿⠿⣯⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢿⣿⣟⣛⣛⣻⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠹⣿⣿⣿⣷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "\t Made By Turmoil! ⠙⡇"
	@echo "🎉 Build complete!"
	@echo "$(WHITE)"

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	@$(CXX) $(CXXFLAGS) -c $< -o $@

-include $(DEPS)

$(OBJ_DIR):
	@mkdir -p $@

clean:
	@echo "\n\t   $(PINK)$(LBOR)Cleaning$(RBOR)$(WHITE)\n"
	@rm -rf $(OBJ_DIR) $(OBJ_BONUS_DIR) $(DEPS)

fclean: clean
	@echo "\n\t   $(CYAN)$(LBOR)Clean af$(RBOR)$(WHITE)\n"
	@rm -f $(NAME) $(BONUS_NAME) screenshot.bmp

re:
	@echo "\n\t$(BLUE)$(LBOR)Awwwww shiiiiiit$(RBOR)$(WHITE)\n"
	@echo "\n\t$(BLUE)$(LBOR)Here we go again$(RBOR)$(WHITE)\n"
	@$(MAKE) fclean
	@$(MAKE) all

