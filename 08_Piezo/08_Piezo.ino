#define C1 130
#define C1s 138
#define D1 146
#define D1s 155
#define E1 164
#define F1 174
#define F1s 184
#define G1 195
#define G1s 207
#define A1 220
#define A1s 233
#define B1 246

#define C2 261
#define C2s 277
#define D2 293
#define D2s 311
#define E2 329
#define F2 349
#define F2s 369
#define G2 391
#define G2s 415
#define A2 440
#define A2s 466
#define B2 493

#define C3 523
#define C3s 554
#define D3 587
#define D3s 622
#define E3 659
#define F3 698
#define F3s 739
#define G3 783
#define G3s 830
#define A3 880
#define A3s 932
#define B3 987

int buzzerPin = 3;
const int melody[] = {D2,C2,B1,C2,B1,C2,B1,C2,A2,G2,F2s,G2,F2s,G2,F2s,G2,G2s,A2,C3,B2,D3,C3,B2,A2,A2,G2,E3,D3,C3,B2,A2,G2,G2,F2,D3,C3,B2,A2,G2,F2,F2,E2,C3,B2,A2,G2,F2,E2,D2,A2,G2,B1,C2};

void setup()
{
  pinMode(buzzerPin, OUTPUT);
}

void loop()
{
//  analogWrite(buzzerPin, 64);
//  delay(1000);
//
//  analogWrite(buzzerPin, 128);
//  delay(1000);
// 
//  analogWrite(buzzerPin, 192);
//  delay(1000); 
//
//  analogWrite(buzzerPin, melody[0]);
//  delay(1000);
//  
//  analogWrite(buzzerPin, melody[1]);
//  delay(1000);
//
//  analogWrite(buzzerPin, melody[2]);
//  delay(1000);
//
//  analogWrite(buzzerPin, melody[3]);
//  delay(1000);
//
//  analogWrite(buzzerPin, melody[4]);
//  delay(1000);
//
//  analogWrite(buzzerPin, melody[5]);
//  delay(1000);
//  
//  analogWrite(buzzerPin, melody[6]);
//  delay(1000);
//
//  analogWrite(buzzerPin, melody[7]);
//  delay(1000);

  // tone(피에조 핀 번호, 주파수, 진동을 발생시키는 시간)
  // : 주파수에 해당하는 음계 출력
//  tone(buzzerPin, meolody[0], 500);
//  delay(1000);
//
//  tone(buzzerPin, meolody[1], 500);
//  delay(1000);
//
//  tone(buzzerPin, meolody[2], 500);
//  delay(1000);
//
//  tone(buzzerPin, meolody[3], 500);
//  delay(1000);
//
//  tone(buzzerPin, meolody[4], 500);
//  delay(1000);
//        
//  tone(buzzerPin, meolody[5], 500);
//  delay(1000);
//
//  tone(buzzerPin, meolody[6], 500);
//  delay(1000);  
//
//  tone(buzzerPin, meolody[7], 500);
//  delay(1000); 

  for(int i = 0; i < 53; i++){
    tone(buzzerPin, melody[i], 50);
    if(i > 48){
      tone(buzzerPin, melody[i], 1000);  
    }
    delay(100);
  }

  delay(1000);


}
