#include <stdio.h>
void girlplayer(int x,int y,int jumpc,int (*pback)[74],int backmove, int (*pforcheck)[2])
{
     int girl[3][2]={0xa3, 0x73,0xa1,0xb4,0xa1, 0xb6};
     int i,j;
     

        if(backmove>=16 && backmove<142)
        {
            backmove=0;            
        }
        else if(backmove<16 && backmove>=2)
        {
             backmove=backmove-16;
        }
        else if(backmove>=142)
        {
             backmove=backmove-142;
        }
        else if(backmove<2)
        {
             backmove=-16;
        }
      
        for(i=0;i<3;i++)
        {
             for(j=0;j<2;j++)
             {
                  putASCII2(x+backmove,y+i-jumpc,girl[i][0],13,pback[y+i-jumpc-1][x+backmove-3]);
                  putASCII2(x+backmove+1,y+i-jumpc,girl[i][1],13,pback[y+i-jumpc-1][x+backmove-2]);
                  

                   
             }                          
        }
        

        
     
                   
}
void girlplayerb(int x,int y,int jumpc,int (*pback)[74],int backmove, int (*pforcheck)[2])
{
     int girl[3][2]={0xa3, 0x73,0xa1,0xb4,0xa1, 0xb6};
     int i,j;
     

        if(backmove>=16 && backmove<142)
        {
            backmove=0;            
        }
        else if(backmove<16 && backmove>=2)
        {
             backmove=backmove-16;
        }
        else if(backmove>=142)
        {
             backmove=backmove-142;
        }
        else if(backmove<2)
        {
             backmove=-16;
        }
      
        for(i=0;i<3;i++)
        {
             for(j=0;j<2;j++)
             {
                  putASCII2(x+backmove,y+i-jumpc,girl[i][0],12,pback[y+i-jumpc-1][x+backmove-3]);
                  putASCII2(x+backmove+1,y+i-jumpc,girl[i][1],12,pback[y+i-jumpc-1][x+backmove-2]);
                  

                   
             }                          
        }
        

        
     
                   
}
int boyplayer(int x,int y,int jumpc,int (*pback)[74],int backmove, int (*pforcheck)[2])
{
     int boy[3][2]={0xa1, 0xb4,0xa1, 0xbf,0xa3, 0x4e};
     int i,j;
     int checkcount[8];





        if(backmove>=16 && backmove<142)
        {
            backmove=0;            
        }
        else if(backmove<16 && backmove>=2)
        {
             backmove=backmove-16;
        }
        else if(backmove>=142)
        {
             backmove=backmove-142;
        }
        else if(backmove<2)
        {
             backmove=-16;
        }
      
        for(i=0;i<3;i++)
        {
             for(j=0;j<2;j++)
             {
                  putASCII2(x+backmove,y+i-jumpc,boy[i][0],9,pback[y+i-jumpc-1][x+backmove-3]);
                  putASCII2(x+backmove+1,y+i-jumpc,boy[i][1],9,pback[y+i-jumpc-1][x+backmove-2]);
                  

                   
             }                          
        }
        

        

     
}
int boyplayerb(int x,int y,int jumpc,int (*pback)[74],int backmove, int (*pforcheck)[2])
{
     int boy[3][2]={0xa1, 0xb4,0xa1, 0xbf,0xa3, 0x4e};
     int i,j;
     int checkcount[8];





        if(backmove>=16 && backmove<142)
        {
            backmove=0;            
        }
        else if(backmove<16 && backmove>=2)
        {
             backmove=backmove-16;
        }
        else if(backmove>=142)
        {
             backmove=backmove-142;
        }
        else if(backmove<2)
        {
             backmove=-16;
        }
      
        for(i=0;i<3;i++)
        {
             for(j=0;j<2;j++)
             {
                  putASCII2(x+backmove,y+i-jumpc,boy[i][0],2,pback[y+i-jumpc-1][x+backmove-3]);
                  putASCII2(x+backmove+1,y+i-jumpc,boy[i][1],2,pback[y+i-jumpc-1][x+backmove-2]);
                  

                   
             }                          
        }
        

        

     
}     
int jumpcount(int jump,int jumpon)
{
        if(jumpon==0)
        {
            return 0;
        }
        else
        {
            if(jump>16 )
            { 
                return 0;       
            }
            jump++;

        }        
        

        return jump;          
}
