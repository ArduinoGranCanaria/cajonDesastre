int ledPin = 10; // Salida LED en el PIN 10
byte parpadeo[] = {180, 30, 255, 200, 10, 90, 150, 60}; // array de 8 valores diferentes
void setup(){
  pinMode(ledPin, OUTPUT); //configuralasalidaPIN10
}
void loop(){
  for(int i=0; i<8; i++)
  {
    analogWrite(ledPin, parpadeo[i]); // escribe en la salida PIN 10 el valor al que apunta i dentro del array parpadeo[]
    delay(200); // espera 200ms
  }
} 
