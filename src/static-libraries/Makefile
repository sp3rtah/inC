CC := gcc
SRCS := *.c
OBJS := *.o
LIBS := *.a
TARGET := calculator.out
CFLAGS := -Wall -pedantic -Werror -Wextra -std=gnu89 -c

$(TARGET): $(LIBS)
	$(CC) -O2 $^ -o $@

$(LIBS): $(OBJS)
	ar -rcs libstatic1.a $^

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) $^

clean:
	rm -rf $(OBJS) *.so *.a

run: $(TARGET)
	@./*.out
