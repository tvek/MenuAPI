IDIR = include
CC=gcc
CFLAGS=-I$(IDIR)

ODIR = src
LDIR = ../lib

LIBS = -lm

_DEPS = menu_api.h getch.h
DEPS = $(patsubst %, %(IDIR)/%,$(_DEPS))

_OBJ = home_page.c menu_api.c getch.c
OBJ = $(patsubst %, $(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

homepage: $(OBJ)
	#-> Compiling...
	# ---------------------------------
	$(CC) -w -o $@ $^ $(CFLAGS) $(LIBS)
	# ---------------------------------
	#-> Building Complete

.PHONY: clean

clean: rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~

test: $(IDIR)/menu_api.h $(ODIR)/test.c
	$(CC) -o $@ $^ $(CFLAGS)
