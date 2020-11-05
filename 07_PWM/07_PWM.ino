void setup()
{
  // pinMode(9, OUTPUT);
}

void loop()
{
  for(int i = 0; i <= 255; i++){
    analogWrite(9, i); // PWM 파형을 출력하는 함수
    delay(10);
  }
}
