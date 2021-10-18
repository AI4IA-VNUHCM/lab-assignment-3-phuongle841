/*
3.	Input an array of n integers. Find the largest sorted sub array
(sorted array increasing/decreasing and has the largest number of elements)
Ex:
 _____________________________________________
| Input: 2 5 3 4 8 9 7 6 10                   |
| Output: Increasing 3 4 8 9 Decreasing 9 7 6 |
|_____________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex3(int in_arr[], int n){
	//Your codes here
	for (int i = 0; i < n-2; i++)
	{
		if (in_arr[i]<in_arr[i+1]&&in_arr[i+1]<in_arr[i+2])
		{
			printf("incresing is %d ",in_arr[i]);
			for (int j = i+1; in_arr[j]<in_arr[j+1]; j++)
			{	
				if (in_arr[j+1]<in_arr[j+2])
				{
					printf("%d ",in_arr[j]);
				}
				else if (in_arr[j+1]>in_arr[j+2])
				{
					printf("%d ",in_arr[j]);
				}
				
				
				
			}	
			printf("\n");
		}
		if (in_arr[i]>in_arr[i+1]&&in_arr[i+1]>in_arr[i+2])
		{
			printf("decresing is %d ",in_arr[i]);
			for (int j = i+1; in_arr[j]>in_arr[j+1]; j++)
			{
			if (in_arr[j+1]>in_arr[j+2])
				{
					printf("%d ",in_arr[j]);
				}
				else if (in_arr[j+1]<in_arr[j+2])
				{
					printf("%d ",in_arr[j+1]);
				}
			}	
			printf("\n");
		}
		
	}
	
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int testcase[argc],i;
	for(i=0; i<argc;i++){
		testcase[i] = atoi(argv[i+1]);
	}
	
	Ex3(testcase, argc);
	
	return 0;
}
//gcc .\src\Exercise3.c -o .\bin\ex3.exe
//.\bin\\ex3.exe 2 5 3 4 8 9 7 6 10