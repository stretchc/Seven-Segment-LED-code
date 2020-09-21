/* seven segment tester */

int Apin = 13;
int Bpin = 12;
int Cpin = 11;
int Dpin = 10;
int Epin = 9;
int Fpin = 8;
int Gpin = 7;

int pause = 400;
int i;

void setup() {

  //establish output pins
  pinMode (Apin, OUTPUT);
  pinMode (Bpin, OUTPUT);
  pinMode (Cpin, OUTPUT);
  pinMode (Dpin, OUTPUT);
  pinMode (Epin, OUTPUT);
  pinMode (Fpin, OUTPUT);
  pinMode (Gpin, OUTPUT);

  Serial.begin(9600);

}

void loop() {
  for (i=0; i<10; i++)  {
  writeNumber(i);
  delay (pause);

  }

    for (i=10; i>=0 ; i--)  {
  writeNumber(i);
  delay (pause);

  }
}

// accept and display one number on LED
void  writeNumber (int x) {

  switch (x) {
    case 0:
      digitalWrite (Apin, HIGH);
      digitalWrite (Bpin, HIGH);
      digitalWrite (Cpin, HIGH);
      digitalWrite (Dpin, HIGH);
      digitalWrite (Epin, HIGH);
      digitalWrite (Fpin, HIGH);
      digitalWrite (Gpin, LOW);

      break;

    case 1 :
      digitalWrite (Apin, LOW);
      digitalWrite (Bpin, HIGH);
      digitalWrite (Cpin, HIGH);
      digitalWrite (Dpin, LOW);
      digitalWrite (Epin, LOW);
      digitalWrite (Fpin, LOW);
      digitalWrite (Gpin, LOW);

      break;

    case 2:
      digitalWrite (Apin, HIGH);
      digitalWrite (Bpin, HIGH);
      digitalWrite (Cpin, LOW);
      digitalWrite (Dpin, HIGH);
      digitalWrite (Epin, HIGH);
      digitalWrite (Fpin, LOW);
      digitalWrite (Gpin, HIGH);

      break;

    case 3:
      digitalWrite (Apin, HIGH);
      digitalWrite (Bpin, HIGH);
      digitalWrite (Cpin, HIGH);
      digitalWrite (Dpin, HIGH);
      digitalWrite (Epin, LOW);
      digitalWrite (Fpin, LOW);
      digitalWrite (Gpin, HIGH);

      break;

    case 4:
      digitalWrite (Apin, LOW);
      digitalWrite (Bpin, HIGH);
      digitalWrite (Cpin, HIGH);
      digitalWrite (Dpin, LOW);
      digitalWrite (Epin, LOW);
      digitalWrite (Fpin, HIGH);
      digitalWrite (Gpin, HIGH);

      break;

    case 5:
      digitalWrite (Apin, HIGH);
      digitalWrite (Bpin, LOW);
      digitalWrite (Cpin, HIGH);
      digitalWrite (Dpin, HIGH);
      digitalWrite (Epin, LOW);
      digitalWrite (Fpin, HIGH);
      digitalWrite (Gpin, HIGH);

      break;

    case 6:
      digitalWrite (Apin, HIGH);
      digitalWrite (Bpin, LOW);
      digitalWrite (Cpin, HIGH);
      digitalWrite (Dpin, HIGH);
      digitalWrite (Epin, HIGH);
      digitalWrite (Fpin, HIGH);
      digitalWrite (Gpin, HIGH);

      break;

    case 7:
      digitalWrite (Apin, HIGH);
      digitalWrite (Bpin, HIGH);
      digitalWrite (Cpin, HIGH);
      digitalWrite (Dpin, LOW);
      digitalWrite (Epin, LOW);
      digitalWrite (Fpin, LOW);
      digitalWrite (Gpin, LOW);

      break;

    case 8:
      digitalWrite (Apin, HIGH);
      digitalWrite (Bpin, HIGH);
      digitalWrite (Cpin, HIGH);
      digitalWrite (Dpin, HIGH);
      digitalWrite (Epin, HIGH);
      digitalWrite (Fpin, HIGH);
      digitalWrite (Gpin, HIGH);

      break;

    case 9:
      digitalWrite (Apin, HIGH);
      digitalWrite (Bpin, HIGH);
      digitalWrite (Cpin, HIGH);
      digitalWrite (Dpin, HIGH);
      digitalWrite (Epin, LOW);
      digitalWrite (Fpin, HIGH);
      digitalWrite (Gpin, HIGH);


  }
}
