#include "SoftwareSerial.h"
char val;
void setup() {
  pinMode(10,OUTPUT);
  Serial.begin(9600);

}

void loop() {

  if(Serial.available()){
    val = Serial.read();
    Serial.println(val);
  }
  if(val=='0'){
    digitalWrite(10,LOW);
  }
  else if(val=='1'){
    digitalWrite(10,HIGH);
    delay(100);
    digitalWrite(10,LOW);
    delay(100);
  }
  delay(100);
 
}
