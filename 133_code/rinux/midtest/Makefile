all: test

test: main.o intcomp.o my_int_sort.o print_array.o
	gcc -W -Wall -o test main.o intcomp.o my_int_sort.o print_array.o

main.o: main.c
	gcc -W -Wall -c main.c

intcomp.o: intcomp.c
	gcc -W -Wall -c intcomp.c

my_int_sort.o: my_int_sort.c
	gcc -W -Wall -c my_int_sort.c

print_array.o: print_array.c
	gcc -W -Wall -c print_array.c
