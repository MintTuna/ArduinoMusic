//음표 설정
#define G 392
#define A 440
#define B 494
#define CC 523.25
#define DD 587
#define EE 659
#define FF 699
#define GG 784
#define AA 880
#define BB 988
#define Bb 493.88
#define Gs 415.3

//쉼표 설정 (음과 음 사이의 간격)
#define FOUR 750
#define TWO 1500
#define EIGHT 375
#define SIXTEEN 187.5
#define TWOPOINT 2250

//악보 중 음표
int melody[] = {
  G, EE, DD, EE, DD, CC, G, EE, 
  Bb, AA, Gs, A, AA, EE, GG, FF, 
  EE, DD, EE, B, CC, A, G, BB, 
  AA, GG, FF, EE, FF, A, B, CC
};

//악보 중 쉼표(음과 음 사이의 간격)
int term[] = {
  FOUR, 2500, FOUR, FOUR, TWOPOINT, TWO, 
  FOUR, TWO, SIXTEEN, SIXTEEN, SIXTEEN, 
  SIXTEEN, TWO, FOUR, TWOPOINT, TWO, FOUR, 
  TWOPOINT, TWO, FOUR, TWOPOINT, TWOPOINT, 
  FOUR, FOUR, FOUR, EIGHT, EIGHT, EIGHT, 
  EIGHT, EIGHT, EIGHT, TWOPOINT
};

void setup() {
  pinMode(8, OUTPUT);
  int i=0;
  for (i;i<32;i++) {
    tone(8, melody[i]);
    delay(term[i]);
  }
  noTone(8);
}

void loop() {

}