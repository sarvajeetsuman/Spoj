#include<stdio.h>
#include<stdlib.h>
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main(){
    int test=0,i=0,len=0,j=0,k=0,sum=0;
    scanf("%d",&test);
    printf("%d",test);
    for(k=0;k<test;k++){
        len = 0;
        sum=0;
        scanf("%d",&len);
        int boys[len];
        int girls[len];
        for(i=0;i<len;i++)
            scanf("%d",&boys[i]);
        for(i=0;i<len;i++)
            scanf("%d",&girls[i]);
        qsort(boys,len,sizeof(int), cmpfunc);
        qsort(girls,len,sizeof(int), cmpfunc);
        for(i=0,j=0;i<len;i++,j++)
            sum+=boys[i]*girls[j];
        printf("%d",sum);
    }
    return 0;
}
