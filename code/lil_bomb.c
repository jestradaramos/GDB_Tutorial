#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void explode();
void phase1();
void phase2();

int main(int argc, char** argv){
   phase1(); 
   phase2();

}

void phase1(){
    printf("I see that you have come to defuse this bomb. Muahaha\n");
    printf("You'll never know how to defuse this bomb!\n");
    printf("You'd be a fool if you thought you could simply defuse it!\n");
    
    char* a = "Roses are red, violets are blue, ACM is the best and so are you!";
    char* buffer = (char*) malloc (8);
    gets(buffer);
    if (!strcmp(a, buffer)){
        printf("Nooooo! You've defused this phase! My evil plot is ruined!\n");
    } else {
        explode();
    }
}

void phase2(){
	printf("It's okay, there's another phase. You'll never figure this one out.\n");
	int a = 0;
	char buffer[5];

	gets(buffer);
	printf("Your guess: %s", buffer);

	if (!a){
		explode();
	}
	printf("Why are you so good at defusing my phases\n");
}

void explode(){
	printf("YOU FOOL, YOU'VE RUINED EVERYTHING AND I WILL NOW RUIN YOUR GRADE!!\n");
	printf("HOW WOULD A ZERO MAKE YOU FEEL??\n");
	printf("I HOPE REALLY BAD\n");
	exit(0);
}
