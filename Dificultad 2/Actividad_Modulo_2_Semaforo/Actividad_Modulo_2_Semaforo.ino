int boton=2;
int verdePeaton=8;
int rojoPeaton=9;
int verdeCoche=10;
int amarilloCoche=11;
int rojoCoche=12;
int enabled=HIGH;

void setup(){
	pinMode(boton,INPUT);
	pinMode(verdePeaton,OUTPUT);
	pinMode(rojoPeaton,OUTPUT);
	pinMode(verdeCoche,OUTPUT);
	pinMode(amarilloCoche,OUTPUT);
	pinMode(rojoCoche,OUTPUT);

	estadoInicial();
}
 
void estadoInicial(){
	enabled=HIGH;
	digitalWrite(verdePeaton,LOW);
	digitalWrite(rojoPeaton,HIGH);
	digitalWrite(verdeCoche,HIGH);
	digitalWrite(amarilloCoche,LOW);
	digitalWrite(rojoCoche,LOW);
}


void semaforoNaranja(){
	digitalWrite(amarilloCoche,HIGH);
	digitalWrite(verdeCoche,LOW);
	delay(3000);
}

void pasoPeaton() {
	digitalWrite(verdePeaton,HIGH);
	digitalWrite(rojoPeaton,LOW);
	digitalWrite(verdeCoche,LOW);
	digitalWrite(amarilloCoche,LOW);
	digitalWrite(rojoCoche,HIGH);
	delay(10000);
}

void loop(){
        int pulsado;
	pulsado=digitalRead(boton);

	if (pulsado && enabled) {
		enabled=LOW;
		semaforoNaranja();
		pasoPeaton();
		estadoInicial();
	}
}   
