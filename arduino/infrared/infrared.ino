/*
  ReadAnalogVoltage

  Reads an analog input on pin 0, converts it to voltage, and prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/ReadAnalogVoltage
*/


void setup() {
  pinMode(26, OUTPUT);
  digitalWrite( 26, LOW );
  pinMode(25, OUTPUT);
  digitalWrite( 25, LOW );
  Serial.begin(115200);
}

// the loop routine runs over and over again forever:
void loop() {
  int sensorValue = analogRead(33);

  Serial.println(sensorValue);

  if ( sensorValue < 2770 ) {
    digitalWrite( 26, HIGH );
    digitalWrite( 25, LOW );
  } else if ( sensorValue > 2950 ) {
    digitalWrite( 26, LOW );
    digitalWrite( 25, HIGH );
  } else {
    digitalWrite( 26, LOW );
    digitalWrite( 25, LOW );
  }
  
  delay(10);
}
