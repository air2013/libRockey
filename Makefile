IDIR = ./include
CFLAGS = -I$(IDIR)
CLIBS = -lusb-1.0
OBJ = utils.o  utpm_api.o libusb_api.o demo.o

demo: $(OBJ)
	gcc -o $@ $^ $(CLIBS) 

%.o: %.c 
	gcc -c -o $@ $< $(CFLAGS) 

clean:
	-rm demo *.o
