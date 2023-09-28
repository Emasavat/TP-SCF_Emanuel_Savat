void setup() {
  pinMode(8, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(13, INPUT);
  digitalWrite(10, HIGH);
  }

void loop() {
  if( digitalRead(13) == HIGH ){
      for(long int i = 0; i<500; i++){
        digitalWrite(8, LOW);
      }
      for(long int i = 0; i<500; i++){
        digitalWrite(8, HIGH);
      } 
  }
}
