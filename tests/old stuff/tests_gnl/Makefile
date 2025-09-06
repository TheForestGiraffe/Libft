BUFFER_SIZE ?= 100

test: test_get_next_line.c ../get_next_line.c ../get_next_line_utils.c
	cc -Wall -Wextra -Werror -g -D BUFFER_SIZE=${BUFFER_SIZE} $^
	./a.out
