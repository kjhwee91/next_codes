int analogSENSOR = A0;
int LED = 9;
int sensorValue = 0;
float outputValue = 0;
void setup()
{
Serial.begin(9600);
}
void loop()
{
sensorValue = analogRead(analogSENSOR);
Serial.print("SENSOR VALUE: ");
Serial.println(sensorValue);
outputValue = map(sensorValue, 0, 1023, 0, 255);
analogWrite(LED,outputValue);
delay(100);
}

/* 확인용

int analogSENSOR = A0;
int LED = 9;
int sensorValue = 0;
float outputValue = 0;
void setup()
{
Serial.begin(9600);
}
void loop()
{
sensorValue = analogRead(analogSENSOR);
Serial.print("SENSOR VALUE: ");
Serial.println(sensorValue);
outputValue = map(sensorValue, 0, 1023, 0, 255);
analogWrite(LED,outputValue);
delay(100);
}

*/
