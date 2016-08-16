#include <stdio.h>

int main(void) {
	int test=0;
	scanf("%d",&test);
	while(test--){
		int x=0,y=0;
		scanf("%d %d",&x,&y);
		if(x==y||y==x-2){
			if(x%2==0)
				printf("%d\n",x+y);
			else
				printf("%d\n",x+y-1);
		}
		else{
			printf("No Number\n");
		}
	}
	return 0;}
