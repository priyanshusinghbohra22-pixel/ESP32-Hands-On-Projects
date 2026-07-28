const int trig = 23;
const int echo = 22;
const int red = 21;
const int green = 19;
const int blue = 18;
const int buzzer = 15;

void setup()
{
  Serial.begin(115200);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(red,OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(buzzer,OUTPUT);
}

void loop() 
{
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  long duration = pulseIn(echo,HIGH);
  float distance = duration * 0.0343/2;
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm"); 

  if (distance > 30 )
  {
    digitalWrite(green, HIGH);
    digitalWrite(red, LOW);
    digitalWrite(blue,LOW);
    digitalWrite(buzzer, LOW);
  }
  else if (distance < 30 && distance > 20)
  {
    digitalWrite(red, HIGH);
    digitalWrite(green, HIGH);
    digitalWrite(blue,LOW);
    digitalWrite(buzzer, LOW);
  }
  else if (distance < 20 && distance > 10)
  {
    digitalWrite(red, HIGH);
    digitalWrite(green,LOW);
    digitalWrite(blue, LOW);
    digitalWrite(buzzer, LOW);
  }
  else
  {
    digitalWrite(buzzer, HIGH);
    digitalWrite(red, LOW);
    digitalWrite(blue, HIGH);
    digitalWrite(green, LOW);
  }
}

