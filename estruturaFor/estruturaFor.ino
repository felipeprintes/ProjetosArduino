int pinLed[8] = {13,12,11,10, 9, 8, 7, 6};

void setup() {
  // put your setup code here, to run once:
int x;
for(x=0; x<=8; x+=1){
  pinMode(pinLed[x], OUTPUT);
}

}

void loop() {
  // put your main code here, to run repeatedly:

int numeroLed;
for(numeroLed = 0; numeroLed<=8; numeroLed+=1){
  digitalWrite(pinLed[numeroLed], HIGH);
  delay(200);
}

for(numeroLed = 8; numeroLed>=0; numeroLed-=1){
  digitalWrite(pinLed[numeroLed], LOW);
  delay(200);
}


}
