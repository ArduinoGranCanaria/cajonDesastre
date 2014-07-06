//Declaración de variables.
int pinLED = 12;//Pin para el LED.
String cadena;//Cadena de lectura del serial.

//Inicio del Sistema.
void setup() {
  //Activando el pin del LED en modo escritura.
  pinMode(pinLED, OUTPUT);
  //Iniciar el Serial.
  Serial.begin(9600);
}

void loop() {
  //Esperar que hya datos del Serial.
  if (Serial.available()){
    //Cuando haya datos leemos la cadena.
    cadena = Serial.readString();
    Serial.println(cadena);//Imprime por pantalla la cadena.
    //Si la cadena es "encender", encendemos el LED.
    if(cadena=="on"){
      digitalWrite(pinLED, HIGH);
      
    }
    //Si la cadena es "apagar", encendemos el LED.
    if(cadena=="off"){
      digitalWrite(pinLED, LOW);
    }//Cerramos el if off.
  }//Cerramos el if serial.available.
}//Cerramos el void loop.
