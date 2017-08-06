int   pin13 = 13;
int   pin12 = 12;
int   pin11 = 11;
int   pin10 = 10;

void setup(){
  pinMode(pin13, OUTPUT);
  pinMode(pin12, OUTPUT);
  pinMode(pin11, OUTPUT);
  pinMode(pin10, OUTPUT);
  Serial.begin(9600);
}

void go(){
  digitalWrite(pin13,HIGH);
  digitalWrite(pin12,LOW);
  digitalWrite(pin11,HIGH);
  digitalWrite(pin10,LOW);
  delay(500);
}
void back(){
  digitalWrite(pin13,HIGH);
  digitalWrite(pin12,LOW);
  digitalWrite(pin11,HIGH);
  digitalWrite(pin10,HIGH);
  delay(500);
}

void loop(){
  float value;
  float vol;
  value = analogRead(0);
  vol = value * 5 / 1023;
  Serial.println(vol);

  if (vol > 2.0){ 
    back();
  }
  else{ 
    go();
  }
}
