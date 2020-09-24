#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks;
    printf("input your marks.\n");
    scanf("%d",&marks);
    printf("your marks is %d\n",marks);
    if(marks>=40){
        printf("You have passed.\n");
    }
    if(marks<40){
        printf("You have failed.\n");
    }
    return 0;
}
