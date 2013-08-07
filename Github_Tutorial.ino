/*
 7th August 2013
 Ammended the file in order to experiment with the way that repositories work on github.
 
 If we have an analog sensor such as a trimpot or flex sensor on A0, this code would attempt
 to read it and output it to the terminal at 9600bps.
*/

void setup()
{
  Serial.begin(9600);
  Serial.println("Hello world example and ");
  Serial.println("Trimpot read example");

  pinMode(A0, INPUT);
}

void loop() 
{
  int myValue = 0;
  myValue = analogRead(A0);
  
  Serial.print("The value is: ");
  Serial.println(myValue);

  delay(250);
}

