#include<stdio.h>
int merges(int arr[] , int left[] ,int right[]){
    printf("Hello, inside merge\n");
    int i=0,j=0,k=0;
    int invc=0;
    while(i<sizeof(left)/sizeof(int) && j < sizeof(right)/sizeof(int)){
        if(left[i]<right[j]){
            arr[k]=left[i];
            i++;
        }
        else{
            arr[k]=right[j];
            invc+=(sizeof(left)/sizeof(int))-i;
            printf("%d",invc);
            j++;
        }
    }
    while(i<sizeof(left)/sizeof(int)){
        arr[k]=left[i];
        j++;
        k++;
    }

    while(i<sizeof(right)/sizeof(int)){
        arr[k]=right[j];
        j++;
        k++;
    }
    return invc;
}

int mergesort(int arr[]){
    printf("Hello, inside mergesort\n");
    int j = 0;
    for(j=0;j<5;j++){
            printf("%d\t",arr[j]);
        }
        printf("\n");
    int inv = 0,i=0,mid=0;
    printf("\n%d\n",sizeof(arr)/sizeof(arr[0]));
    if (sizeof(arr)/sizeof(int)>1){
        printf("Hello, inside if loop\n");
        mid = (sizeof(arr)/sizeof(int))/2;
        int left[mid],right[sizeof(arr)/sizeof(int)-mid];
        for(i=0;i<mid;i++){
            left[i]=arr[i];
        }
        for(i=0,j=mid;j<sizeof(arr)/sizeof(int);j++){
            right[i]=arr[j];
        }
        printf("Before Chutspa\n");
        inv = mergesort(left);
        inv+= mergesort(right);
        inv+=merges(arr,left,right);
    }
    return inv;
}

int main(){
    int inv = 0;
    int t =0,i=0,j=0,num=0;
    char bl;
    scanf("%d",&t);
    for (i=0;i<t;i++){
        scanf("%c",&bl);
        scanf("%d",&num);
        int arr[num];
        for(j=0;j<num;j++){
            scanf("%d",&arr[j]);
        }
        printf("\n");
        for(j=0;j<num;j++){
            printf("%d\t",
                   arr[j]);
        }
        printf("\n");
        inv = mergesort(arr);
        printf("%d",inv);
    }
    return 0;
}
