#include <bits/stdc++.h>
using namespace std;
int n,c;
int func(int num,int array[])
{
    printf("inside func\n");
    int cows=1,pos=array[0];
    for (int i=1; i<n; i++)
    {
        if (array[i]-pos>=num)
        {
            pos=array[i];
            cows++;
            if (cows==c)
                return 1;
        }
    }
    return 0;
}
int bs(int array[])
{
    printf("inside bs\n");
    int ini=0,last=array[n-1],max=-1; /*# ini =0 last = 9 max = -1 #*/
    printf("%d",array[n-1]);
    while (last>ini)                  /* last */
    {
        //cout<<last<<" "<<ini<<endl;
        int mid=(ini+last)/2;
        if (func(mid,array)==1)
        {
            printf("inside if\n");
            //cout<<mid<<endl;
            if (mid>max)
                max=mid;
            ini=mid+1;
        }
        else{
            printf("inside else\n");
            last=mid;
        }
    }
    return max;
}
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d %d",&n,&c);
        int array[n];
        for (int i=0; i<n; i++)
            scanf("%d",&array[i]);
        sort(array,array+n);
        //cout<<" dfsa \n";
        int k=bs(array);
        printf("%d\n",k);
    }
    return 0;
}
