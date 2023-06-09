#include <EEPROM.h>
void setup() {
  Serial.begin(9600);
  leectura();
}

void loop(){
  
    
  delay(500);  
}
void leectura(){
  for (int columna=0;columna < 128;columna++){
    //EEPROM.read(columna);
    
    for (int k=0;k < 8;k++){
      Serial.print(k);
    Serial.print("\t");
    }
    Serial.println(" ");
    



}


}


    
  
