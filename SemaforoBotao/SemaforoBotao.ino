int pinVermelho = 10;
int pinAmarelo = 9;
int pinVerde = 8;
int pinBotao = 7;

int faseSemaforo;

int estadoBotao;
void setup() {
  // put your setup code here, to run once:

pinMode(pinVerde, OUTPUT);
pinMode(pinVermelho, OUTPUT);
pinMode(pinAmarelo, OUTPUT);
pinMode(pinBotao, INPUT);

faseSemaforo = 1;

}

void loop() {
  // put your main code here, to run repeatedly:

estadoBotao = digitalRead(pinBotao);

if(estadoBotao == HIGH)
  { 
    if(faseSemaforo < 4){
      faseSemaforo = faseSemaforo + 1;
    }else{
      faseSemaforo = 1;
    }
    
  }

if(faseSemaforo == 1)
  {
    digitalWrite(pinVerde, HIGH);
    digitalWrite(pinAmarelo, LOW);
    digitalWrite(pinVermelho, LOW);
  }

if(faseSemaforo == 2)
  {
    digitalWrite(pinVerde, LOW);
    digitalWrite(pinAmarelo, HIGH);
    digitalWrite(pinVermelho, LOW);
  }


if(faseSemaforo == 3)
  {
    digitalWrite(pinVerde, LOW);
    digitalWrite(pinAmarelo, LOW);
    digitalWrite(pinVermelho, HIGH);
  }  
  
   delay(100);
}
