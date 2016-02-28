#include <stdio.h>
int main(void)
{
   int ch;
      
   while((ch=getchar()) != EOF) {
      if (ch == '\n') {
         printf("\n");
      } else {
         printf("%#x, ", ch); /* 轉成十六進位整數形式 */
      }
   }
      
   return 0;
}
