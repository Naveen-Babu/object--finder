void setup() {
  
  // put your setup code here, to run once:
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(8,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(9,10);
  delay(2000);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(9,500);
  delay(2000);
  

}
