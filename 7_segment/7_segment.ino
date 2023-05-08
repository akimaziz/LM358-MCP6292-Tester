#define A A1
#define B A0
#define C 4
#define D 5
#define E 6
#define F 7
#define G 8
#define DP 9

void setup() {
 
  pinMode (A, OUTPUT);  
  pinMode (B, OUTPUT); 
  pinMode (C, OUTPUT);  
  pinMode (D, OUTPUT);  
  pinMode (E, OUTPUT); 
  pinMode (F, OUTPUT);
  pinMode (G, OUTPUT);
  pinMode (DP, OUTPUT);
}

void loop() {
  zero();
  delay(300);
  one();
  delay(300);
  two();
  delay(300);
  three();
  delay(300);
  four();
  delay(300);
  five();
  delay(300);
  six();
  delay(300);
  seven();
  delay(300);
  eight();
  delay(300);
  nine();
  delay(300);
  titik();
  delay(300);
}

void zero()
{
  digitalWrite (A, LOW);
  digitalWrite (B, LOW);
  digitalWrite (C, LOW);
  digitalWrite (D, LOW);
  digitalWrite (E, LOW);
  digitalWrite (F, LOW);
  digitalWrite (G, HIGH);
  digitalWrite (DP, HIGH);
}

void one()
{
  digitalWrite (A, HIGH);
  digitalWrite (B, LOW);
  digitalWrite (C, LOW);
  digitalWrite (D, HIGH);
  digitalWrite (E, HIGH);
  digitalWrite (F, HIGH);
  digitalWrite (G, HIGH);
  digitalWrite (DP, HIGH);
}

void two()
{
  digitalWrite (A, LOW);
  digitalWrite (B, LOW);
  digitalWrite (C, HIGH);
  digitalWrite (D, LOW);
  digitalWrite (E, LOW);
  digitalWrite (F, HIGH);
  digitalWrite (G, LOW);
  digitalWrite (DP, HIGH);
}

void three()
{
  digitalWrite (A, LOW);
  digitalWrite (B, LOW);
  digitalWrite (C, LOW);
  digitalWrite (D, LOW);
  digitalWrite (E, HIGH);
  digitalWrite (F, HIGH);
  digitalWrite (G, LOW);
  digitalWrite (DP, HIGH);
}

void four()
{
  digitalWrite (A, HIGH);
  digitalWrite (B, LOW);
  digitalWrite (C, LOW);
  digitalWrite (D, HIGH);
  digitalWrite (E, HIGH);
  digitalWrite (F, LOW);
  digitalWrite (G, LOW);
  digitalWrite (DP, HIGH);
}

void five()
{
  digitalWrite (A, LOW);
  digitalWrite (B, HIGH);
  digitalWrite (C, LOW);
  digitalWrite (D, LOW);
  digitalWrite (E, HIGH);
  digitalWrite (F, LOW);
  digitalWrite (G, LOW);
  digitalWrite (DP, HIGH);
}

void six()
{
  digitalWrite (A, LOW);
  digitalWrite (B, HIGH);
  digitalWrite (C, LOW);
  digitalWrite (D, LOW);
  digitalWrite (E, LOW);
  digitalWrite (F, LOW);
  digitalWrite (G, LOW);
  digitalWrite (DP, HIGH);
}

void seven()
{
  digitalWrite (A, LOW);
  digitalWrite (B, LOW);
  digitalWrite (C, LOW);
  digitalWrite (D, HIGH);
  digitalWrite (E, HIGH);
  digitalWrite (F, HIGH);
  digitalWrite (G, HIGH);
  digitalWrite (DP, HIGH);
}

void eight()
{
  digitalWrite (A, LOW);
  digitalWrite (B, LOW);
  digitalWrite (C, LOW);
  digitalWrite (D, LOW);
  digitalWrite (E, LOW);
  digitalWrite (F, LOW);
  digitalWrite (G, LOW);
  digitalWrite (DP, HIGH);
}

void nine()
{
  digitalWrite (A, LOW);
  digitalWrite (B, LOW);
  digitalWrite (C, LOW);
  digitalWrite (D, LOW);
  digitalWrite (E, HIGH);
  digitalWrite (F, LOW);
  digitalWrite (G, LOW);
  digitalWrite (DP, HIGH);
}
void titik()
{
  digitalWrite (A, HIGH);
  digitalWrite (B, HIGH);
  digitalWrite (C, HIGH);
  digitalWrite (D, HIGH);
  digitalWrite (E, HIGH);
  digitalWrite (F, HIGH);
  digitalWrite (G, HIGH);
  digitalWrite (DP, LOW);
}
