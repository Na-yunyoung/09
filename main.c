#include <stdio.h>
#include <stdlib.h>

#define N_student 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int grade[N_student];
	printf("input 5 scores : ");
	
	for(i=0;i<N_student;i++)
		scanf("%d",&grade[i]);
	
	for(i=0;i<N_student;i++)
		printf("grade[%d] = %d\n",i,grade[i]);
	
	
	
	return 0;
}
