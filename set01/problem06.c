#include <stdio.h>
int input(int *a, int *b, int *c);
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);

int main(){

     int a,b,c,largest_num;
    input(&a);
    input(&b);
    input(&c);
    largest=compare(a,b,c);
    output(a,b,c,largest);
    return 0;
}
