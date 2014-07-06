//Definición de variables:
int pinBoton = 9;//Definir el pin a utilizar
int pinLed =12;
int estadoBoton;//Estado del botón
int estadoAnterior = -1;
int estadoLed = 0;
int contadorPulsaciones = 0;

// Inicialización del sistema:
void setup() {
  //Activar el pin para lectura
  pinMode(pinBoton, INPUT);
  pinMode(pinLed, OUTPUT);
  //Activar la comunicación Serial
  Serial.begin(9600);
}

// Bucle principal:
void loop() {
  //Lectura del estado del pin
  estadoBoton = digitalRead(pinBoton);
  if (estadoBoton != estadoAnterior){
    if (estadoBoton == LOW){
      //Cambiar el estado del led
      if(estadoLed == HIGH){
        estadoLed = LOW;
      }
      else {
        estadoLed = HIGH;
      }
      Serial.println(contadorPulsaciones);
    }
    //Lógica encendido y apagado
    estadoAnterior = estadoBoton;
  }
}
