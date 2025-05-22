#include <stdio.h>
#include <math.h>

int main()
{
  float a,b,c,d,e,f,pi;
  pi=3.142; //pi value identified here and executed in var d.
  a= pow(3.0,2.0); //pow() is a standard library function. its read as 3 to the power of 2
  b= sin(90);
  c= abs(-10);
  d= cos(pi);
  e= tan(1);
  f= sqrt(4);

  printf("%f %f %f %f %f %f\n\n",a,b,c,d,e,f);

//'F' and 'G' are ASCII codes who's decimal values are 70 and 71
  char x,y;
  int z;
  x='F';
  y='G';
  z=x+y;
  printf("  %c",z);


  int g;
  float h,i;
  g=3.5; //since var g is declared an integer variable, 3.5 is stored as 3
  h=30; /*since h is real variable 30 is stored a 30.0 hence resulting in g+h = 33.0
  whereas it should be 33.5 in normal calculation*/
  i=g+h; //
  printf("\n%f\n",i);

  int j;
  float k;
  j=2/9;
  k=2/9;
  printf("%d %f\n",j,k); //note the difference in calculation of a real and integer

  float kk;
  kk= 3.0 /2.0 * 4.0 + 3.0/8.0; /*values typed in real format so will be stored as real in kk which is declared a real variable
  hence the output shown on screen will give answer with values after the decimal point*/

  printf("%f",kk);

  float ii;
  ii= 3 /2 * 4 + 3/8; /*values typed in integer so its demoted to integer and
  stored in ii which is a real variable hence output executed in terms of an integer so display shown
  will have no value after the decimal point*/

  printf("\n%f\n",ii);


  return 0;
}
