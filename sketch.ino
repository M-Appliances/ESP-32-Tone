uint8_t octave = 4; // Change this for higher or lower pitch

void setup() {
  Serial.begin(115200);
  ledcSetup(0, 1E5, 12);
  ledcAttachPin(25, 0); // Change 25 to 26 as required
  
  ledcWriteNote(0, NOTE_C, octave);
  delay(250);
  ledcWriteNote(0, NOTE_E, octave);
  delay(250);
  ledcWriteNote(0, NOTE_G, octave);
  delay(250);
  ledcWrite(0, 0);
}

void loop() {

  char Number = 0;

  if (Serial.available())
  {
    Number = Serial.read();
  }
  switch (Number)
  {
    case '1':
      Serial.println("OPTION 1: C");


      ledcWriteNote(0, NOTE_C, octave);  // We've used the musical scale.  If you look at the link in the readme, you can also specify the frequency if you wish.
      delay(500);
      ledcWrite(0, 0);

      break;

    case '2':
      Serial.println("OPTION 2: D");

      ledcWriteNote(0, NOTE_D, octave);
      delay(500);
      ledcWrite(0, 0);

      break;

    case '3':
      Serial.println("OPTION 3: E");

      ledcWriteNote(0, NOTE_E, octave);
      delay(500);
      ledcWrite(0, 0);

      break;

  }

  Number = 0;

}
