#include <stdio.h>
#include <stdlib.h>

#define N_student 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, average;
	int sum;
	int grade[N_student];
	printf("input 5 scores : ");
	
	sum = 0;
	
	for(i=0;i<N_student;i++)
	{
	
		scanf("%d",&grade[i]);
		sum += grade[i];
	}
	
	average = sum / N_student;
	
	printf("score average : %i\n",average);
	
	
	return 0;
}
