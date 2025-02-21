NAME = pushswap.a

SRC = addnode.c \
      ft_atoi.c \
      num_cnt.c \
      opreater.c \
      parsing.c \
      push_swap.c \
      radixsort.c \
      roper.c \
      split.c \
      utils.c

PRINTF_SRC = $(wildcard printf/*.c)

INCLUDES = push_swap.h
PRINTF_INCLUDES = printf.a/ft_printf.h

OBJ = $(SRC:.c=.o)
PRINTF_OBJ = $(PRINTF_SRC:.c=.o)

AR = ar
ARFLAG = crs
CC = cc
CFLAGS = -Wall -Wextra -Werror -I. -Iprintf

all: $(NAME)

$(NAME): $(OBJ) $(PRINTF_OBJ)
	$(AR) $(ARFLAG) $(NAME) $^

%.o: %.c $(INCLUDES) $(PRINTF_INCLUDES)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ) $(PRINTF_OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f bonus

re: fclean all

.PHONY: all clean fclean re

