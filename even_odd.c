#include<stdio.h>
int main(){
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("Even",a);
    }
    else{
        printf("Odd",a);
    }
    return 0;
}
