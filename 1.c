#include<stdio.h>

 int main()
 {
 
    int num1,num2, biggest;
    
    printf("Please Enter The First Number:"); 
    scanf("%d", &num1);
    printf("Please Enter The Second Number:");
    scanf("%d", &num2);
    if(num1>num2)
    biggest= num1;
    else
    biggest= num2;
    printf("Biggest among two numbers is:%d", biggest);
    
}
