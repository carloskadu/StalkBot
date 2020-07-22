const int buzzer = 8;
int VCCpin = 9;
float veloc;
unsigned int freq;

void setup() {
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
  pinMode(VCCpin, OUTPUT);
  veloc = 0;
  
}
void loop() {  
  if (Serial.available() > 0) {
    String data = Serial.readStringUntil('\n');
    Serial.println(data);
    veloc = data.toFloat();
    Serial.println(veloc);
    
    if (veloc < 0) {
      veloc = veloc * -1;
      }
    
    freq = 6000 * veloc;
    //abs(freq);
    Serial.println(freq);
    
    freq = map(veloc, -1, 1, 250, 6000);
    Serial.println(freq);
    
    if (veloc != 0 || veloc != 1000) {
      digitalWrite(VCCpin, HIGH);
      Serial.println(digitalRead(VCCpin));
      tone(buzzer, freq, 1000);
      Serial.println(digitalRead(buzzer));
      delay(1000);
      //noTone(buzzer);
      digitalWrite(VCCpin, LOW);
      Serial.println(digitalRead(VCCpin));
      delay(1000);
    }
  }
}
