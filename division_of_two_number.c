#include<stdio.h>
int div();
int main()
{
     printf("Division of two number = %d",div());
return 0;
}
int div(){
    int a,b;
    printf("Enter the a number\nEnter the b number\n");
    scanf("%d%d",&a,&b);
    return a/b;
     
}