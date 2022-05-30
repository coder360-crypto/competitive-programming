/*NAME:Ashish patwa,ROLL NO:21MF10009,ASSIGNMENT NO:4b */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int N;	                                                  //initializing the number of student
	printf("input the number of students in class \n");
	scanf("%d", &N);
	printf("%d \n", N);
	int score[N];
	printf("input the score of students between 0 to 100 \n");
	for (int i = 0; i < N; i++)	                              //taking input from the user i.e marks of students
	{
		printf("give the score of student %d \n", i + 1);
		scanf("%d", &score[i]);
		printf("%d \n", score[i]);
		while (score[i] < 0 || score[i] > 100)                //checking for invalid input
		{
			printf("invalid input \n");
			printf("give new input \n");
			scanf("%d", &score[i]);
			printf("%d \n", score[i]);
		}
	}

	double mean, s, sd, p, q, n;
	for (int i = 0; i < N; i++)                                 //calculating mean
	{
		s += (double)(score[i]);
	}

	mean = (s / (double) N);
	printf("value of mean is = %Lf \n", mean);
	for (int i = 0; i < N; i++)                                //calculating standard deviation
	{
		q = ((double) score[i] - mean);
		p += pow(q, 2);
	}

	sd = sqrt((p / (double)(N-1)));
	printf("value of standard deviation is = %Lf \n", sd);
	printf("Marks and grades of students are: \n");
	for (int i = 0; i < N; i++)                                 //assigning the grades of students and printing the grades
	{
		n = (double)(score[i]);
		if (n >= (mean + (1.5 *sd)))
		{
			printf("%d  ", score[i]);
			printf("EX \n");

		}
		else if (n >= (mean + (0.5 *sd)) && n < (mean + (1.5 *sd)))
		{
			printf("%d  ", score[i]);
			printf("A \n");

		}
		else if (n >= (mean - (0.5 *sd)) && n < (mean + (0.5*sd)))
		{
			printf("%d  ", score[i]);
			printf("B \n");

		}
		else if (n >= (mean - sd) && n < (mean - (0.5*sd)))
		{
			printf("%d  ", score[i]);
			printf("C \n");

		}
		else if (n >= (mean - (1.5 *sd) && n < (mean - (sd))))
		{
			printf("%d  ", score[i]);
			printf("D \n");

		}
		else if (n >= (mean - (2 *sd) && n < (mean - (1.5 *sd))))
		{
			printf("%d  ", score[i]);
			printf("P \n");

		}
		else
		{
			printf("%d  ", score[i]);
			printf("F \n");

		}
	}
	return 0;
}
