int pin = 8;

void setup() // 전원이 들어오면 가장 먼저 한 번만 실행하는 함수
{
  pinMode(pin, OUTPUT);
  // 특정 디지털 핀의 사용 목적 기술
  // 첫 번째 매개변수 : 핀 번호
  // 두 번째 매개변수 : 핀 사용 목적(입력 : INPUT/출력 : OUTPUT)
}

void loop() // 함수 안에 들어있는 명령들을 반복해서 실행하는 함수
{
  
  digitalWrite(pin, HIGH);
  // 출력 모드로 선언한 디지털 핀에 보낼 전압 결정
  // HIGH : 전압을 걸겠다, LOW : 전압을 걸지 않겠다.
  
  delay(1000); // Wait for 1000 millisecond(s)
  // 지연 시키는 함수 : 1000ms = 1s
  
  digitalWrite(pin, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
