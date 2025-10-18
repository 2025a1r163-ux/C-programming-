#include<stdio.h>
int main()
{
    int marks;
    printf("enter marks(0-100): ");
    scanf("%d",&marks);

    if (marks >=0 && marks <= 100){
        if (marks >=75)
            printf("distinction\n");
        else if (marks >= 60)
            printf("first class\n");
        else if (marks >=45)
            printf("second class\n");
        else
            printf("fail\n");
    }else{
        printf("invailed marks\n");
    }
    return 0;
}
