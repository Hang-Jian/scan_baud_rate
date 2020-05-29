
void setup(){
  pinMode(13,OUTPUT);

  Serial.begin(9600);
  Serial.print("AT+BAUD8");
  digitalWrite(HIGH,13);
  delay(500);
  digitalWrite(LOW,13);
  delay(500);

  Serial.begin(115200);
  Serial.print("AT+BAUD8");
  digitalWrite(HIGH,13);
  delay(500);
  digitalWrite(LOW,13);
  delay(500);

  Serial.begin(57600);
  Serial.print("AT+BAUD8");
  digitalWrite(HIGH,13);
  delay(500);
  digitalWrite(LOW,13);
  delay(500);

  Serial.begin(14400);
  Serial.print("AT+BAUD8");
  digitalWrite(HIGH,13);
  delay(500);
  digitalWrite(LOW,13);
  delay(500);

  Serial.begin(19200);
  Serial.print("AT+BAUD8");
  digitalWrite(HIGH,13);
  delay(500);
  digitalWrite(LOW,13);
  delay(500);

  Serial.begin(28800);
  Serial.print("AT+BAUD8");
  digitalWrite(HIGH,13);
  delay(500);
  digitalWrite(LOW,13);
  delay(500);

  Serial.begin(38400);
  Serial.print("AT+BAUD8");
  digitalWrite(HIGH,13);
  delay(500);
  digitalWrite(LOW,13);
  delay(500);

}

void loop(){
  Serial.println("123");
  digitalWrite(HIGH,13);
  delay(200);
  digitalWrite(LOW,13);
  delay(200);
}
