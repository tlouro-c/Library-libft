CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(INCLUDE_DIR)
NAME = libft.a

# Directories
INCLUDE_DIR = ./include
SRC_DIR = ./src
OBJ_DIR = ./obj

OCEAN_COLOR = "\033[1;36m" # Cyan

# Function to echo a formatted message with color
define echo_message
	@echo "$(2)$1\033[0m $3"
endef

# Recursively find all .c files in SRC_DIR and its subdirectories
SRC = $(wildcard $(SRC_DIR)/*.c) $(wildcard $(SRC_DIR)/*/*.c)
OBJ = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC))

all: $(NAME)

$(NAME): $(OBJ)
	$(call echo_message,"Building...", "$(OCEAN_COLOR)")
	@ar -rcs $@ $^
	$(call echo_message,"Library", "$(OCEAN_COLOR)", "created successfully!")

$(OBJ): | $(OBJ_DIR)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(@D)
	$(call echo_message,"Compiling", "$(OCEAN_COLOR)", "$<")
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(call echo_message,"Cleaning", "$(OCEAN_COLOR)", "up...")
	@rm -rf $(OBJ_DIR)
	$(call echo_message,"Clean", "$(OCEAN_COLOR)", "complete.")

fclean: clean
	$(call echo_message,"Removing", "$(OCEAN_COLOR)", "$(NAME)...")
	@rm -f $(NAME)
	$(call echo_message,"Remove", "$(OCEAN_COLOR)", "complete.")

re: fclean all

.PHONY: all clean fclean re
