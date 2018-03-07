all: simple_step bad_code

simple_step: code/simple_step.c
	gcc -Wall -g code/simple_step.c -o simple_step.x

bad_code: code/bad_code.c
	gcc -Wall -g code/bad_code.c -o maybeSegfault.x

lil_bomb: code/lil_bomb.c
	gcc -Wall -g0 code/lil_bomb.c -o bomb.x
clean:
	rm *.x
