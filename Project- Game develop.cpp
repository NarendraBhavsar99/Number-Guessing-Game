// Number guessing game

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int number,guess,nguesses = 1;
	srand(time(0));
	number = rand()%100 + 1;
	//printf("the number is %d\n",number);
	do{
		printf("Guess the number between 1 to 100\n");
		scanf("%d", &guess);
		if(guess>number){
			printf("lower number please\n");
		}
		else if(guess<number){
			printf("Higher number please\n");
			}
			else{
				printf("You guessed it in %d attempts\n");
			}
			nguesses++;
	}while(guess!=number);
	
	return 0;
}
