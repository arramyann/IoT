void setup() {
  // Road A
  pinMode(8, OUTPUT);  // Green A
  pinMode(9, OUTPUT);  // Yellow A
  pinMode(10, OUTPUT); // Red A

  // Road B
  pinMode(2, OUTPUT);  // Green B
  pinMode(3, OUTPUT);  // Yellow B
  pinMode(4, OUTPUT);  // Red B
}

void loop() {
  // --- Phase 1: Road A green, Road B red ---
  digitalWrite(8, HIGH);   // A Green ON
  digitalWrite(10, LOW);   // A Red OFF
  digitalWrite(4, HIGH);   // B Red ON
  delay(4000);             // 4 sec

  // --- Transition: A yellow ---
  digitalWrite(8, LOW);    // A Green OFF
  digitalWrite(9, HIGH);   // A Yellow ON
  delay(1000);             // 1 sec
  digitalWrite(9, LOW);    // A Yellow OFF

  // --- Phase 2: Road A red, Road B green ---
  digitalWrite(10, HIGH);  // A Red ON
  digitalWrite(4, LOW);    // B Red OFF
  digitalWrite(2, HIGH);   // B Green ON
  delay(4000);             // 4 sec

  // --- Transition: B yellow ---
  digitalWrite(2, LOW);    // B Green OFF
  digitalWrite(3, HIGH);   // B Yellow ON
  delay(1000);             // 1 sec
  digitalWrite(3, LOW);    // B Yellow OFF

  // Loop repeats
}

