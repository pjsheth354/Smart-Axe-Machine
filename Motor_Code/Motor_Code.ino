int relay=7;
int sensor=8;
int reading=0;
void setup() {
  pinMode(sensor,INPUT);
  pinMode(relay,OUTPUT);
  Serial.begin(9600);
}

//Used PIR Sensor and Arduino Uno R3 Board Atmega 328P. 12V Motor with LED Driver Adapter.

void loop() {
  reading = digitalRead(sensor);
  Serial.println(reading);
    if(reading==LOW)
    {
      digitalWrite(relay,LOW);
      //delay(5000);
      }
     else
     {
      digitalWrite(relay,HIGH);
      delay(10000);
      }
}
