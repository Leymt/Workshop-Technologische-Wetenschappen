void setup()  // Hier voegen we alle componenten toe die we gaan aansluiten op de arduino.
{

  pinMode(5, OUTPUT);  // We voegen pin 5 toe als een uitgang. Hierop sluiten we een draad van motor 1 op aan.
  pinMode(6, OUTPUT);  // We voegen pin 6 toe als een uitgang. Hierop sluiten we de andere draad van motor 1 op aan.
}

void loop()  // Hier gaan we het programma plaatsen dat uitgevoerd zal worden.
{

  digitalWrite(5, LOW);   // We gaan een laag signaal (0 signaal of 0V) sturen naar pin 5.
  digitalWrite(6, HIGH);  // We gaan een hoog signaal (1 signaal of 5V) sturen naar pin 6. Motor 1 zal nu in een bepaalde richting draaien.
  delay(3000);            // De voorgaande acties zullen 3000 ms of 3s uitgevoerd worden.

  digitalWrite(5, LOW);  // We gaan een laag signaal (0 signaal of 0V) sturen naar pin 5.
  digitalWrite(6, LOW);  // We gaan een laag signaal (0 signaal of 0V) sturen naar pin 6.
  delay(3000);           // De voorgaande acties zullen 3000 ms of 3s uitgevoerd worden.
}
