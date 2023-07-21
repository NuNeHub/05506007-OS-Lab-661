#include <stdio.h>
int main(){
	int num;
	int sum=0;
	float count=0;
	for(;;){
		printf("Enter number : ");
		scanf("%d",&num);
		if(num<=0){
			printf("The program has exited.\n");
			break;
		}
		else{
			sum+=num;
			count++;
		}
		printf("sum=%d\navg=%.2f\n",sum,sum/count);
	}
	return 0;
}
