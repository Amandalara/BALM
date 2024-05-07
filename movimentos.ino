void parar() {
  digitalWrite(RodaDireitaFrente_parafrente, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(RodaDireitaFrente_paratras, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(RodaEsquerdaFrente_parafrente, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(RodaEsquerdaFrente_paratras, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(RodaDireitaTras_parafrente, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(RodaDireitaTras_paratras, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(RodaEsquerdaTras_parafrente, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(RodaEsquerdaTras_paratras, LOW);   // turn the LED off by making the voltage LOW

}

  //Frente
void frente(){

  digitalWrite(RodaDireitaFrente_parafrente, HIGH);   
  digitalWrite(RodaDireitaFrente_paratras, LOW);   
  digitalWrite(RodaEsquerdaFrente_paratras, LOW);
  digitalWrite(RodaEsquerdaFrente_parafrente, HIGH);
  digitalWrite(RodaDireitaTras_parafrente, HIGH);   
  digitalWrite(RodaDireitaTras_paratras, LOW);
  digitalWrite(RodaEsquerdaTras_paratras, LOW);
  digitalWrite(RodaEsquerdaTras_parafrente, HIGH); 

  analogWrite(ENA, 130);
  analogWrite(ENB, 130);
  analogWrite(ENC, 130);
  analogWrite(END, 130);  
}
void tras() {

  digitalWrite(RodaDireitaFrente_parafrente, LOW);   
  digitalWrite(RodaDireitaFrente_paratras,HIGH );   
  digitalWrite(RodaEsquerdaFrente_parafrente, LOW);   
  digitalWrite(RodaEsquerdaFrente_paratras, HIGH);   
  digitalWrite(RodaDireitaTras_parafrente, LOW);   
  digitalWrite(RodaDireitaTras_paratras, HIGH);   
  digitalWrite(RodaEsquerdaTras_parafrente, LOW);   
  digitalWrite(RodaEsquerdaTras_paratras, HIGH);   

  analogWrite(ENA, 130);
  analogWrite(ENB, 130);
  analogWrite(ENC, 130);
  analogWrite(END, 130);
}

void direita() {
  digitalWrite(RodaDireitaFrente_parafrente, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(RodaDireitaFrente_paratras, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(RodaEsquerdaFrente_parafrente, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(RodaEsquerdaFrente_paratras, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(RodaDireitaTras_parafrente, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(RodaDireitaTras_paratras, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(RodaEsquerdaTras_parafrente, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(RodaEsquerdaTras_paratras, HIGH);   // turn the LED off by making the voltage LOW

  analogWrite(ENA, 130);
  analogWrite(ENB, 130);
  analogWrite(ENC, 130);
  analogWrite(END, 130);
}

void esquerda() {
  digitalWrite(RodaDireitaFrente_parafrente, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(RodaDireitaFrente_paratras, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(RodaEsquerdaFrente_parafrente, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(RodaEsquerdaFrente_paratras, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(RodaDireitaTras_parafrente, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(RodaDireitaTras_paratras, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(RodaEsquerdaTras_parafrente, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(RodaEsquerdaTras_paratras, LOW);   // turn the LED off by making the voltage LOW

  analogWrite(ENA, 130);
  analogWrite(ENB, 130);
  analogWrite(ENC, 130);
  analogWrite(END, 130);
}

void direita_diagonal(){
  digitalWrite(RodaDireitaFrente_parafrente, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(RodaDireitaFrente_paratras, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(RodaEsquerdaFrente_parafrente, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(RodaEsquerdaFrente_paratras, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(RodaDireitaTras_parafrente, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(RodaDireitaTras_paratras, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(RodaEsquerdaTras_parafrente, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(RodaEsquerdaTras_paratras, LOW);   // turn the LED off by making the voltage LOW

}

void esquerda_diagonal(){
  digitalWrite(RodaDireitaFrente_parafrente, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(RodaDireitaFrente_paratras, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(RodaEsquerdaFrente_parafrente, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(RodaEsquerdaFrente_paratras, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(RodaDireitaTras_parafrente, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(RodaDireitaTras_paratras, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(RodaEsquerdaTras_parafrente, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(RodaEsquerdaTras_paratras, LOW);   // turn the LED off by making the voltage LOW

}