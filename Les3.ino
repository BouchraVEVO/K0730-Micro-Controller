
int piezoPin = 6;

void setup() {
  // put your setup code here, to run once:
  pinMode (piezoPin, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
    tone(piezoPin, 2000, 1500);
    delay(1000);
    tone(piezoPin, 4000, 500);
     delay(800);
       tone(piezoPin, 3000, 500);
     delay(1000);
        tone(piezoPin, 5000, 500);
     delay(800);
        tone(piezoPin, 2000, 500);
     delay(1000);
            tone(piezoPin, 1000, 500);
     delay(800);
            tone(piezoPin, 5000, 500);
     delay(1000);
} 
