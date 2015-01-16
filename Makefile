make: main.c Functions.c
	gcc main.c Functions.c -o debug

clean: debug 
	rm debug 
