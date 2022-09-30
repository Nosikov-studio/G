void setup() {
  Serial.begin(9600);
  Serial.println("Hello world!!!");
  Serial.println("Как жизнь?");
  Serial.print("Апальсинов: "); Serial.println(10);
  Serial.print("Яблочек: "); Serial.println(20);
  String stroka="blablabla";
  Serial.println(stroka);
  float x=1.2565486448525;
  Serial.println(x, 3);
  int newval=128426;
  Serial.println(newval, DEC);
  Serial.println(newval, HEX);
  Serial.println(newval, OCT);
  Serial.println(newval, BIN);








}

void loop() {
  // put your main code here, to run repeatedly:

}
