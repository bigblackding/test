main : main.o func.o sort.o
	gcc -o main main.o func.o sort.o
mian.o : main.c
	gcc -c main.c
func.o : func.c
	gcc -c func.c
sort.o : sort.c
	gcc -c sort.c
clean :
	rm -rf *.o main
