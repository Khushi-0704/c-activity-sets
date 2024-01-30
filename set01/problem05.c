#include <stdio.h>

int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);

int main()
{

    int a,b,c,largestnum;
    a=input();
    b=input();
    c=input();
    largestnum=comapare(a,b,c);
    output(a,b,c,largestnum);
    return 0;
}

int input(){

    int a;
    printf("enter a number");
    scanf("%d", &a);
    return a;
}

int compare(int a , int b , int c){

    if(a>=b && a>=c)
    return a;
    else if(b>=c && b>=a)
    return b;
    else 
    return c; 
}

void output(int a, int b, int c, int largest){

    printf("largest of %d, %d and %d is %d",a, b, c, largest);
}

