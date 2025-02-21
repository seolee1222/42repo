NAME = libftprintf.a

SRC = ft_hexpr.c \
ft_ptrpr.c \
ft_printf.c \
ft_unputnbr_fd.c \
ft_putstr_fd.c \
ft_putnbr_fd.c \
ft_putchar_fd.c \

INCLUDES = printf.h

OBJ = $(SRC:.c=.o)

AR = ar
ARFLAG = crs
CC = cc
CFLAGS = -Wall -Wextra -Werror -I.

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAG) $(NAME) $^

%.o: %.c $(INCLUDES)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f bonus

re: fclean all

.PHONY: all clean fclean re

