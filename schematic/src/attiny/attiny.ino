/*
  test code for:
  ATTINY 13\13A\85

  pinout attiny -> Arduino
  PB1(RST)   -> D10
  PB2
  PB3
  GND        -> GND
  PB5(MOSI)  -> D11
  PB6(MISO)  -> D12
  PB7(SCK)   -> D13
  VCC        -> 5V

  use programmer "Arduino as ISP"
  load with programmer (Ctrl+Shift+U)
  good luck! ^)
*/

// delay
#define DEL 20

void setup() {
  pinMode(PB4, OUTPUT); // PB4 - port with led
}

void loop() {
  digitalWrite(PB4, 1);
  delay(100);
  digitalWrite(PB4, 0);
  delay(100);
}
