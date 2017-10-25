CC = gcc
S_NAME = bin/collection_`uname -m`-`uname -s`.a
D_NAME = bin/collection_`uname -m`-`uname -s`.so
CFLAGS = -Wall -Werror -Wpedantic
RM = rm -f
AR = ar r
RANLIB = ranlib

SRCS = src/string/c_putstr.c\
src/string/c_strlen.c\
src/list/c_list_control.c\
src/list/c_list_size.c\
src/list/c_list_manage.c\
src/list/c_list_iter.c
OBJS = $(SRCS:.c=.o)

all : $(S_NAME)

$(S_NAME) : collection_static collection_dynamic

collection_static : $(OBJS)
	$(AR) $(S_NAME) $(OBJS)
	$(RANLIB) $(S_NAME)

collection_dynamic :
	$(CC) -fPIC $(CFLAGS) -shared -o $(D_NAME) $(SRCS)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(S_NAME) $(D_NAME)

re : fclean all

.PHONY : clean fclean re collection_static collection_dynamic
