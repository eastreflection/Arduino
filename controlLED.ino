int anispeed = 250;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(anispeed); // Wait for anispeed millisecond(s)
  digitalWrite(13, LOW);
  delay(anispeed); // Wait for anispeed millisecond(s)
  digitalWrite(12, HIGH);
  delay(anispeed); // Wait for anispeed millisecond(s)
  digitalWrite(12, LOW);
  delay(anispeed); // Wait for anispeed millisecond(s)
  digitalWrite(11, HIGH);
  delay(anispeed); // Wait for anispeed millisecond(s)
  digitalWrite(11, LOW);
  delay(anispeed); // Wait for anispeed millisecond(s)
}
