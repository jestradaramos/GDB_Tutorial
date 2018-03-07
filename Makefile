all: simple_step bad_code lil_bomb

simple_step: code/simple_step.c
	gcc -Wall -g code/simple_step.c -o simple_step.x

bad_code: code/bad_code.c
	gcc -Wall -g code/bad_code.c -o maybeSegfault.x

lil_bomb: code/lil_bomb.c
	gcc -w -g0 code/lil_bomb.c -o bomb.x
clean:
	rm *.x
