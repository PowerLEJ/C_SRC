app : main.o sub.o
	gcc main.o sub.o -o app
main.o : main.c
	gcc -c main.c -o main.o
sub.o : sub.c
	gcc -c sub.c -o sub.o
clean:
	rm -rf *.o app