// Program ce sortirat stringove u abecednom redoslijedu.

#include<stdio.h>
#include<string.h>
int main(){
   int i,j,broj;
   char str[25][25],temp[25];
   puts("Koliko stringova ces upisat?: ");
   scanf("%d",&broj);

   puts("Unesi stringove jedan po jedan: ");
   for(i=0;i<=broj;i++)
      gets(str[i]);
   for(i=0;i<=broj;i++)
      for(j=i+1;j<=broj;j++){
         if(strcmp(str[i],str[j])>0){
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
         }
      }
   printf("Sortirani stringovi:");
   for(i=0;i<=broj;i++)
      puts(str[i]);
   
   return 0;
}
