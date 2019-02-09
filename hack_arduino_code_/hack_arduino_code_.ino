void setup() {
  // put your setup code here, to run once:
pinMode(7, INPUT);

Serial.begin(9600);
}
void loop() {
  if(digitalRead(7)==LOW)
  {Serial.println("LOW");
  }
  else{
    Serial.println("up");
    delay(500);
  }
  // put your main code here, to run repeatedly:

}
