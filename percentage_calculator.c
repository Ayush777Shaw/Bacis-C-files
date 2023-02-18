#include<stdio.h>
int main(){
    int physics,maths,science;
    float total;

    printf("Enter the marks of Physics\n");
    scanf("%d",&physics);

    printf("Enter the marks of Maths\n");
    scanf("%d",&maths);

    printf("Enter the marks of Science\n");
    scanf("%d",&science);

    total = (physics + maths + science) / 3;
    if(total<40 || physics<40 || maths<40 || science<40){
        printf("Your percentage is %f you are fail",total);

    }
    else{
        printf("Your percentage is %f you are pass",total);
    }

    return 0;
}