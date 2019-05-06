int bd;
int m11=11;
int m12=10;
int m21=9;
int m22=8;
void setup() 
{
Serial.begin(9600);
pinMode(m11,OUTPUT);
pinMode(m12,OUTPUT);
pinMode(m21,OUTPUT);
pinMode(m22,OUTPUT);
Stop();

}

void loop() {
if(Serial.available())
{
  bd=Serial.read();
 Serial.println(bd);
  if(bd=='1')
  {
  Serial.println("forward");
  forward();
 delay(100);
  //Stop();
  }
  else if (bd=='2')
  {
    Serial.println("right");
    right();
   delay(100);
  //Stop();
  }
  else if (bd=='3')
  {Serial.println("back");
  backward();
 delay(100);
  //Stop();
  }
  else if(bd=='4')
  {
    Serial.println("left");
    left();
    delay(100);
  //Stop();
  }
 Stop();
 
}
}
void forward()
{
  digitalWrite(m11,HIGH);
  digitalWrite(m12,LOW);
  digitalWrite(m21,HIGH);
  digitalWrite(m22,LOW);
  
  
}
void backward()
{
  digitalWrite(m11,LOW);
  digitalWrite(m12,HIGH);
  digitalWrite(m21,LOW);
  digitalWrite(m22,HIGH);
}
void left()
{
  digitalWrite(m11,LOW);
  digitalWrite(m12,HIGH);
  digitalWrite(m21,HIGH);
  digitalWrite(m22,LOW);
}
void right()
{
  digitalWrite(m11,HIGH);
  digitalWrite(m12,LOW);
  digitalWrite(m21,LOW);
  digitalWrite(m22,HIGH);
}

void Stop()
{
  digitalWrite(m11,LOW);
  digitalWrite(m12,LOW);
  digitalWrite(m21,LOW);
  digitalWrite(m22,LOW);
}
