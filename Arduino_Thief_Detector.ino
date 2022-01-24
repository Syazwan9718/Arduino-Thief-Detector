//code by @Syazztronic
//Thief Detector source code

int sensor = 7;
int ledpin =8;
int buzzer =9;

void setup() {             
pinMode(sensor, INPUT);    //declare sensor as input    //isytihar sensor sebagai input
pinMode(ledpin, OUTPUT);   //declare led as Output      //isytihar led sebagai output
pinMode(buzzer,OUTPUT);    //declare buzzer as Output   //isytihar buzzer sebagai Output

delay(10000); //calibrate sensor//stabilkan sensor
//after calibrate the sensor the led will turn on for 3 second as sign as ready
//setelah sensor sudah stabil ,led akan menyala selama 3 saat sebagai tanda sudah bersedia
digitalWrite(ledpin,HIGH);
delay(3000);
digitalWrite(ledpin,LOW);
}

void loop() {
if(digitalRead(sensor) == HIGH){   
  digitalWrite(ledpin,HIGH);
  digitalWrite(buzzer,HIGH);
  delay(1000);
  digitalWrite(ledpin,LOW);
  digitalWrite(buzzer,LOW);
  }else{
    digitalWrite(buzzer,LOW);
    digitalWrite(ledpin,LOW);
  }
}



  
