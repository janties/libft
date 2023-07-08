#projemin ismi
NAME	=	libft.a

#derleyici + derleme ekleri 
# -I (include) Specifies a directory dir to search for included makefiles.
CC	=	gcc
CFLAGS	=	-Wall -Wextra -Werror
RM	=	rm -f

#.c uzantılı dosyalar
SRC	=	$(wildcard *.c)

#Object dosyaları
OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
			ar rcs $(NAME) $(OBJ)

clean:
			$(RM) $(OBJ) 

fclean:	clean
			$(RM) $(NAME)

re:	fclean $(NAME)

# Bir fonksiyon olarak görmesini sağlıyorum
# Aynı ada sahip bir dosyayla çakışmayı önlemek ve performansı artırmak için.
.PHONY: all clean fclean re