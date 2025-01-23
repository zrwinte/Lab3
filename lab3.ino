void setup() {
  
  Serial.begin(9600);
  
  pinMode(A6, INPUT);
  int lightLevel = analogRead(A6);
  Serial.begin(9600);
  Serial.println(lightLevel);
 
 pinMode(4, OUTPUT);

  if(lightLevel < 100)
  {
    Serial.println("It's really dark!");

    digitalWrite(4,HIGH);
  }

  else if(lightLevel < 200)
  {
    Serial.println("It's dim in here");
  }

  else if(lightLevel < 700)
  {
    Serial.println("it's a little bright");
  }

  else if(lightLevel < 1024)
  {
   Serial.println("It's really bright!");
  }

 


}

void loop() {
  // put your main code here, to run repeatedly:

}
