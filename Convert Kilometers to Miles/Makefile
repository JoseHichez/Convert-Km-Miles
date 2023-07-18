all:    convert

convert:    convert.o
	gcc convert.o -o convert

convert.o:  convert.c
	gcc -c convert.c -o convert.o

clean: 
	rm -f convert convert.o core *~
