/* 
    File : shift.c
    Desc : Implementation of CAESAR SHIFT CIPHER in C
    Author : Diparth Shah <diparths@gmail.com> 
*/

#include<stdio.h>
#include<string.h> 

/* shift for scanning shift value, i for basic count 
   string to scan input string, buf to hold one character 
   enc to store encrypted string
   dec to store decrypted string
*/

int i,shift;
char string[10],buf,enc[10],dec[10];

int main()
{   
	printf("\n-----------------------------------------");
	printf("\n          CAESAR SHIFT CIPHER            ");
	printf("\n-----------------------------------------\n");
	printf("\n Enter String :  ");
	scanf("%s",string);
	back:
	printf("\n Enter Shift Key  :  "); 
	scanf("%d",&shift);

	if(shift>26)
	{
		printf("\n Invalid Shift Key, Enter New Shift key... \n");
		goto back;
	}
   
   // encryption 
    i=0;
	while(string[i]!='\0')   
	{
		buf=string[i];
		buf=buf-shift; // subtracting shift value to character for encrypting 
        enc[i]=buf;
        i++;
	}
    
    // decrypting 
    i=0; 
	while(enc[i]!='\0')
	{
		buf=enc[i];
		buf=buf+shift; // adding shift value to character for decrypting
		dec[i]=buf;
		i++;
	}

    printf("\n-----------------------------------------"); 
	printf("\n Orignal String    :  %s",string);
	printf("\n Encrypted String  :  %s",enc);
	printf("\n Decrypted String  :  %s",dec);
	printf("\n-----------------------------------------");
	printf("\n\n");

	return 0; 
}
