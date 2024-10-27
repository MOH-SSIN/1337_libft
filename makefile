NAME = libft.a
SRCS =  ft_split.c  ft_strchr.c ft_strtrim.c ft_substr.c ft_memmove.c ft_strlen.c  ft_strrchr.c ft_bzero.c ft_strdup.c ft_calloc.c\
		ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_memcpy.c ft_memcmp.c ft_strlcpy.c ft_strlcat.c\
		ft_strncmp.c ft_strnstr.c ft_memset.c ft_atoi.c ft_strjoin.c ft_split.c ft_itoa.c \
		ft_strmapi.c ft_striteri.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putchar_fd.c ft_memchr.c\

BSRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c\


OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(BSRCS:.c=.o)
HEADER = libft.h
OBJS_DIR = libft_dir
LIBC = ar rc
CC = cc
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)

bonus: $(OBJS) ${OBJS_BONUS}
	${LIBC} ${NAME} $(OBJS) ${OBJS_BONUS}

%.o:%.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) ${OBJS_BONUS}
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all