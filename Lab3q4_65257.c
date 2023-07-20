#include <stdio.h>
int main(){
	int total = 0,input;
	float i = 0;
	printf("enter a number please : ");
	scanf("%d",&input);
	while(input > 0){
		total += input;
		i++;	
		printf("enter a number please : ");
		scanf("%d",&input);
	}
	if(i == 0) i++;
	printf("Sum of your numbers are : %d\n",total);
	printf("Average of your numbers are : %.2f\n",(total/i));
	return 0;
}
