     
float error=0, P=0, I=0, D=0, PID_value=0;
float previous_error=0,previous_I=0;  

int a0=0, a1=0, a2=0, a3=0, a4=0;

void run_pid(int spl, int spr, int kp ,int kd)
    {
     while
       {
          read_senser();
        
          P = error;              //  error  หามาให้ได้
          I = I + previous_I;
          D = error - previous_error;  
          previous_I=I;
          previous_error=error; 
      
          PID_value = (kp*P) + (0.0015*I) + (kd*D);  //  kp=20, p=-1,  10x(-1) = -20

          Motor( spl+PID_value,   spr - PID_value ); // (50+(-20), 50-(-20)) = (30, 70);
       }
    }
 void read_senser()
    {
       //Serial.println(error);
       a0 = analogRead(A0);
       a1 = analogRead(A1);
       a2 = analogRead(A2);
       a3 = analogRead(A3);
       a4 = analogRead(A6);

           if((a0<150)&&(a1>=150)&&(a2>150)&&(a3>=150)&&(a4>=150))  error=-4;
      else if((a0<150)&&(a1<150)&&(a2>150)&&(a3>=150)&&(a4>=150))   error=-3;
      else if((a0>=150)&&(a1<150)&&(a2>150)&&(a3>=150)&&(a4>=150))  error=-2;
      else if((a0>=150)&&(a1<150)&&(a2<150)&&(a3>=150)&&(a4>=150))  error=-1;
      else if((a0>=150)&&(a1>=150)&&(a2<150)&&(a3>=150)&&(a4>=150)) error=0;
      else if((a0>=150)&&(a1>=150)&&(a2<150)&&(a3<150)&&(a4>=150))  error=1;
      else if((a0>=150)&&(a1>=150)&&(a2>=150)&&(a3<150)&&(a4>=150)) error=2;
      else if((a0>=150)&&(a1>=150)&&(a2>=150)&&(a3<150)&&(a4<150))  error=3;
      else if((a0>=150)&&(a1>=150)&&(a2>=150)&&(a3>=150)&&(a4<150)) error=4;
      
    }
 
