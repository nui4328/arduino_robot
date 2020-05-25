void read_sensor()
    {
     Serial.print("A0:");
     Serial.print(analogRead(A0));
     Serial.print(" A1:");
     Serial.print(analogRead(A1));
     Serial.print(" A2:");
     Serial.print(analogRead(A2));
     Serial.print(" A3:");
     Serial.print(analogRead(A3));
     Serial.print(" A6:");
     Serial.println(analogRead(A6));
     delay(100);
     
    }
