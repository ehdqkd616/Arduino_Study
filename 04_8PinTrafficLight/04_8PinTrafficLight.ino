int pin6 = 6;
int pin8 = 8;
int pin11= 11;

void setup()
{
  pinMode(pin6, OUTPUT);
  pinMode(pin8, OUTPUT);
  pinMode(pin11, OUTPUT);

}

void loop() 
{
  traffic();
}

void traffic(){
  
  digitalWrite(pin8, HIGH);
  delay(3000); 
  digitalWrite(pin8, LOW);
  
  digitalWrite(pin6, HIGH);
  delay(5000); 
  
  digitalWrite(pin8, HIGH);
  delay(2000);
  
  digitalWrite(pin6, LOW);
  digitalWrite(pin8, LOW);
  digitalWrite(pin11, HIGH);
  delay(15000);
  digitalWrite(pin11, LOW);
  
}
