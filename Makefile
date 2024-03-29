FLAGS = -Wall -Wextra -Werror -std=c99
FILES = ft_atoi.c \
ft_bzero.c \
ft_calloc.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_itoa.c \
ft_memchr.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memmove.c \
ft_memset.c \
ft_putchar_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_putstr_fd.c \
ft_split.c \
ft_strchr.c \
ft_strdup.c \
ft_striteri.c \
ft_strjoin.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_strlen.c \
ft_strmapi.c \
ft_strncmp.c \
ft_strnstr.c \
ft_strtrim.c \
ft_substr.c \
ft_tolower.c \
ft_strrchr.c \
ft_toupper.c

BONUS = ft_lstadd_back.c\
ft_lstadd_front.c\
ft_lstclear.c\
ft_lstdelone.c\
ft_lstlast.c\
ft_lstnew.c\
ft_lstsize.c\
ft_lstiter.c\
ft_lstmap.c

OBJS = $(FILES:.c=.o)
BONUSOBJS = $(BONUS:.c=.o)

NAME = libft.a
HEADER = libft.h

all: $(NAME) 

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o:%.c $(HEADER) -I
	cc $(FLAGS) -c $< -o $@ 

%.o:%.c $(BONUS) $(HEADER) -I
	cc $(FLAGS) -c $< -o $@ $(HEADER) -I

clean: 
	rm -f $(OBJS) $(BONUSOBJS)

bonus: $(BONUSOBJS) $(FILES)
	ar rcs $(NAME) $(BONUSOBJS) $(FILES)

fclean:clean
	rm -f $(NAME)

re:fclean all

.PHONY : all $(NAME) clean fclean re bonus