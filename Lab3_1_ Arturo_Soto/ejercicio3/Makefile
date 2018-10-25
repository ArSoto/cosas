prefix=/usr/local
CC = g++

CFLAGS = -g -Wall 
SRC = main.cpp Ingredientes.cpp Postre.cpp
OBJ = main.o Ingredientes.o Postre.o
APP = main

all: $(OBJ)
	$(CC) $(CFLAGS)-o $(APP) $(OBJ) 

clean:
	$(RM) $(OBJ) $(APP)

install: $(APP)
	install -m 0755 $(APP) $(prefix)/bin

uninstall: $(APP)
	$(RM) $(prefix)/bin/$(APP)

