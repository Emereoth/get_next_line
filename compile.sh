make -C libft/ fclean && make -C libft/ && make -C libft/ clean
clang -Wall -Wextra -Werror -I libft/includes -o get_next_line.o -c get_next_line.c
clang -Wall -Wextra -Werror -I libft/includes -o mymain.o -c tests/mymain.c
clang -o gnl mymain.o get_next_line.o -I libft/includes -L libft/ -lft
rm *.o
