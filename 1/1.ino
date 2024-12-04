const int sw = 2; 
const int x = 0; 
const int y =1; 
void setup() { 
  pinMode(sw , INPUT_PULLUP); 
  Serial.begin(9600); 
} 
void loop() { 
  Serial.print("switch : "); 
  Serial.print(digitalRead(sw)); 
  Serial.print("\t\t"); 
  Serial.print("VRx : "); 
  Serial.print(analogRead(x)); 
  Serial.print("\t\t "); 
  Serial.print("VRy : "); 
  Serial.println(analogRead(y)); 
 Serial.print("____"); 
 delay(500);}