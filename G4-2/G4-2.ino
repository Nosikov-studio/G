void setup() {
  Serial.begin(9600);
  

}

void loop() {
  if (Serial.available()>0) {
    int in_data = Serial.parseInt(); // читаем с порта (пишем в порте руками)
    Serial.println(in_data); // и сразу отсылаем
    }

}
