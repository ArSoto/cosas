prefix=/usr/local
CC = g++

CFLAGS = -g -Wall 
SRC = main.cpp Arbol.cpp Grafo.cpp 
OBJ = main.o Arbol.o Grafo.o
APP = main

all: $(OBJ)
	$(CC) $(CFLAGS)-o $(APP) $(OBJ) 

clean:
	$(RM) $(OBJ) $(APP)

install: $(APP)
	install -m 0755 $(APP) $(prefix)/bin

uninstall: $(APP)
	$(RM) $(prefix)/bin/$(APP)

