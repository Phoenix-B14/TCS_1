all=-g -Wall

exe:subrtn.o main.o
	gcc -o exe subrtn.o main.o

subrtn.o:subrtn.c
	gcc $(all) subrtn.c -c

main.o:subrtn.c main.c
	gcc $(all) main.c -c

clean:
	rm *.o exe
