#include<stdio.h>
#include<complex.h>
struct _complex {
	float real;
	float imaginary;
};
typedef struct _complex Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);

int main()
{
    Complex a,b,sum;
    a=input_complex();
    b=input_complex();
    sum=add_complex(a,b);
    output(a,b,sum);
    return 0;
}

Complex input_complex()
{ 
    Complex c ;
    printf("enter the real value :");
    scanf("%f" , &c.real);
    printf("enter the imaginary value :");
    scanf("%f" , &c.imaginary);
    return c ;

}

Complex add_complex(Complex c1 , Complex c2)
{
    Complex sum;
    sum.real=c1.real+c2.real;
    sum.imaginary=c1.imaginary+c2.imaginary;
    return sum;
}


void output(Complex c1 , Complex c2 , Complex sum)
{
    printf("the sum of %f+i%f and %f+i%f is %f+i%f" , c1.real , c1.imaginary , c2.real ,c2.imaginary , sum.real , sum.imaginary);
}
