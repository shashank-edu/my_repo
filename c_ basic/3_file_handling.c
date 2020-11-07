/* in this program we try to read from the pre-exsisting  file  */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()

{
char s;
FILE *fp;
fp=fopen("f2.txt","r");
if (fp==NULL)
{
	printf("file not found \n");
exit(1);
}
s=fgetc(fp); 
//here we use the function fgetc(); to read the file, yeh function return karata hai ek character jo ki file ki pahali byte me raklha hua hai
//fgetc() ko yeh batane ke leye ki kis file se character pass karana hai toh use ke leye hum es me  ke argument pass kr dege us pointer ka jonki input buffer ke pahale byte ho point kar raha hai 
//ab ek ek chrater ko pass karege toh hame eseme loop lagana padega pr loop kaha tak lagaye yeh kaise pata chalega
//es le leye ek predefined function hai feof() i.e end of file, yeh function return karata hai true ya false , i.e 1 or 0 mtlb agar 1 return kr raha hai yani file ka end a chuka hai
//ab agr file ka end a gya hai toh ese rukanana chahiye toh hum not laga dete hai
while(!feof(fp))
{       printf("%c",s);

	s=fgetc(fp);
}
fclose(fp);
}

