CC=cc
FLAGS=-Wall -Werror -Wextra

all: rush-02

rush-02: main.c atoi.c
	$(CC) $(FLAGS) -o rush-02 *.c

normi:
	norminette -R CheckForbiddenSourceHeader

.PHONY: ft_clean

ft_clean:
	rm -rf *.o
