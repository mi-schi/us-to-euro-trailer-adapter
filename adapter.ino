
void setup() {
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);

    pinMode(5, INPUT);
    pinMode(6, INPUT);
    pinMode(7, INPUT);

    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
}

void loop() {
  ani();
}
    
void sensoredDelay(int time) {
    unsigned long startTime = millis();
    while (millis() - startTime < time) {
        if ((digitalRead(6) == HIGH && digitalRead(5) == LOW) ||
            (digitalRead(6) == HIGH && digitalRead(7) == HIGH && digitalRead(5) == LOW) ||
            (digitalRead(5) == HIGH && digitalRead(6) == LOW)
        ) {
            digitalWrite(8, HIGH);
        }
        if (digitalRead(6) == LOW) {
            digitalWrite(8, LOW);
        }
        if ((digitalRead(7) == HIGH && digitalRead(5) == LOW) ||
            (digitalRead(6) == HIGH && digitalRead(7) == HIGH && digitalRead(5) == LOW) ||
            (digitalRead(5) == HIGH && digitalRead(7) == LOW)
        ) {
            digitalWrite(9, HIGH);
        }
        if (digitalRead(7) == LOW) {
            digitalWrite(9, LOW);
        }
    }
}

void ani() {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    sensoredDelay(1000);
    
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    sensoredDelay(500);
    
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    sensoredDelay(700);

    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    sensoredDelay(2000);

    digitalWrite(2, HIGH); sensoredDelay(700); digitalWrite(2, LOW); sensoredDelay(700);
    digitalWrite(2, HIGH); sensoredDelay(700); digitalWrite(2, LOW); sensoredDelay(700);
    digitalWrite(2, HIGH); sensoredDelay(700); digitalWrite(2, LOW); sensoredDelay(700);
    digitalWrite(2, HIGH); sensoredDelay(700); digitalWrite(2, LOW); sensoredDelay(700);
    digitalWrite(2, HIGH); sensoredDelay(700); digitalWrite(2, LOW); sensoredDelay(700);

    sensoredDelay(2000);

    digitalWrite(3, HIGH); sensoredDelay(700); digitalWrite(3, LOW); sensoredDelay(700);
    digitalWrite(3, HIGH); sensoredDelay(700); digitalWrite(3, LOW); sensoredDelay(700);
    digitalWrite(3, HIGH); sensoredDelay(700); digitalWrite(3, LOW); sensoredDelay(700);
    digitalWrite(3, HIGH); sensoredDelay(700); digitalWrite(3, LOW); sensoredDelay(700);
    digitalWrite(3, HIGH); sensoredDelay(700); digitalWrite(3, LOW); sensoredDelay(700);

    sensoredDelay(2000);

    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    sensoredDelay(500);
    digitalWrite(2, HIGH); sensoredDelay(700); digitalWrite(2, LOW); sensoredDelay(700);
    digitalWrite(2, HIGH); sensoredDelay(700); digitalWrite(2, LOW); sensoredDelay(700);
    digitalWrite(2, HIGH); sensoredDelay(700); digitalWrite(2, LOW); sensoredDelay(700);
    digitalWrite(2, HIGH); sensoredDelay(700); digitalWrite(2, LOW); sensoredDelay(700);
    digitalWrite(2, HIGH); sensoredDelay(700); digitalWrite(2, LOW); sensoredDelay(700);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);

    sensoredDelay(2000);

    digitalWrite(3, HIGH); sensoredDelay(700); digitalWrite(3, LOW); sensoredDelay(700);
    digitalWrite(3, HIGH); sensoredDelay(700); digitalWrite(3, LOW); sensoredDelay(700);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH); sensoredDelay(700); digitalWrite(3, LOW); sensoredDelay(700);
    digitalWrite(3, HIGH); sensoredDelay(700); digitalWrite(3, LOW); sensoredDelay(700);
    digitalWrite(3, HIGH); sensoredDelay(700); digitalWrite(3, LOW); sensoredDelay(700);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);

    sensoredDelay(2000);

    digitalWrite(2, HIGH); digitalWrite(3, HIGH); sensoredDelay(700); digitalWrite(2, LOW); digitalWrite(3, LOW); sensoredDelay(700);
    digitalWrite(2, HIGH); digitalWrite(3, HIGH); sensoredDelay(700); digitalWrite(2, LOW); digitalWrite(3, LOW); sensoredDelay(700);
    digitalWrite(2, HIGH); digitalWrite(3, HIGH); sensoredDelay(700); digitalWrite(2, LOW); digitalWrite(3, LOW); sensoredDelay(700);
    digitalWrite(2, HIGH); digitalWrite(3, HIGH); sensoredDelay(700); digitalWrite(2, LOW); digitalWrite(3, LOW); sensoredDelay(700);
    digitalWrite(2, HIGH); digitalWrite(3, HIGH); sensoredDelay(700); digitalWrite(2, LOW); digitalWrite(3, LOW); sensoredDelay(700);

    sensoredDelay(2000);
}
