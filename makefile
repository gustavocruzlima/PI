all: valor_pi
	valor_pi: main.c
	gcc -std=c11 main.c -o main