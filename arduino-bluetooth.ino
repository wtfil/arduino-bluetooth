int LED_PIN = 13;

void setup() {
  Serial.begin(9600);
  Serial.print('AT');
  Serial.print('AT+PIN1234');
  pinMode(LED_PIN, OUTPUT);
}


void loop() {
  if (Serial.available() > 0){
  
    switch (Serial.read()) {
      case '0': digitalWrite(LED_PIN, LOW); break;
      case '1': digitalWrite(LED_PIN, HIGH); break;
    }
   
  }
 
  delay(200); 
}
