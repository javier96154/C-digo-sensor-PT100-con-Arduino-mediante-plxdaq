const int analogIn0 = A0;

int pinRead0 = 0;

float sensorValue0 = 0;
float temp0 = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("CLEARDATA");
  Serial.println("LABEL,Hora,Segundos,Resistencia,Temperatura");  //Etiquetas columnas excel
  Serial.println("RESETTIMER");
}


void loop() {
int sensorValue = analogRead(A0);
  pinRead0 = analogRead(analogIn0);
  sensorValue = ((pinRead0*1.304) -685.75);     //CALIBRACION: (valor Resistencia)*pendiente - intercepto 
  
  Serial.print ("DATA,TIME,TIMER,");
  Serial.print (pinRead0);
  Serial.print (",");
  Serial.println (sensorValue);
  delay(1000);
  }
