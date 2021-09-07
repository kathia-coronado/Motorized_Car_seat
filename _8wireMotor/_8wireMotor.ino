int bluePin=2;
int pinkPin=3;
int yellowPin=4;
int orangePin=5;
int currentStep=0;

void setup() {
  // put your setup code here, to run once:
pinMode(bluePin,OUTPUT);
pinMode(pinkPin,OUTPUT);
pinMode(yellowPin,OUTPUT);
pinMode(orangePin,OUTPUT);

digitalWrite (bluePin,LOW);
digitalWrite (pinkPin,LOW);
digitalWrite (yellowPin,LOW);
digitalWrite (orangePin,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
switch(currentStep) {
  case 0:
    digitalWrite (bluePin,HIGH);
    digitalWrite (pinkPin,LOW);
    digitalWrite (yellowPin,LOW);
    digitalWrite (orangePin,LOW);
    break;
  case 1:
    digitalWrite (bluePin,LOW);
    digitalWrite (pinkPin,HIGH);
    digitalWrite (yellowPin,LOW);
    digitalWrite (orangePin,LOW);
    break;
  case 2:
    digitalWrite (bluePin,LOW);
    digitalWrite (pinkPin,LOW);
    digitalWrite (yellowPin,HIGH);
    digitalWrite (orangePin,LOW);
    break;
  case 3:
    digitalWrite (bluePin,LOW);
    digitalWrite (pinkPin,LOW);
    digitalWrite (yellowPin,LOW);
    digitalWrite (orangePin,HIGH);
  break;
}  
  currentStep=(++currentStep<4)? currentStep:0;

  delay(250);
}
