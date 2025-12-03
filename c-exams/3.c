#include <stdio.h>
int main(){
    int arr[7]={20,32,6,7,22,47,21};
    int largest=arr[0];
    int smallest =arr[1];
    int lenght=sizeof(arr)/sizeof(arr[1]);

    for(int i=0;i<lenght;i++){
        if(arr[i]>=largest){
            largest=arr[i];
        }
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    printf("%d\n",largest);
    printf("%d\n",smallest);


    return 0;
}