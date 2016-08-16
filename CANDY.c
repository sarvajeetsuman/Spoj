#include<stdio.h>
int main()
{
    int NumPac =0,i=0,total=0,camo=0,avg=0,t=0;
    scanf("%d",&NumPac);
    while(NumPac!=-1){
        int lst[NumPac];
        for(i=0;i<NumPac;i++)
            scanf("%d",&lst[i]);
        total=0;
        for(i=0;i<NumPac;i++)
            total+=lst[i];
        if(total%NumPac!=0)
            printf("%d\n",-1);
        else{
            camo=0;
            avg=total/NumPac;
            for(t=0;t<NumPac;t++)
                if(lst[t]>avg)
                    camo+=lst[t]-avg;
            printf("%d\n",camo);
        }
        scanf("%d",&NumPac);
    }
    return 0;
}
