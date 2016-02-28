#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void delay(float sec);
void record(int (*)[2],int,int,int);
int main(void)
{
    int key;
    int checkmenu=0;
    int mouseposition;
    int premouse;
    int deadcheck=0;

    
    initializeKeyInput();
     
     while(1)
     {
     
        openg();
        delay(0.5); 
        openf();
        delay(0.5);
        opene();
        delay(0.5);    
        opend();
        delay(0.5);
        openc();
        delay(0.5);
        openb();
        delay(0.5);
        opena();
        delay(2.0);
        openb();
        delay(0.5);
        openc();
        delay(0.5);
        opend();
        delay(0.5);
        opene();
        delay(0.5);
        openf();
        delay(0.5);
        openg();
        delay(1.0);
             
        mouseposition=0;
        premouse=5;
        
        while(1)
        {
            menu(mouseposition,premouse);
            
            drawCmdWindow();

            if(waitForKeyDown(0.5))
            {
                   key=getKeyEventVirtual();

                   if(key==0x0D)
                   {
                        checkmenu=1;

                   }
                   else if(key==0x28)
                   {
                       if(mouseposition<4)
                       {
                          premouse=mouseposition;
                          mouseposition+=2;             
                       }
                   }
                   else if(key==0x26)
                   {
                       if(mouseposition>0)
                       {
                          premouse=mouseposition;
                          mouseposition-=2;             
                       }
                   }
                        
            }    

            if(checkmenu==1)
            {
               checkmenu=0;
               break;             
            }               
   
           delay(0.08);     
        
        }
        
        openg();
        delay(0.5);
        

        
        if(mouseposition==0)
        {
                            
             while(1)
             {
                     
                 choose(mouseposition,premouse);
            
                 drawCmdWindow();

                 if(waitForKeyDown(0.5))
                 {
                        key=getKeyEventVirtual();

                        if(key==0x0D)
                        {
                             checkmenu=1;

                        }
                        else if(key==0x27)
                        {
                            if(mouseposition<8)
                            {
                                premouse=mouseposition;
                                mouseposition+=8;             
                            }
                        }
                        else if(key==0x25)
                        {
                            if(mouseposition>0)
                            {
                                premouse=mouseposition;
                                mouseposition-=8;             
                            }
                        }
                        
                  }    

                  if(checkmenu==1)
                  {
                     checkmenu=0;
                     break;             
                  }               
   
                  delay(0.08);     
        
            }               
             deadcheck=roomone(mouseposition);
             if(deadcheck!=1)
             {
                 deadcheck=roomtwo(mouseposition);
             }
                            
        }
        else if(mouseposition==2)
        {

             while(1)
             {
                 talk();
            
                 drawCmdWindow();

                 if(waitForKeyDown(0.5))
                 {
                      key=getKeyEventVirtual();

                      if(key==0x0D)
                      {
                          checkmenu=1;

                      }
                  }
                 

                 if(checkmenu==1)
                 {
                      checkmenu=0;
                      break;             
                 }               
   
                 delay(0.08);     
        
                     
             
             }    
        
        }
        else if(mouseposition==4)
        {
             break;
        }
        
        if(deadcheck==1)
        {
             openg();
             deadc();
             delay(0.5);
             openg();
             deadb();
             delay(0.5);
             openg();
             deada();
             delay(0.5);
             openg();
             deadd();
             delay(1.0);
             deade();
             delay(1.5);
             deadcheck=0;           
        }
        else
        {
            deadcheck=0;
        }                                                   

                                
      
     
    }
  
  end();
  delay(2); 
  system("PAUSE");	
  return 0;
 
}

void delay(float sec)
{
     clock_t startc;
     startc=clock();
     while(1)
     {
            if((float)(clock()-startc)/CLOCKS_PER_SEC>sec) break;
     }       
}

void record(int (*pforcheck2)[2],int backmove,int jumpc,int y)
{       
        pforcheck2[0][0]=backmove;
        pforcheck2[0][1]=y-jumpc;
}
