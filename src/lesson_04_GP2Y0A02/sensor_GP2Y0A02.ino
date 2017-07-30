void setup() {
  Serial.begin(9600);
}

void loop() {
  int value ;

  value = analogRead(0)  ;
  Serial.println(cal_dist(value));
  delay(500) ;
}

int cal_dist(int analogValue) {
  if (analogValue <  85 ) return(0) ; // 60cm
  if (analogValue >= 470) return(10); // 10cm
  if (analogValue >= 260) return(20); // 20cm(10-20cm)
  if (analogValue >= 165) return(30); // 30cm(20-30cm)
  if (analogValue >= 126) return(40); // 40cm(30-40cm)
  if (analogValue >= 105) return(50); // 50cm(40-50cm)
  if (analogValue >= 85 ) return(60); // 60cm(50-60cm)
}
