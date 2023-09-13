default: challenge

program.o: challenge.c $(HEADERS)
    gcc -c challenge.c -o challenge.o

program: challenge.o
    gcc challenge.o -o challenge

clean:
    -rm -f challenge.o
    -rm -f challenge