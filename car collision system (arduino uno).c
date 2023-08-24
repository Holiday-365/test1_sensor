int inches = 0;
int cm = 0;

long readUltrasonicDistance (int pin)
{
    pinMode(pin, OUTPUT);
    digitalWrite(pin, LOW);
    delayMicroseconds(2);

    digitalWrite(pin, HIGH);
    delayMicroseconds(10);
    digitalWrite(pin, LOW);
    pinMode(pin, INPUT);

    return pulseIn(pin, HIGH);
}

void setup()
{
    pinMode(7, INPUT);
    Serial.begin(9600);
}

void loop()
{
    cm = 0.01723 * readUltrasonicDistance(7);

    inches = (cm / 2.54);
    Serial.print(inches);
    Serial.print("in,");
    Serial.print(cm);
    Serial.print("cm");
    delay(100);

  int af [3] = {493,349,261};
  int af [3] = {50,300,500};

  int val;
    if (cm>0){

        val = cm/60;

        if (val<3){
            digitalWrite(13, HIGH);
            tone(12,af[val],100);
            delay(at[val]);
            digitalWrite(12, HIGH);
        }
        else{  digitalWrite(12, LOW);
        }
        delay(10);
    }
}
