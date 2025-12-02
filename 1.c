#include <stdio.h>
int main(){
int a;
scanf("%d",&a);
    if(a<0){
        printf("negative value");
    }
    else if(a>0){
        printf("positive");
    }
    else{
        printf("zero");
    }

    return 0;
}
