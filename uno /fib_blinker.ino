#define LedPin 13
unsigned int f0 = 0;
unsigned int f1 = 1;
void setup(){

Serial.begin(9600);
pinMode(LedPin,OUTPUT);
digitalWrite(LedPin,LOW);
}
void loop(){
  
  Serial.println(f0);
  delay(2000);
  int temp = f1; //temp = 1
  f1 = f1 + f0; // f1 = 1 + 1
  f0 = temp;    // f0 = 1
  
  int a = f0;
  while(a > 0){
      digitalWrite(LedPin,HIGH);
      delay(500);
      digitalWrite(LedPin,LOW);
      delay(500);
      a = a - 1;
  }
Serial.flush(); 
}
