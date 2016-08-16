#include<stdio.h>

int main(){
    int t = 0,x=0;
    scanf("%d",&t);
    int arr [10000001];
    arr[0]=0;
    arr[1]=1;
    int i=2;
    while(i<10000001){
        t=2;
        while (t <=i){
            if(i%t==0){
                break;
            }
            t++;
        }
        arr[i]=arr[i-1]+t;
        i++;
    }
    for(i=0;i<t;i++){
        scanf("%d",&x);
        printf("%d",arr[x]);
    }

return 0;
}
/*
lst = []
lst.append(0)
lst.append(0)
i = 2
while i <10000000 :
    t = 2
    while t <= i :
        if i % t == 0 :
            break
        t +=1
    lst.append(lst[i-1]+t)
    i +=1
for _ in range(int(input())):
    print(lst[int(input())])
*/
