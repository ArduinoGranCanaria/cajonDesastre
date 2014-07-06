//Declaración de variables
int valor;
float volt;

//Inicialización del sistema
void setup() {
  Serial.begin(9600);
  Serial.print("Hola Mundo");
}

void loop() {
  //Leer el pin analógico
valor = analogRead(0);

//Cálculo del voltaje
volt = valor * 5 / 1023.0;

//Mostrar el valor del voltaje
Serial.println(volt);

}
