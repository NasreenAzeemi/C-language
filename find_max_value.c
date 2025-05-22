// C program to find maximum value in an array
/*#include <stdio.h>

int main()
{
int r,g,b,r_1,g_2,b_3;
float c,y,m,k;

printf("R: ");
    scanf("%d",&r_1);

    printf("G: ");
    scanf("%d",&g_2);

    printf("B: ");
    scanf("%d",&b_3);

    r = r_1/255;
    g = g_2/255;
    b = b_3/255;

	// Initialize an array
	float arr[] = {r,g,b};

	// Find the size of the array
	float n = sizeof(arr) / sizeof(arr[0]);

	// Intialize the variable which will denote the maximum
	// element
	int res = arr[0];

	// Find the maximum value in the array and store it in
	// res

	for (int i = 0; i < n; i++) {
		if (res < arr[i])
			res = arr[i];
	}
	// print the elements of the array
	printf("Array Elements: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	// print the maximum value
	printf("The maximum value of the array is: %d", res);

	k = 1-res;

	c = (res-r)/res;
	m = (res-g)/res;
	y = (res-b)/res;

	printf("Your CMYK value is %f %f %f %f",c,m,y,k);


	return 0;
}
*/
#include <stdio.h>

int main()
{
    float R,G,B;
    float C,M,Y,K,W,Rf,Gf,Bf,max;
    printf("Enter the values of R,G & B: ");
    scanf("%f,%f,%f",&R,&G,&B);
    if (R<0||R>255)
    {
        printf("Enter R within limit\n");
        scanf("%f",&R);
    }
    if (G<0||G>255)
    {
        printf("Enter G within limits\n");
        scanf("%f",&G);
    }
    if (B<0||B>255)
    {
        printf("Enter B within limits\n");
        scanf("%f",&B);
    }
    printf("\nR,G,B: %f,%f,%f\n",R,G,B);

    if (R == 0 && G == 0 && B == 0)
    {
        printf("\nThe value of Cyan: 0\n");
        printf("\nThe value of Magenta: 0\n");
        printf("\nThe value of Yellow: 0\n");
        printf("\nThe value of Black: 1\n");
    }
    else
    {
        Rf   = R   / 255;
        Gf  = G / 255;
        Bf   = B  / 255;

        max = Rf;
        if (max<Gf)
            max = Gf;
        if (max<Bf)
            max = Bf;

        W = max;
        printf("\nWhite: %f\n\n", W);

        C = (W-Rf)/W;
        M = (W-Gf)/W;
        Y = (W-Bf)/W;

        K = 1- W;
        printf("The value of Cyan: %f\n", C);
        printf("The value of Magenta: %f\n", M);
        printf("The value of Yellow: %f\n", Y);
        printf("The value of Black: %f\n", K);
    }
}
