BUILD_FOLDER = ./
NAME = $(BUILD_FOLDER)collection_demo
CC  = gcc
CFLAGS = -W -Wall -Werror -Wpedantic

# Collection library static linkage
LIB_FOLDER =../
LIB_BIN_FOLDER =$(LIB_FOLDER)bin/
LIB_BUILD = make -C $(LIB_FOLDER)
LDFLAGS = -L$(LIB_BIN_FOLDER) $(LIB_BIN_FOLDER)collection_`uname -m`-`uname -s`.a

# Commands
RM  = rm -f

# Src files
SRCS = src/main.c
OBJS = $(SRCS:.c=.o)

$(NAME) : $(OBJS)
	$(LIB_BUILD)
	$(CC) $(CFLAGS) $(SRCS) $(LDFLAGS) -o $(NAME)

.PHONY : clean fclean run

all : $(NAME)

run :
	$(NAME)

clean  :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all
