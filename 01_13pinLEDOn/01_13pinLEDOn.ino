void setup() // 전원이 들어오면 가장 먼저 한 번만 실행하는 함수
{
  pinMode(13, OUTPUT);
  // 특정 디지털 핀의 사용 목적 기술
  // 첫 번째 매개변수 : 핀 번호
  // 두 번째 매개변수 : 핀 사용 목적(입력 : INPUT/출력 : OUTPUT)
}

void loop() // 함수 안에 들어있는 명령들을 반복해서 실행하는 함수
{
  digitalWrite(13, HIGH);
}
