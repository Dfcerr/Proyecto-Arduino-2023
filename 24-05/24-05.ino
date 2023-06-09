#define pin1 6
#define pin2 5
#define pin3 3
#define pin4 9
#define potx 0
#define poty 1
#define debug(a) Serial.println(a);
int valorPotx=0;
int valorPoty=0;

void setup() {
  Serial.begin(9600);
  pinMode(pin1, OUTPUT);    
  pinMode(pin2, OUTPUT);  
  pinMode(pin3, OUTPUT);  
  pinMode(pin4, OUTPUT);

}
void loop() {
  lectura();
  joystick();
}
void lectura(){
  valorPotx = analogRead(potx);
  valorPoty = analogRead(poty);
}

void joystick(){if(valorPotx < 508){
    analogWrite(pin1, map(valorPotx, 508, 0, 0, 255));
    analogWrite(pin2, 0);
  } 
  else if (valorPotx > 512) {
  
    analogWrite(pin2, map(valorPotx, 512, 1023, 0, 255)); 
    analogWrite(pin1, 0); 
  }
  else {
    analogWrite(pin1, 0); 
    analogWrite(pin2, 0); }

  if(valorPoty < 504){
    analogWrite(pin3, map(valorPoty, 508, 0, 0, 255));
    analogWrite(pin4, 0);
  } 
  else if (valorPoty > 508)  {
    analogWrite(pin4, map(valorPoty, 508, 1023, 0, 255)); 
    analogWrite(pin3, 0); 
  }
  else {
  analogWrite(pin4, 0); 
    analogWrite(pin3, 0);
  }
}

 