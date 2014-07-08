int entrada=0;
float resultado=0.00;
int naranja,azul,verde;
float naranjaV,azulV,verdeV;
int anagNaranja=0;
int anagNAzul=1;
int anagVerde=2;

float aVoltios(int entrada){
  analogRead(entrada);
  resultado=entrada*5/1023;
  return(resultado);
}


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly: 
  naranja=entrada=analogRead(anagNaranja);
  azul=entrada=analogRead(anagNAzul);
  verde=entrada=analogRead(anagVerde);
  
  naranjaV=aVoltios(naranja);
  azulV=aVoltios(azul);
  verdeV=aVoltios(verde);
 
  Serial.print("verde: ");  Serial.print(verdeV);Serial.print("V\t");
  Serial.print("azul: "); Serial.print(azulV);  Serial.print("V\t");
  Serial.print("naranja: "); Serial.print(naranjaV);Serial.print("V\n");


}
