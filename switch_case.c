#include<stdio.h>
int main(){
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);

    if(age<=18 || age<100){
        printf("You can drive\n",age);

    }
    else{
        printf("You cannot drive\n",age);
    }
    return 0;
}