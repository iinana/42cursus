CC = cc
FLAGS = -Wall -Wextra -Werror
INCLUDE = -I.
OBJS = ctype_is.o ctype_to.o string_basic.o string_chr.o string_mem.o strings.o test.o
TARGET = test

all : $(TARGET)

$(OBJS) : %.o : %.c
	$(CC) $(FLAGS) $(INCLUDE) -c $^ -o $@

$(TARGET) : $(OBJS)
	$(CC) $^ -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re