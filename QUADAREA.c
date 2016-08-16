#include <stdio.h>
int main(void) {
	int t =0;
	scanf("%d",&t);
	while(t--){
		double a=0,b=0,c=0,d=0;
		scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
		double s = (a+b+c+d)/2;
		double areas = ((s-a)*(s-b)*(s-c)*(s-d));
		printf("%.2lf\n",sqrt(areas));
	}
	return 0;
}
