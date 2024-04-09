//c++ code
const int botao = 2;
const int ledvermelho = 12;
const int ledverde = 11;
const int ledamarelo = 13;
const int ledverdep = 9; 
const int ledvermelhop = 10; 
 

void setup() {
	pinMode(ledvermelho, OUTPUT);
	pinMode(ledamarelo, OUTPUT);
	pinMode(ledverde, OUTPUT);
	pinMode(ledverdep, OUTPUT);
	pinMode(ledvermelhop, OUTPUT);
	pinMode(botao, INPUT);
  	
  	Serial.begin(9600);//inicialização da comunicação serial
  	Serial.println("Comunicacao Serial Inicializada");

	digitalWrite(ledverde, HIGH);
	digitalWrite(ledvermelhop, HIGH);
}
void loop() {

int estado_botao = digitalRead(botao); // detecta quando o botão for pressionado
if (estado_botao == HIGH) {
Serial.println("Botoeira pressionada!");
digitalWrite(ledamarelo, HIGH); // liga o LED amarelo
digitalWrite(ledverde, LOW); // desliga o LED verde
delay(1000); // Espera 2 segundos com o LED amarelo ligado
digitalWrite(ledamarelo, LOW); // Desliga o LED amarelo
digitalWrite(ledvermelho, HIGH); // Liga o LED vermelho para os motoristas
digitalWrite(ledverdep, HIGH); // Liga o LED verde para os pedestres
digitalWrite(ledvermelhop, LOW); // Desliga o LED vermelho para os pedestres
delay (5000); // Espera 5 segundos
digitalWrite(ledvermelhop, HIGH);
digitalWrite(ledverdep, LOW);
digitalWrite(ledvermelho, LOW); // Desliga o LED vermelho para os motoristas (inicia de novo o ciclo) 
digitalWrite(ledverde, HIGH);
Serial.println("Voltando ao estagio normal");
  }
}
