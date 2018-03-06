all: simple_step

simple_step: code/simple_step.c
	gcc -Wall -g code/simple_step.c -o simple_step

clean:
	rm simple_step
