#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main() {

	const int MIN = 1;
	const int MAX = 100;

	int guess;
	int guesses =0;
	int answer;

	//uses the current time as a seed
	srand(time(0));

	//generate a random number between MIN & MAX
	answer = (rand() % MAX) + MIN;

	do{

		printf("Enter a guess: ");
		scanf("%d", &guess);
		if(guess > answer)
		{
			printf("Too hight!\n");
		}
		else if(guess < answer)
		{
			printf("TOO low!\n");
		}
		else
		{
			printf("Correct!!\n");

		}
		guesses++;
	} while(guess != answer);

	printf("answer: %d\n", answer);
	printf("guesses: %d\n", guesses);

return 0;

}

