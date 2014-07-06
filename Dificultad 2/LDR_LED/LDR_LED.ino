int pin=13;
float entrada=0.0;
float voltios=0.0;

void setup(){
  Serial.begin(9600);
}

float aVoltios(float entrada){
  float voltios;
  voltios=entrada*5/1023;
  return voltios;
}

void loop(){
  entrada=analogRead(0);
  voltios=aVoltios(entrada);
  Serial.println(voltios);
  if (voltios>1.8) {
    digitalWrite(pin,LOW);
  } else {
    digitalWrite(pin,HIGH);
  }
}
