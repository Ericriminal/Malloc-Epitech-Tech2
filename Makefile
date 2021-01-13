##
## EPITECH PROJECT, 2018
## Makekfile
## File description:
## makefile
##

SRC	=	src/best_fit.c		\
		src/add_heap.c		\
		src/split_heap.c		\
		src/align_2.c		\
		src/my_malloc.c		\
		src/find_size_ptr.c		\
		src/list_function.c		\

OBJ	=	$(SRC:.c=.o)

NAME	=	library

LIB	=	libmy_malloc.so

all:	$(NAME)

$(NAME):
	gcc -c -fpic -Iinclude $(SRC)
	gcc -shared -o $(LIB) *.o

clean:
	rm -f *~
	rm -f *.o

fclean: clean
	rm -f $(LIB)

re:	fclean all
