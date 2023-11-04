NAME = libft.a
SRCS = ft_atoi.c \
		ft_bzero.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isalpha.c \
		ft_isprint.c \
		ft_strjoin.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putnbr_fd.c 

BONUS = ft_lstnew_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstsize_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstiter_bonus.c \
		ft_lstmap_bonus.c

OBJS = $(SRCS:.c=.o)

BOBJS = $(BONUS:.c=.o)

GCC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(BOBJS)
	ar rcs $(NAME) $(BOBJS)

all: $(NAME)
run: $(NAME)
clean:
	$(RM) $(OBJS) $(BOBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean $(NAME)
.PHONY: all clean fclean re bonus