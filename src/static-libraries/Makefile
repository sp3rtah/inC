CC := gcc
SRCS := *.c
OBJS := *.o
CFLAGS := -Wall -pedantic -Werror -Wextra -std=gnu89 -c



objects: $(SRCS)
	$(CC) $(CFLAGS) $^

staticlib: $(OBJS)
	ar -rcs libarithmetic.a $^

clean:
	rm -rf $(OBJS) *.so *.out *.a
