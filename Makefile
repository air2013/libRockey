IDIR = ./include
CFLAGS = -I$(IDIR)
OBJ = utils.o test.o

test: $(OBJ)
	gcc -o $@ $^ 

%.o: %.c 
	gcc -c -o $@ $< $(CFLAGS) 

clean:
	-rm test *.o
