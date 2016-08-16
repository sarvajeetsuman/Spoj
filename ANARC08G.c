#include<stdio.h>
int main(){
    int t = 0,i=0,j=0;
    scanf("%d",&t);
    int coun = 0;
    while(t>0){
        coun +=1;
        int arr[t][t];
        int psum = 0,asum =0;
        for(i=0;i<t;i++)
            for(j=0;j<t;j++)
                scanf("%d",&arr[i][j]);
        for(i=0;i<t;i++){
           int io=0,ou=0;
            for(j=0;j<t;j++){
                psum +=arr[i][j];
                ou+=arr[i][j];
                io+=arr[j][i];
            }
            asum += abs(ou-io);
        }
        printf("%d. %d %d\n",coun,psum,asum/2);
        scanf("%d",&t);
    }
    return 0;
}
