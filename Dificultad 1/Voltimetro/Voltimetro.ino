// Inicialización de variables y constantes:
// Definir constante para la patilla analógica de lectura:
#define pinLectura 2
// Definir una variable para la lectura del pin analógico:
float valor;

void setup() {
  // Inicialización del sistema:
  Serial.begin(9600);
  analogReference(EXTERNAL);
  // Inicialización de la biblioteca:
}
// Bucle principal:
void loop() {
  // Leer un valor en el pin analógico:
  valor=analogRead(pinLectura);
  // Mostrarlo en el monitor serial:
  Serial.print(valor);
  Serial.print("   ---   ");
  Serial.println(valor*2.5/1024);
  // Pausa:
  delay(500);
}
