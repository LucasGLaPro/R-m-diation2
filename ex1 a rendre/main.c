#include <stdio.h>
#include <string.h>
void majuscule(char *str){
       for (int i = 0; str[i]!='\0'; i++) {
      if(str[i] >= 'a' && str[i] <= 'z') {
         str[i] = str[i] -32;
      }
   }
   printf("la chain en maj est: %s",str);
}
int main() {
   char str[100];
   printf("\n Entrez la chaîne à convertir en majuscule: ");
   gets(str);
    majuscule(str);
   return 0;
}
