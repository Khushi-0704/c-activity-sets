#include <stdio.h>
int input(int *a, int *b, int *c);
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);

int main(){

     int a,b,c,largest;
    input(&a);
    input(&b);
    input(&c);
    largest=compare(a,b,c);
    output(a,b,c,largest);
    return 0;
}
 int input (int *a , int*b , int*c){

    
    int n ;
    printf("enter a number:");
    scanf("%d" ,n);

 }
 
 void compare(int a,int b,int c , int*largest){
    if(a>=b && a>=c);
    return a;
    else if(b>=a && b>=c)
    return b;
    else
    return c;
 }





