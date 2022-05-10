int btn = 2;
const int ledpin = 16;
const int ledpinn = 17;
const int ledpinnn = 18;

void setup() {
  pinMode(ledpin, OUTPUT);
  pinMode(ledpinn, OUTPUT);
  pinMode(ledpinnn, OUTPUT);

  Serial.begin(9600);
  pinMode(btn, INPUT);
  // put your setup code here, to run once:

}

void loop() {
  int  stat = digitalRead(btn);
  Serial.println(digitalRead(ledpin) );
  Serial.println(digitalRead(ledpinn) );
  Serial.println(digitalRead(ledpinnn) );
  if (stat ==1 ) {

    digitalWrite(16, HIGH);
    digitalWrite(17, HIGH);
    digitalWrite(18, HIGH);
    delay(150);
    digitalWrite(16, LOW);
    digitalWrite(17, LOW);
    digitalWrite(18, LOW);
  }
}
