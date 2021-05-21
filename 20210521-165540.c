#include <stdio.h>

int main ()
{
  FILE * location;
  int i,n;
  char str[100];
  char fname[20];
  char str1;
  
	printf("\n\n  A program that append multiple lines in a text file :\n");
	printf("-------------------------------------------------\n"); 
	printf(" Input the file name to be opened : ");
	scanf("%s",fname);		
    location = fopen(fname, "a"); 
    printf(" Input the number of lines to be written : ");
    scanf("%d", &n);
    printf(" The lines are : \n");  
    for(i = 0; i < n+1;i++)
    {
    fgets(str, sizeof str, stdin);
    fputs(str, location);
  }
  fclose (location);

	location = fopen (fname, "r");  
	printf("\n The content of the file %s is  :\n",fname);
	str1 = fgetc(location);
	while (str1 != EOF)
		{
			printf ("%c", str1);
			str1 = fgetc(location);
		}
    printf("\n\n");
    fclose (location);

  return 0;
}