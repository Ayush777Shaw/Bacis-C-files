#include<stdio.h>
int main(){
    int i=0;
    int n;
    scanf("%d",&n);
    do{
        printf("The first n natural number is %d\n",i+1);
        i++;
    }while(i<n);

    return 0;
}
