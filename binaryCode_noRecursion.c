#include<stdio.h>

int binary(int);

int main()
{
    int x;

    do{
        printf("Enter a positive integer from 0-255: ");
        scanf("%d",&x);
       }while(x<0 || x>255);

    binary2(x);

}
binary2(int a)
{
    int i,j,L,x,y;
    char bArray[8];

    for(i=0;i<=7;i++)
    {
        bArray[i]=a%2;
        a=a/2;

    }
   /* for(i=7;i>=0;i--){
        printf("%d",bArray[i]);
    }*/

    L=7;
    for(j=0;j<=3;j++)
    {
        x = bArray[j];
        y = bArray[L];
        bArray[j] = y;
        bArray[L] = x;

        L--;
    }
    for(i=0;i<=7;i++)
    {
        printf("%d",bArray[i]);

    }


}


int binary1(int a)
{
    int z,j,reverse = 0, remainder,c,b,sum;
    char arr[8];
    if(a==0 || a==1)
        printf("%d",a);
    else
    {
         for(z=0;z<=7;z++)
         {
             //arr[z]
             c= a%2;
             b=c*pow(10,z);
             a/=2;
             sum = sum +b;

         }

         printf("outside loop = %d\n",sum);

      /*   while (z != 0) {
            remainder = z % 10;
            reverse = reverse * 10 + remainder;
            z /= 10;
            //printf("In Loop");
          }
          printf("Reversed number = %d", reverse);*/
    }
}
