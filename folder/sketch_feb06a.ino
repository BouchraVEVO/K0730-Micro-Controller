int led = 8;
int k = 0; 


void setup() {
  // put your setup code here, to run once:
  pinMode (led, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led,HIGH);
  delay(5000);
  digitalWrite(led, LOW);
  delay(5000);

  
  
  
}
