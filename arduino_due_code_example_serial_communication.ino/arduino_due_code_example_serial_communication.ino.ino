void setup() {
  //Setup Serial Port with baud rate of 115200
  Serial.begin(115200);

}

void loop() {
  
  if(Serial.available() > 0){
    Serial.println((char)(Serial.read()));
  }

}

