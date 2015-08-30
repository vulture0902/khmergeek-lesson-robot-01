int led_pin = 13;
int sensor_val;

void setup(){
  pinMode(led_pin, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  sensor_val = analogRead(0); //analogRead(A0);
  Serial.println(sensor_val);
  if(sensor_val > 0){
    digitalWrite(led_pin,HIGH);
  }else{
    digitalWrite(led_pin,LOW);
  }
}
