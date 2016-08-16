#include<stdio.h>
int main()
{
    int test=0;
    scanf("%d",&test);
    while(test--){
        int len=0,i=0,j=0,smart=0;
        scanf("%d",&len);
        int arr[len];
        for(i=0;i<len;i++)
            scanf("%d",&arr[i]);
        i=0;
        j=len-1;
        while(i<=j){
            if(arr[i]>arr[j]){
                smart+=arr[i];
                i+=1;
            }
            else{
                smart+=arr[j];
                j-=1;
            }
            if(arr[i]>arr[j])
                i+=1;
            else
                j-=1;
        }
        printf("%d",smart);
    }
    return 0;
}
