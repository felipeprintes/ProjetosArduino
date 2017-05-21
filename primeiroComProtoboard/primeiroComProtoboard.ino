void setup() {
  // put your setup code here, to run once:

  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  int intervaloPisca1;
  int intervaloPisca2; 
  intervaloPisca1 = 200;
  intervaloPisca2 = 500;

  digitalWrite(10,HIGH);
  digitalWrite(9, LOW);
  delay(intervaloPisca1);
  digitalWrite(10, LOW);
  digitalWrite(9,HIGH);
  delay(intervaloPisca2);

  
}
