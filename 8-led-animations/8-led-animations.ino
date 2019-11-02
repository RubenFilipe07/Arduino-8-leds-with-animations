int tempo = 90;

int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int led6 = 7;
int led7 = 8;
int led8 = 9;


void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
}

void loop()
{
  for(byte s1 = 0; s1 < 6; s1++)              
  {
    digitalWrite(led1, HIGH);
    delay(tempo);
    digitalWrite(led1, LOW);
    
    digitalWrite(led2, HIGH);
    delay(tempo);
    digitalWrite(led2, LOW);
    
    digitalWrite(led3, HIGH);
    delay(tempo);
    digitalWrite(led3, LOW);
    
    digitalWrite(led4, HIGH);
    delay(tempo);
    digitalWrite(led4, LOW);
    
    digitalWrite(led5, HIGH);
    delay(tempo);
    digitalWrite(led5, LOW);
    
    digitalWrite(led6, HIGH);
    delay(tempo);
    digitalWrite(led6, LOW);
    
    digitalWrite(led7, HIGH);
    delay(tempo);
    digitalWrite(led7, LOW);
    
    digitalWrite(led8, HIGH);
    delay(tempo);
    digitalWrite(led8, LOW);
  }
  
  for( byte s2 = 0; s2 < 6; s2++)
  { 
    digitalWrite(led8, HIGH);
    delay(tempo);
    digitalWrite(led8, LOW);
    
    digitalWrite(led7, HIGH);
    delay(tempo);
    digitalWrite(led7, LOW);
    
    digitalWrite(led6, HIGH);
    delay(tempo);
    digitalWrite(led6, LOW);
    
    digitalWrite(led5, HIGH);
    delay(tempo);
    digitalWrite(led5, LOW);
    
    digitalWrite(led4, HIGH);
    delay(tempo);
    digitalWrite(led4, LOW);
    
    digitalWrite(led3, HIGH);
    delay(tempo);
    digitalWrite(led3, LOW);
    
    digitalWrite(led2, HIGH);
    delay(tempo);
    digitalWrite(led2, LOW);
    
    digitalWrite(led1, HIGH);
    delay(tempo);
    digitalWrite(led1, LOW);
  }
  
  for( byte s3 = 0; s3 < 6; s3++)
  {
    digitalWrite(led1, HIGH);
    delay(tempo);
    digitalWrite(led1, LOW);
    
    digitalWrite(led2, HIGH);
    delay(tempo);
    digitalWrite(led2, LOW);
    
    digitalWrite(led3, HIGH);
    delay(tempo);
    digitalWrite(led3, LOW);
    
    digitalWrite(led4, HIGH);
    delay(tempo);
    digitalWrite(led4, LOW);
    
    digitalWrite(led5, HIGH);
    delay(tempo);
    digitalWrite(led5, LOW);
    
    digitalWrite(led6, HIGH);
    delay(tempo);
    digitalWrite(led6, LOW);
    
    digitalWrite(led7, HIGH);
    delay(tempo);
    digitalWrite(led7, LOW);
    
    digitalWrite(led8, HIGH);
    delay(tempo);
    digitalWrite(led8, LOW);
    
    digitalWrite(led7, HIGH);
    delay(tempo);
    digitalWrite(led7, LOW);
    
    digitalWrite(led6, HIGH);
    delay(tempo);
    digitalWrite(led6, LOW);
    
    digitalWrite(led5, HIGH);
    delay(tempo);
    digitalWrite(led5, LOW);
    
    digitalWrite(led4, HIGH);
    delay(tempo);
    digitalWrite(led4, LOW);
    
    digitalWrite(led3, HIGH);
    delay(tempo);
    digitalWrite(led3, LOW);
    
    digitalWrite(led2, HIGH);
    delay(tempo);
    digitalWrite(led2, LOW);
  }
  
  for( byte s4 = 0; s4 < 6; s4++)
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    delay(100);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    delay(100);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    delay(100);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    delay(100);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    delay(100);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    delay(100);
  
    digitalWrite(led5, HIGH);
    digitalWrite(led6, HIGH);
    digitalWrite(led7, HIGH);
    digitalWrite(led8, HIGH);
    delay(100);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    delay(100);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, HIGH);
    digitalWrite(led7, HIGH);
    digitalWrite(led8, HIGH);
    delay(100);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    delay(100);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, HIGH);
    digitalWrite(led7, HIGH);
    digitalWrite(led8, HIGH);
    delay(100);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    delay(100);
  }
  
  for( byte s5 = 0; s5 < 6; s5++)
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    
    digitalWrite(led5, HIGH);
    digitalWrite(led6, HIGH);
    digitalWrite(led7, HIGH);
    digitalWrite(led8, HIGH);
    delay(500);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
  }
  
  for( byte s6 = 0; s6 < 12; s6++)
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led8, HIGH);
    delay(150);
    digitalWrite(led1, LOW);
    digitalWrite(led8, LOW);
    
    digitalWrite(led2, HIGH);
    digitalWrite(led7, HIGH);
    delay(150);
    digitalWrite(led2, LOW);
    digitalWrite(led7, LOW);
    
    digitalWrite(led3, HIGH);
    digitalWrite(led6, HIGH);
    delay(150);
    digitalWrite(led3, LOW);
    digitalWrite(led6, LOW);
    
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
    delay(150);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
  }
  
  for( byte s7 = 0; s7 < 12; s7++)
  {
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
    delay(150);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    
    digitalWrite(led3, HIGH);
    digitalWrite(led6, HIGH);
    delay(150);
    digitalWrite(led3, LOW);
    digitalWrite(led6, LOW);
    
    digitalWrite(led2, HIGH);
    digitalWrite(led7, HIGH);
    delay(150);
    digitalWrite(led2, LOW);
    digitalWrite(led7, LOW);
    
    digitalWrite(led1, HIGH);
    digitalWrite(led8, HIGH);
    delay(150);
    digitalWrite(led1, LOW);
    digitalWrite(led8, LOW);
  }
  
  for( byte s8 = 0; s8 < 12; s8++)
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led8, HIGH);
    delay(150);
    digitalWrite(led1, LOW);
    digitalWrite(led8, LOW);
    
    digitalWrite(led2, HIGH);
    digitalWrite(led7, HIGH);
    delay(150);
    digitalWrite(led2, LOW);
    digitalWrite(led7, LOW);
    
    digitalWrite(led3, HIGH);
    digitalWrite(led6, HIGH);
    delay(150);
    digitalWrite(led3, LOW);
    digitalWrite(led6, LOW);
    
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
    delay(150);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    
    digitalWrite(led3, HIGH);
    digitalWrite(led6, HIGH);
    delay(150);
    digitalWrite(led3, LOW);
    digitalWrite(led6, LOW);
    
    digitalWrite(led2, HIGH);
    digitalWrite(led7, HIGH);
    delay(150);
    digitalWrite(led2, LOW);
    digitalWrite(led7, LOW);
  }
}
