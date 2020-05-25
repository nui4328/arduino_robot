void FST(int spl, int spr)   //  เดินตามเส้น ถึงแยกให้หยุด
  {
   while(1)
     {
      
      if( (analogRead(A0)>=200) && (analogRead(A6)>=200) )
        {
          Motor(spl,spr);
        }
     else if( (analogRead(A0)<200) && (analogRead(A6)>=200) )
        {
          Motor(0,spr);
        }
     else if( (analogRead(A0)>=200) && (analogRead(A6)<200) )
        {
          Motor(spl,0);
        }
     else if( (analogRead(A0)<200) && (analogRead(A2)<200) )
        {
          break;
        }
     else if( (analogRead(A6)<200) && (analogRead(A2)<200) )
        {
          break;
        }        
     }
     
     Motor(0,0);
     delay(10);
  }

void FF(int spl, int spr)   //  เดินตามเส้น ถึงแยกให้หยุด
  {
   while(1)
     {
      
      if( (analogRead(A0)>=200) && (analogRead(A6)>=200) )
        {
          Motor(spl,spr);
        }
     else if( (analogRead(A0)<200) && (analogRead(A6)>=200) )
        {
          Motor(0,spr);
        }
     else if( (analogRead(A0)>=200) && (analogRead(A6)<200) )
        {
          Motor(spl,0);
        }
     else if( (analogRead(A0)<200) && (analogRead(A2)<200) )
        {
          do
            {
              Motor(spl,spr);
            }
           while  ( analogRead(A0)<200 );
             
          break;
        }
     else if( (analogRead(A6)<200) && (analogRead(A2)<200) )
        {
          do
            {
              Motor(spl,spr);
            }
           while  ( analogRead(A6)<200 );
           
          break;
        }        
     }
     
     //Motor(0,0);
     delay(10);
  }

void FL(int spl, int spr)   //  เดินตามเส้น ถึงแยกให้หยุด
  {
   while(1)
     {
      
      if( (analogRead(A0)>=200) && (analogRead(A6)>=200) )
        {
          Motor(spl,spr);
        }
     else if( (analogRead(A0)<200) && (analogRead(A6)>=200) )
        {
          Motor(0,spr);
        }
     else if( (analogRead(A0)>=200) && (analogRead(A6)<200) )
        {
          Motor(spl,0);
        }
     else if( (analogRead(A0)<200) && (analogRead(A2)<200) )
        {
          Motor(30,30);
          delay(800);
          Motor(0,0);
          delay(100);
          do
            {
              Motor(-40,40);
            }
           while  ( analogRead(A0)>=200 );
           delay(100);
             
          break;
        }
     else if( (analogRead(A6)<200) && (analogRead(A2)<200) )
        {
          Motor(30,30);
          delay(800);
          Motor(0,0);
          delay(100);
          do
            {
              Motor(-40,40);
            }
           while  ( analogRead(A0)>=200 );
           delay(100);
             
          break;
        }        
     }
     
     Motor(0,0);
     delay(10);
  }

 void FR(int spl, int spr)   //  เดินตามเส้น ถึงแยกให้หยุด
  {
   while(1)
     {
      
      if( (analogRead(A0)>=200) && (analogRead(A6)>=200) )
        {
          Motor(spl,spr);
        }
     else if( (analogRead(A0)<200) && (analogRead(A6)>=200) )
        {
          Motor(0,spr);
        }
     else if( (analogRead(A0)>=200) && (analogRead(A6)<200) )
        {
          Motor(spl,0);
        }
     else if( (analogRead(A0)<200) && (analogRead(A2)<200) )
        {
          Motor(35,30);
          delay(800);
          Motor(0,0);
          delay(100);
          do
            {
              Motor(40,-40);
            }
           while  ( analogRead(A6)>=200 );
           delay(100);
             
          break;
        }
     else if( (analogRead(A6)<200) && (analogRead(A2)<200) )
        {
          Motor(35,30);
          delay(800);
          Motor(0,0);
          delay(100);
          do
            {
              Motor(40,-40);
            }
           while  ( analogRead(A6)>=200 );
           delay(100);
             
          break;
        }        
     }
     
     Motor(0,0);
     delay(10);
  }
