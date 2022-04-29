
void setup() {
  Serial.begin(9600);
 
}

void loop() {

  int val  = analogRead(A0);

  float temp_celcius = val * (5.0 / 1023.0 * 100.0);

  Serial.println(temp_celcius);
  delay(200);
}
 
