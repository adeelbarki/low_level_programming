CFLAGS := -Wall -Werror -Wextra -pedantic
HEADER := upc.h
SRCDIR := src
CFILES := 0-absolute.c 2-square_root 0-contact_string 1-nconcat_string
SOURCES := $(foreach file, $(CFILES), $(SRCDIR)/$(file))
OBJECTS := $(patsubst %.c %.o $(SOURCES))

all: libupc.a

libupc.a : $(OBJECTS)
	ar -rcs libupc.a $(OBJECTS)

$(OBJECTS):$(SOURCES)
	gcc $(CFLAGS) -c $< -0 $@

clean:
	rm -f $(OBJECTS libupc.a

re:
	rm -f $(OBJECTS)
	make $(OBJECTS)
