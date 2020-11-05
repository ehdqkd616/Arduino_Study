int pin = 8;
void setup() // 전원이 들어오면 가장 먼저 한 번만 실행하는 함수
{
  pinMode(pin, OUTPUT);
}

void loop() // 함수 안에 들어있는 명령들을 반복해서 실행하는 함수
{
//    onOff();
//    if(time <= 2000){
//       time += 100;
//    }

  for(int time = 100; time <= 2000; time += 100){
    onOff(time);
  }

}

void onOff(int time)
{
    digitalWrite(pin, HIGH);
    delay(time); // Wait for 1000 millisecond(s)
  
    digitalWrite(pin, LOW);
    delay(time); // Wait for 1000 millisecond(s)
}
