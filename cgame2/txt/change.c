#include <stdio.h>
int main(void)
{
   int ch;
      
   while((ch=getchar()) != EOF) {
      if (ch == '\n') {
         printf("\n");
      } else {
         printf("%#x, ", ch); /* �ন�Q���i���ƧΦ� */
      }
   }
      
   return 0;
}
