CC := gcc
CFlags := -Wall -Werror -Wextra -pedantic -std=gnu89


SRC := *.c
Target := program.out

run: $(Target)
	./$<

$(Target): $(SRC)
	$(CC) $(CFlags) $^ -o $@

clean:
	rm -rf *.a *.out *.so *.o
