#include <stdio.h>
int countStr();
void Encrypt(char str[], int y);
void Decrypted(char str[], int y);
int main()
{
   int i, x, y;
   char str[100];

   printf("\nPlease enter a string:\t");
   gets(str);
   y = countStr(str);
   
   printf("\nPlease choose following options:\n");
   printf("\t1 = Encrypt the string.\n");
   printf("\t2 = Decrypt the string.\n\t");
   scanf("%d", &x);
   switch(x){
   case 1: Encrypt(str, y); break;
   case 2: Decrypted(str, y); break;
   default: printf("\nError\n");
   }
   getch();
   return 0;
}

countStr(char str[]){
	int i, count = 0;  
	for(i = 0; (i < 100 && str[i] != '\0'); i++){
	    if(str[i] != ' '){
        	count = count + 1; 	    	
		}	
	}
	return count;
}

void Encrypt(char str[], int y){
	int i;
	for(i = 0; (i < 100 && str[i] != '\0'); i++){
		str[i] = str[i] + y;	
	}
	printf("\nEncrypted string: %s\n", str);
}

void Decrypted(char str[], int y){
	int i;
	for(i = 0; (i < 100 && str[i] != '\0'); i++){
		str[i] = str[i] - y;	
	}
	printf("\nDecrypted string: %s\n", str);
}
