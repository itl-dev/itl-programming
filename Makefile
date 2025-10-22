CFLAGS  += $(shell pkg-config --cflags xlsxwriter)
LDFLAGS += $(shell pkg-config --libs xlsxwriter)

all: main
main: main.c
	$(CC) -std=c17 -Wall -Wextra -O2 -o $@ $< $(CFLAGS) $(LDFLAGS)

clean:
	rm -f main output.xlsx