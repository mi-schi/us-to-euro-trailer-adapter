int leftOutput = 5;
int rightOutput = 7;

int brakeInput = 10;

int leftInput = 11;
int rightInput = 12;

int time = 100;
int brakeRead = 0;
int leftRead = 0;
int rightRead = 0;
int leftWrite = 0;
int rightWrite = 0;

void setup() {
    pinMode(brakeInput, INPUT);
    pinMode(leftInput, INPUT);
    pinMode(rightInput, INPUT);

    pinMode(leftOutput, OUTPUT);
    pinMode(rightOutput, OUTPUT);
}

void loop() {
    leftRead = digitalRead(leftInput);
    rightRead = digitalRead(rightInput);
    delay(time);
    brakeRead = digitalRead(brakeInput);

    leftWrite = 0;
    rightWrite = 0;

    if (leftRead == 1 && rightRead == 1 && brakeRead == 0) {
        leftWrite = 1;
        rightWrite = 1;
    } else if (leftRead == 1 && rightRead == 0 && brakeRead == 0) {
        leftWrite = 1;
    } else if (leftRead == 0 && rightRead == 1 && brakeRead == 0) {
        rightWrite = 1;
    } else if (leftRead == 0 && rightRead == 1 && brakeRead == 1) {
        leftWrite = 1;
    } else if (leftRead == 1 && rightRead == 0 && brakeRead == 1) {
        rightWrite = 1;
    }
               
    digitalWrite(leftOutput, leftWrite);
    digitalWrite(rightOutput, rightWrite);
}
