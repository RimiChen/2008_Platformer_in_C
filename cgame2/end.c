#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void delaye(float sec);
void end(void)
{
     int endp[25][80]={
         0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xc6, 0x43, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
         0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xa4, 0x46, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xa4, 0x55, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
         0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xa7, 0x41, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xa1, 0x5f, 0x20, 0x20, 0x20, 0x20, 0xa6, 0xb8, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
         0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb3, 0xe1, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xa4, 0x55, 0x20, 0x20, 0x20, 0x20, 0xa5, 0xd1, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
         0x20, 0x20, 0x20, 0x20, 0xc6, 0x43, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xa6, 0xb8, 0x20, 0x20, 0x20, 0x20, 0xa7, 0xda, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
         0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xaa, 0xba, 0x20, 0x20, 0x20, 0x20, 0xad, 0xcc, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xc6, 0x43, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
         0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xa4, 0x46, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xa5, 0x44, 0x20, 0x20, 0x20, 0x20, 0xa8, 0xd3, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
         0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xa1, 0xb4, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xa1, 0xb4, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xa8, 0xa4, 0x20, 0x20, 0x20, 0x20, 0xc6, 0x43, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
         0xc6, 0x43, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xa7, 0x41, 0x20, 0x20, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xac, 0x4f, 0x20, 0x20, 0x20, 0x20, 0xa1, 0x49, 0x20, 0x20, 0x20, 0x20, 0xa4, 0x46, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
         0x20, 0x20, 0xa4, 0x46, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
         0x20, 0x20, 0x20, 0x20, 0xa7, 0x41, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb3, 0xe1, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
         0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb3, 0xe1, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xa1, 0x49, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xa7, 0x41, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
         0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xa1, 0x60, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xc6, 0x43, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
         0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xa1, 0xf4, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
         0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb0, 0xb2, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xa4, 0x46, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
         0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xa1, 0x55, 0x20, 0x20, 0xa1, 0x55, 0x20, 0x20, 0xa1, 0x55, 0x20, 0x20, 0xa1, 0x55, 0x20, 0x20, 0xa1, 0x55, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xaa, 0xba, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
         0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xa1, 0x55, 0x20, 0x20, 0xa1, 0x55, 0x20, 0x20, 0xa1, 0x55, 0x20, 0x20, 0xa1, 0x55, 0x20, 0x20, 0xa1, 0x55, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xa7, 0x41, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
         0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xc6, 0x43, 0x20, 0x20, 
         0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xa4, 0x46, 0x20, 0x20, 0x20, 0x20, 
         0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xa7, 0x41, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
         0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0x20, 0x20, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb3, 0xe1, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
         0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
         0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0x20, 0x20, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
         0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
         0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xb5, 0xdf, 0xb5, 0xdf, 0xb5, 0xdf, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xa2, 0xe0, 0xa2, 0xf1, 0xa2, 0xf5, 0xa2, 0xf1, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20
     };
     int front[25][80]={0};
     int back[25][80]={0};
     int i,j;
     

     for(i=0;i<15;i++)
     {
         for(j=0;j<12;j++)
         {
              if(endp[i][j]!=0x20)
              {
                  front[i][j]=15;
                  back[i][j]=0;
              }          
         }                         
     }
     for(i=0;i<15;i++)
     {
         for(j=12;j<52;j+=2)
         {
              if(endp[i][j]==0x44 && endp[i][j+1]==0x44)
              {
                  front[i][j]=15;
                  back[i][j]=15;
                  front[i][j+1]=15;
                  back[i][j+1]=15;
              }
              else if(endp[i][j]==0xa1 && endp[i][j+1]==0xb4)
              {
                  
                  front[i][j]=0;
                  back[i][j]=11;
                  front[i][j+1]=0;
                  back[i][j+1]=11;
                   
                                    
              }
              else if(endp[i][j]!=0x20 && endp[i][j+1]!=0x20)
              {
                  front[i][j]=11;
                  back[i][j]=11;
                  front[i][j+1]=11;
                  back[i][j+1]=11;
              }                                   
         }                         
     }
     for(i=15;i<17;i++)
     {
         for(j=0;j<52;j++)
         {
              if(endp[i][j]!=0x20)
              {
                  front[i][j]=15;
                  back[i][j]=0;
              }          
         }                         
     }
     for(i=0;i<17;i++)
     {
         for(j=52;j<56;j++)
         {
              if(endp[i][j]!=0x20)
              {
                  front[i][j]=14;
                  back[i][j]=0;
              }          
         }                         
     }
     for(i=0;i<23;i++)
     {
         for(j=56;j<80;j++)
         {
              if(endp[i][j]!=0x20)
              {
                  front[i][j]=15;
                  back[i][j]=0;
              }          
         }                         
     }
     for(i=17;i<25;i++)
     {
         for(j=0;j<56;j++)
         {
              if(endp[i][j]!=0x20)
              {
                  front[i][j]=9;
                  back[i][j]=9;
              }          
         }                         
     }
     for(i=23;i<25;i++)
     {
         for(j=56;j<80;j++)
         {
              if(endp[i][j]==0x20)
              {
                  front[i][j]=15;
                  back[i][j]=0;
              }          
         }                         
     }
                   

     for(i=0;i<25;i++)
     {
          for(j=0;j<80;j++)
          {
               putASCII2(j,i,endp[i][j],front[i][j],back[i][j]);            
          }
          drawCmdWindow();
          delaye(0.2);                            
     }                

}
void delaye(float sec)
{
     clock_t startc;
     startc=clock();
     while(1)
     {
            if((float)(clock()-startc)/CLOCKS_PER_SEC>sec) break;
     }       
}     
