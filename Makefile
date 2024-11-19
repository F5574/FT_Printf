SRCS = ft_printf.c function_aux.c

NAME = libftprintf.a

COMPRESS = ar rcs

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)

LIBFTDIR = ./libft

LIBFT = $(LIBFTDIR)libft.a

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	@$(COMPRESS) $(NAME) $(OBJS) libft/*.o

$(LIBFT):
	@$(MAKE) -C $(LIBFTDIR) --no-print-directory

clean:
	@$(RM) $(OBJS)
	@$(MAKE) -C $(LIBFTDIR) clean --no-print-directory

fclean: clean
	@$(RM) $(NAME) ft_printf
	@$(MAKE) -C $(LIBFTDIR) fclean --no-print-directory

re: fclean all

test:
	cc -o ft_printf $(CFLAGS) main.c $(NAME)

.PHONY: all fclean clean