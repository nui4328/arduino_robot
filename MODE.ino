
int m ;
void Mode()
     {
       pinMode(8,OUTPUT);
       
     while(1)
        {             
          if(digitalRead(9)==0)
           {
            delay(500);
            if(digitalRead(9)==0)
              {
                digitalWrite(8,HIGH); 
                delay(600);
                digitalWrite(8,LOW); 
                break;
              }
            else
              {
                m+=1;
                digitalWrite(8,HIGH);
                delay(50);
                digitalWrite(8,LOW); 
                delay(50);
              }
              
            }                   
       }
           
      sl_mode();     
   }
void sl_mode()
     {
       if( m == 1 )
         {
           Motor(50,50);
         }
       else if ( m == 2 )
         {
           Motor(-50,50);
         }
       else if ( m == 3 )
         {
           Motor(50,-50);
         }
        else if ( m == 3 )
         {
           Motor(-50,-50);
         }
       else {}
     }
