// Pines de los sensores ultrasonicos
const int trig1Pin = A0;
const int trig2Pin = A1;
const int echo1Pin = A2;
const int echo2Pin = A3;

// Pines de bocina, vibrador y led
const int buzzPin = 6;
const int vibePin = 7;
const int ledPin = 8;

void setup() {
  pinMode(trig1Pin, OUTPUT);
  pinMode(trig2Pin, OUTPUT);
  pinMode(echo1Pin, INPUT);
  pinMode(echo2Pin, INPUT);

  pinMode(buzzPin, OUTPUT);
  pinMode(vibePin, OUTPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Disparo a ambos sensores
  digitalWrite(trig1Pin, LOW);
  digitalWrite(trig2Pin, LOW);
  delayMicroseconds(2);
  digitalWrite(trig1Pin, HIGH);
  digitalWrite(trig2Pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig1Pin, LOW);
  digitalWrite(trig2Pin, LOW);

  // Lectura de eco
  long duration1 = pulseIn(echo1Pin, HIGH, 25000);
  long duration2 = pulseIn(echo2Pin, HIGH, 25000);

  // Si no responde, asignamos distancia máxima
  if (duration1 == 0) duration1 = 99999;
  if (duration2 == 0) duration2 = 99999;

  float distance1 = duration1 * 0.034 / 2;
  float distance2 = duration2 * 0.034 / 2;

  float minDistance = min(distance1, distance2);

  if (minDistance > 100) {
    alert(0);
  } else if (minDistance >= 30) {
    alert(1);
  } else if (minDistance >= 0) {
    alert(2);
  }
}

void alert(int level) {
  if (level == 0) {
    digitalWrite(vibePin, LOW);
    digitalWrite(buzzPin, LOW);
    digitalWrite(ledPin, LOW);
  }
  else if (level == 1) {
    digitalWrite(vibePin, LOW);
    digitalWrite(buzzPin, HIGH);
    digitalWrite(ledPin, HIGH);
    delay(50);
    digitalWrite(buzzPin, LOW);
    digitalWrite(ledPin, LOW);
    delay(100);
  }
  else if (level == 2) {
    digitalWrite(buzzPin, HIGH);
    digitalWrite(vibePin, HIGH);
    digitalWrite(ledPin, HIGH);
    delay(50);
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzPin, LOW);
    delay(25);
  }
}
