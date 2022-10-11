void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);


  pinMode(12, OUTPUT); // Locked Door
  pinMode(11, OUTPUT); // Red - Hot Water
  pinMode(10, OUTPUT); // Green - Cold Water

 
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(12, HIGH);
  delay(7000);
  digitalWrite(12, LOW);
  
  digitalWrite(11, HIGH);
  delay(7000);
  digitalWrite(11, LOW);
  
  digitalWrite(10, HIGH);
  delay(7000);
  digitalWrite(10, LOW);

  
}
