int salida=0;
int estado=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(3,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly: 
  
  if(estado==0){
    salida++;
    if(salida==255){
      estado=1;
    }
  }
  else{
    salida --;
    if(salida==0){
      estado=0;
    }
  }
  analogWrite(3,salida);
  delay(4);
}
  

