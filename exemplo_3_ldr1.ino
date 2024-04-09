// C++ code
//
const int pinLED = 13;
const int pinLDR = A0;
const int sensor_ref=500;

void setup(){
  pinMode(pinLED, OUTPUT);
  pinMode(pinLDR, INPUT);
  Serial.begin(9600);
  Serial.print("Arduino Inicializado");
}

void loop()
{
  float lum = analogRead(pinLDR);
  if (lum<sensor_ref){
    digitalWrite(pinLED, HIGH);
  	Serial.println("LED ligado");
  }
  else{
    digitalWrite(pinLED, LOW);
    Serial.println("LED desligado");
  }
  Serial.println("Leitura do sensor:");
  Serial.println(lum);
  delay(1000); // Wait for 1000 millisecond(s)
}