int led[8] = { 0,1,2,3,4,5,6}; // Assign the pins for the leds

int Audio = A0;

int s,i;

void setup()

{

for (i = 0; i < 7; i++)

pinMode(led[i], OUTPUT);

}

void loop()

{

s = analogRead(Audio);

Serial.println(s);

s = s / 50; //Change the sensitivity by changing Denominator

if (s == 0)

{

for(i = 0; i < 7; i++)

{

digitalWrite(led[i], LOW);

}

}

else

{

for (i = 0; i < s; i++)

{

digitalWrite(led[i], HIGH);

delay(10);

}

for(i = i; i < 7; i++)

{

digitalWrite(led[i], LOW);

}

}

}