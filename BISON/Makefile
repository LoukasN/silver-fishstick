all:
	bison -d -o simple-bison-code.c simple-bison-code.y --verbose 
	flex -o simple-flex-code.c simple-flex-code.l
	gcc -o simple-bison-code simple-bison-code.c simple-flex-code.c
	./simple-bison-code < input.txt &> output.txt
clean:
	rm simple-bison-code.c simple-bison-code simple-bison-code.h simple-flex-code.c
