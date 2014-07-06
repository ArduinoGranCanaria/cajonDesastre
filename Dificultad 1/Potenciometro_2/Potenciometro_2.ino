
// Variables.                                                                                                                                                                                                                                              
int pinPot=0;//Declaramos el pin de lectura.
float valorPot;//Declaramos la variable de lectura.
float volt;
int digital;

// Incializacion
void setup(){
  // Incializamos la bblioteca Serial.
  Serial.begin(9600);
  pinMode(3,OUTPUT);
}

// Bucle
void loop(){
  // Obtenemos el valor del potenciometro.
  valorPot=analogRead(pinPot);
  // Conversion a voltaje.
  volt=valorPot/1023*5.0;
  // Decimos el valor al pin 3.
  digital=valorPot/4;
  analogWrite(3,digital);
  // Imprimimos el valor del potenciometro.
  Serial.println(volt,3);
  delay(200);
}
