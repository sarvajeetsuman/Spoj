#include<stdio.h>
main()
{
	short t;
	int n,i,j,count;
	long long ans;
	scanf("%hd",&t);
	while(t--)
	{
		scanf("%d",&n);
int a[n+1];
		for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
		ans=0;
	for(i=1,j=n;count<=n-2;)
	{
			if(a[i]>a[j]&&a[i+1]>a[j+1])
		if(a[i]>a[j]&&a[i]<a[i+1])
		{
			ans+=a[j];
			j--;count++;
		}
		else if(a[i]<a[j]&&a[j-1]>a[j])
		{
			ans+=a[i];i++;count++;
		}
	}

	}
	return 0;
}
