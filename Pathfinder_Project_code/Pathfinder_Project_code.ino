// --- PIN DEFINITIONS ---
// Buttons (Renamed to btn1-btn4 to avoid conflict with Arduino binary macros)
const int btn1 = D0;
const int btn2 = D1;
const int btn3 = D2;
const int btn4 = D3;

// LEDs
const int LED1 = D4;
const int LED2 = D5;
const int LED3 = D6;
const int LED4 = D10;

void setup() {
  // Set buttons as inputs with internal pull-up resistors
  pinMode(btn1, INPUT_PULLUP);
  pinMode(btn2, INPUT_PULLUP);
  pinMode(btn3, INPUT_PULLUP);
  pinMode(btn4, INPUT_PULLUP);

  // Set LEDs as outputs
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
}

void loop() {
  // --- SWITCH 1 ---
  if (digitalRead(btn1) == LOW) {    // If Switch 1 is pressed (reads LOW)
    digitalWrite(LED1, HIGH);        // Turn LED 1 ON
  } else {
    digitalWrite(LED1, LOW);         // Otherwise, turn it OFF
  }

  // --- SWITCH 2 ---
  if (digitalRead(btn2) == LOW) {    
    digitalWrite(LED2, HIGH);      
  } else {
    digitalWrite(LED2, LOW);       
  }

  // --- SWITCH 3 ---
  if (digitalRead(btn3) == LOW) {    
    digitalWrite(LED3, HIGH);      
  } else {
    digitalWrite(LED3, LOW);       
  }

  // --- SWITCH 4 ---
  if (digitalRead(btn4) == LOW) {    
    digitalWrite(LED4, HIGH);      
  } else {
    digitalWrite(LED4, LOW);       
  }
}