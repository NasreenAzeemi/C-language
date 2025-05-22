#include <stdio.h>
#include <math.h>

int main() {
 int x,y;
 scanf("%d",&x);
 y=(x>5?3:4);

/*its equivalent form would be
    if (x>5)
        y=3;
    else
        y=4; */

 printf("%d",y);


 int  a,z;
 scanf("%d",&a);
 z = (a>=65 && a<=90 ? 1:0 );
 printf("%d",z);

return 0;
}
