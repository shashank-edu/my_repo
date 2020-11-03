#include<stdio.h>
void main()

{
int a[3][3],b[3][3],c[3][3],i,j;
printf("enter 9 numbers for first array \n");
for(i=0;i<=2;i++)
	for(j=0;j<=2;j++)
		scanf("%d",&a[i][j]);
printf("enter 9 numbers for second array \n");
for(i=0;i<=2;i++)
	for(j=0;j<=2;j++)
		scanf("%d",&b[i][j]);
printf("\n");
for(i=0; i<= 2 ; i++)
{	
	for (j=0 ; j<=2 ; j++)
	{
		c[i][j]=a[i][j]+b[i][j];   //here [][] first block represent rows , second block represent column
	printf("%d  ",c[i][j]);

	}
printf("\n");
}
//now to do sum of these two matrices for that we made a third array to store their data

}
