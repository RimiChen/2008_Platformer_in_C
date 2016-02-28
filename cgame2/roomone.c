#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void delay2(float sec);
int roomone(int mouseposition)
{
  int back[25][74]={0};
  int (*pback)[74];
  int key;
  int jump=0;
  int jumpon=0;
  int jumpc=0;
  int i,j;
  int player[2][2]={0xa1, 0xb4};
  int backmove=16;
  int forcheck[3][2]={0};
  int (*pforcheck)[2];
  int ypchange=0;
  int upcheck=0;
  int checkgoal=0;
  int frontmove=0;
  int checkmonster=0;
  int checkmonsterb=0;
  int y=19;
  int dead=0;
  int jumpstop=0;
  int monmovecount=0;
  int monmovecountb=0;
  
  
  
  

  
  pback=back;
  pforcheck=forcheck;
           


  
  
  while(1)
  {
          
               

   
          
    
       if(waitForKeyDown(0.5))
       {
           key=getKeyEventVirtual();
           

             if(key==0x27 && backmove<198)
             {


                     if(frontmove!=1)
                     {
                          backmove+=2;
                     }
    
             }
             else if(key==0x25 && backmove>0)
             {


                     if(frontmove!=2)
                     {
                          backmove-=2;
                     }             
                  
             }
             else if(key==0x26 && ypchange==1)
             {
                  if(jumpon==0)
                  {
                      jumpon=1;
                  }
             
             }    

       }
       
       
          jump=jumpcount(jump,jumpon);

          if(jump==0)
          {
             jumpon=0;
             jumpc=0;        
          }
          else if(jump>0 && jump<=8)
          {
              jumpc=jump;
          }     
          else if(jump>8)
          {
              jumpc=16-jump;
          }
          

       record(pforcheck,backmove,jumpc,y);
       background(pback,backmove-16);
       upcheck=groundbase(forcheck[0][1]);
       ypchange=bar(pback,backmove-16,forcheck[0][0],forcheck[0][1]);
       frontmove=front(pback,backmove-16,forcheck[0][0],forcheck[0][1]);
       jumpstop=top(pback,backmove-16,forcheck[0][0],forcheck[0][1]);
       checkgoal=goal(backmove-16,forcheck[0][0],forcheck[0][1]);
       if(checkmonster==0)
       {
          if(monmovecount<24)
          {
              monmovecount++;
          }
          else
          {
              monmovecount=0;;

          }                     
          
          checkmonster=monster(pback,backmove-16,forcheck[0][0],forcheck[0][1],monmovecount);
       }
       if(checkmonsterb==0)
       {
          if(monmovecountb<48)
          {
              monmovecountb++;
          }
          else
          {
              monmovecountb=0;;

          }                     
          
          checkmonsterb=monster2(pback,backmove-16,forcheck[0][0],forcheck[0][1],monmovecountb);
       }
       if(mouseposition==8)
       {
            girlplayer(19,y,jumpc,pback,backmove);
       }
       else if(mouseposition==0)
       {
            boyplayer(19,y,jumpc,pback,backmove);
       }     
       if((ypchange!=0 && jumpon==1))
       {
               y=forcheck[0][1];
               jumpon=0;
               jumpc=0;
         
          
       }
       else if(ypchange!=0)
       {
            y=forcheck[0][1];
       }     
       else
       {
           if(y<=19 && jump==0)
           { 
             y++;
           }
       }
       
       if(upcheck==1 && jumpon==1)
       {
             jump=16-jump;           
         
       }
       
       if(jumpstop==1)
       {
             jump=16-jump;         
       }
       
       if(checkmonster==2 || ypchange==2 || checkmonsterb==2)
       {
           dead=1;               
       }                                   
                
       drawCmdWindow();
       
       if(checkgoal!=0)
       {
           dead=2;            
       }               
       
       if(dead!=0)
       {
          break;        
       }          
       
       
       
       delay2(0.1);

                 
          
  }
          
  return dead;

}
void delay2(float sec)
{
     clock_t startc;
     startc=clock();
     while(1)
     {
            if((float)(clock()-startc)/CLOCKS_PER_SEC>sec) break;
     }       
}     

    
    
          
