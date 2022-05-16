#include<stdio.h>
#include<ctype.h>


int main() {

	char questions[][100] = {"1.Who Won the Golden Boot in 2018?: ",
		"2.Who won the EPL in 2008?: ",
		"3. Who Won the best player in the World in 2012?: "};
	char options[][100] = {"A. Mo Salah", "B. Ronaldo", "C. Messi",
		"A. Messi", "B. Mo Salah", "C. Ronaldo",
		"A. Ronaldo", "B. Messi", "c. Mo Salah"};

	char answers[] = {'A', 'C', 'B'};
	int numberOfQuestions = sizeof(questions) /sizeof(questions[0]);


	char guess;
	int score = 0;

	printf("QUIZ GAME\n");

	for(int i = 0; i < numberOfQuestions; i++){
		printf("************************\n");
		printf("%s\n", questions[i]);
		printf("************************\n");

		for(int j = (i*3); j < (i*3) + 3; j++){
			printf("%s\n",options[j]);


		}

		printf("Guess: ");
		scanf("%c", &guess);
		scanf("%c"); //clear \n from input buffer!

		guess = toupper(guess);

		if(guess == answers[i])	{

			printf("CORRECT!\n");
			score++;
		}
		else {

			printf("WRONG!\n");

		}


	}

	printf("FINAL SCORE: %d/%d\n", score,numberOfQuestions);

	return 0;






}
