int input='0'; //input to be used
String input2; //variable for string input
const int analogInPin = A0;
int sensorValue = 0; 

void setup() {
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  Serial.begin(9600);
 }

void loop() {
 if(Serial.available()>0)
 {
  input = Serial.read();
 }
 
// forward
 if(input == '1')
  {
  digitalWrite(13,HIGH);
   digitalWrite(12,LOW);
   }
 else if(input == '2') //back
  {
   digitalWrite(13,LOW);
   digitalWrite(12,HIGH);
  }
 else if(input == '0')
  {
   digitalWrite(13,LOW);     //Stop
   digitalWrite(12,LOW);  
  } 
   sensorValue = analogRead(analogInPin);            
   float voltage = sensorValue * (5.0 / 1023.0);
   Serial.println(voltage);     
   delay (150);            
}

