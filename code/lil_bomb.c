#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void explode();
void phase1();

int main(int argc, char** argv){
   phase1(); 

}

void phase1(){
    printf("I see that you have come to defuse this bomb. Muahaha\n");
    printf("You'll never know how to defuse this bomb!\n");
    printf("You'd be a fool if you thought you could simply defuse it!\n");
    
    char* a = "Password";
    char* b = "distraction";
    char* c = "other distraction";
    char* buffer = (char*) malloc (8);
    gets(buffer);
    if (!strcmp(a, buffer)){
        printf("Nooooo! You've defused the bomb! My evil plot is ruined!\n");
    } else {
        explode();
    }
}

void explode(){
	printf("YOU FOOL, YOU'VE RUINED EVERYTHING AND I WILL NOW RUIN YOUR GRADE!!\n");
	printf("HOW WOULD A ZERO MAKE YOU FEEL??\n");
	printf("I HOPE REALLY BAD\n");
	exit(0);
}
