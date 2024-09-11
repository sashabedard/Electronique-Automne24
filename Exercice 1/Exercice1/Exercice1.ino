// DISPLAY
const int pinA = 4;
const int pinB = 5;
const int pinC = 6;
const int pinD = 7;
const int pinE = 8;
const int pinF = 9;
const int pinG = 10;
const int pinDP = 11;


void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
  pinMode(pinE, OUTPUT);
  pinMode(pinF, OUTPUT);
  pinMode(pinG, OUTPUT);
  pinMode(pinDP, OUTPUT);
}

void loop() {
  masterSeq();
}

void lightReset() {
  digitalWrite(pinA, 0);
  digitalWrite(pinB, 0);
  digitalWrite(pinC, 0);
  digitalWrite(pinD, 0);
  digitalWrite(pinE, 0);
  digitalWrite(pinF, 0);
  digitalWrite(pinG, 0);
}

void startSequence() {
  digitalWrite(pinA, 1);
  digitalWrite(pinB, 1);
  digitalWrite(pinC, 1);
  digitalWrite(pinD, 1);
  digitalWrite(pinE, 1);
  digitalWrite(pinF, 1);
  digitalWrite(pinG, 1);
}

void showSequence() {
  sequence1();
  delay(1000);
  lightReset();

  sequence2();
  delay(1000);
  lightReset();

  sequence3();
  delay(1000);
  lightReset();

  sequence4();
  delay(1000);
  lightReset();

  sequence5();
  delay(1000);
  lightReset();

  sequence6();
  delay(1000);
  lightReset();

  sequence7();
  delay(1000);
  lightReset();

  sequence8();
  delay(1000);
  lightReset();

  sequence9();
  delay(1000);
  lightReset();

  sequence0();
  delay(1000);
  lightReset();

  sequenceBonusMaster();
  sequenceBonusMaster();
  sequenceBonusMaster();
  sequenceBonusMaster();
  sequenceBonusMaster();
  Serial.println("loop done");
}


void sequenceBonusMaster() {
  sequenceBonus();
  delay(100);
  sequenceBonusDeux();
  delay(100);
  sequenceBonusTrois();
  delay(100);
  sequenceBonusQuattre();
  delay(100);
  sequenceBonusCinq();
  delay(100);
  sequenceBonusSix();
}

void sequence1() {
  lightReset();
  digitalWrite(pinB, 1);
  digitalWrite(pinC, 1);
  digitalWrite(pinA, 0);
  digitalWrite(pinF, 0);
  digitalWrite(pinG, 0);
  digitalWrite(pinE, 0);
  digitalWrite(pinD, 0);
  delay(1000);
}

void sequence2() {
  lightReset();
  digitalWrite(pinA, 1);
  digitalWrite(pinB, 1);
  digitalWrite(pinG, 1);
  digitalWrite(pinE, 1);
  digitalWrite(pinD, 1);
  digitalWrite(pinF, 0);
  digitalWrite(pinC, 0);
}

void sequence3() {
  lightReset();
  digitalWrite(pinA, 1);
  digitalWrite(pinB, 1);
  digitalWrite(pinG, 1);
  digitalWrite(pinC, 1);
  digitalWrite(pinD, 1);
  digitalWrite(pinF, 0);
  digitalWrite(pinE, 0);
}

void sequence4() {
  lightReset();
  digitalWrite(pinF, 1);
  digitalWrite(pinB, 1);
  digitalWrite(pinG, 1);
  digitalWrite(pinC, 1);
  digitalWrite(pinA, 0);
  digitalWrite(pinE, 0);
  digitalWrite(pinD, 0);
}

void sequence5() {
  lightReset();
  digitalWrite(pinA, 1);
  digitalWrite(pinF, 1);
  digitalWrite(pinG, 1);
  digitalWrite(pinC, 1);
  digitalWrite(pinD, 1);
  digitalWrite(pinB, 0);
  digitalWrite(pinE, 0);
}

void sequence6() {
  lightReset();
  digitalWrite(pinA, 1);
  digitalWrite(pinF, 1);
  digitalWrite(pinG, 1);
  digitalWrite(pinE, 1);
  digitalWrite(pinD, 1);
  digitalWrite(pinC, 1);
  digitalWrite(pinB, 0);
}

void sequence7() {
  lightReset();
  digitalWrite(pinA, 1);
  digitalWrite(pinB, 1);
  digitalWrite(pinC, 1);
  digitalWrite(pinF, 0);
  digitalWrite(pinG, 0);
  digitalWrite(pinE, 0);
  digitalWrite(pinD, 0);
}

void sequence8() {
  lightReset();
  digitalWrite(pinA, 1);
  digitalWrite(pinB, 1);
  digitalWrite(pinC, 1);
  digitalWrite(pinD, 1);
  digitalWrite(pinE, 1);
  digitalWrite(pinF, 1);
  digitalWrite(pinG, 1);
}

void sequence9() {
  lightReset();
  digitalWrite(pinA, 1);
  digitalWrite(pinF, 1);
  digitalWrite(pinB, 1);
  digitalWrite(pinG, 1);
  digitalWrite(pinD, 1);
  digitalWrite(pinC, 1);
}

void sequence0() {
  lightReset();
  digitalWrite(pinA, 1);
  digitalWrite(pinF, 1);
  digitalWrite(pinB, 1);
  digitalWrite(pinE, 1);
  digitalWrite(pinD, 1);
  digitalWrite(pinC, 1);
}

void sequenceBonus() {
  lightReset();
  digitalWrite(pinA, 1);
  digitalWrite(pinD, 1);
}

void sequenceBonusDeux() {
  lightReset();
  digitalWrite(pinF, 1);
  digitalWrite(pinC, 1);
}

void sequenceBonusTrois() {
  lightReset();
  digitalWrite(pinB, 1);
  digitalWrite(pinE, 1);
}

void sequenceBonusQuattre() {
  lightReset();
  digitalWrite(pinG, 1);
}

void sequenceBonusCinq() {
  lightReset();
  digitalWrite(pinA, 1);
}

void sequenceBonusSix() {
  lightReset();
  digitalWrite(pinD, 1);
}

void masterSeq() {
  showSequence();
  Serial.println("step7");
  delay(1000);
}