// DISPLAY 
const int pins[] = {4, 5, 6, 7, 8, 9, 10, 11};  // Array des numéros de pin pour chaque lumiere de display
enum {A, B, C, D, E, F, G, DP};  // referencement 

void setup() {
  Serial.begin(9600);  // init
  for (int i = 0; i < 8; i++) {  // init setup des leds
    pinMode(pins[i], OUTPUT);  
  }
}

void loop() {
  showSequence();
}

// power off tous les segments du display
void lightReset() {
  for (int i = 0; i < 8; i++) {  
    digitalWrite(pins[i], 0);  // power off chaque segment
  }
}


 void displayNumber(bool segments[7]) { // il y a 7 segments de led a show ou unshow
  lightReset();
  for (int i = 0; i < 7; i++) {  
    digitalWrite(pins[i], segments[i]);  // active ou désactive chaque segment selon le pattern du chiffre
  }
}

// Afficher les chiffres
void sequence(int num) {
  bool segments[10][7] = {   // [10] -- 10 arrays, [7] -- 7 segments a power on
    {1, 1, 1, 1, 1, 1, 0},  // 0
    {0, 1, 1, 0, 0, 0, 0},  // 1
    {1, 1, 0, 1, 1, 0, 1},  // 2
    {1, 1, 1, 1, 0, 0, 1},  // 3
    {0, 1, 1, 0, 0, 1, 1},  // 4
    {1, 0, 1, 1, 0, 1, 1},  // 5
    {1, 0, 1, 1, 1, 1, 1},  // 6
    {1, 1, 1, 0, 0, 0, 0},  // 7
    {1, 1, 1, 1, 1, 1, 1},  // 8
    {1, 1, 1, 1, 0, 1, 1}   // 9
  };
  
  displayNumber(segments[num]);
  delay(1000);
  lightReset();
}


void showSequence() {
  for (int i = 0; i <= 9; i++) {
    sequence(i);
  }
  
  for (int i = 0; i < 5; i++) {
    sequenceBonusMaster();
  }
  Serial.println("loop done");
}

// BONUS
void sequenceBonusMaster() {
  sequenceBonus();
  delay(100); 
  sequenceBonusDeux();
  delay(100);
  sequenceBonusTrois();
  delay(100); 
  seqBonusQuattre(); 
  delay(100);
  seqBonusCinq();
  delay(100);
  seqBonusSix(); 
}

void sequenceBonus() {
  lightReset();
  digitalWrite(pins[A], 1); 
  digitalWrite(pins[D], 1); 
}

void sequenceBonusDeux() {
  lightReset();
  digitalWrite(pins[F], 1);
  digitalWrite(pins[C], 1);
}

void sequenceBonusTrois() {
  lightReset();
  digitalWrite(pins[B], 1);
  digitalWrite(pins[E], 1);
}



void seqBonusQuattre() {
  lightReset();
  digitalWrite(pins[G], 1);
}

void seqBonusCinq() {
  lightReset();
  digitalWrite(pins[A], 1);
}

void seqBonusSix() {
  lightReset();
  digitalWrite(pins[D], 1);
}



