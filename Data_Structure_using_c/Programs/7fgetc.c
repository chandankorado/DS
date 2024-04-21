#include<stdio.h>
int main()
{
FILE *fp,*fp2;
char ch;
	fp=fopen("w1_file.txt","r");
	fp2=fopen("f2.txt","w");
    while((ch=fgetc(fp))!=EOF)
	{ 
	    if(islower(ch))
       ch=toupper(ch);
       fputc(ch,fp2);
   }
	    fclose(fp);
		fclose(fp2);
	fp=fopen("w1_file.txt","w");
	fp2=fopen("f2.txt","r");
	while((ch=fgetc(fp2))!=EOF)
{
	fputc(ch,fp);
}

	fclose(fp);
	fclose(fp2);
	remove("f2.txt");
	printf("\nfile created sucessfully");
return 0;
}
