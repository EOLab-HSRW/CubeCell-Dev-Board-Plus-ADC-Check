#include <Wire.h>
#include "HT_SH1107Wire.h"

SH1107Wire  display(0x3c, 500000, SDA, SCL , GEOMETRY_128_64, GPIO10); // addr, freq, sda, scl, resolution, rst

void VextON(void)
{
  pinMode(Vext, OUTPUT);
  digitalWrite(Vext, LOW);
}

void VextOFF(void) //Vext default OFF
{
  pinMode(Vext, OUTPUT);
  digitalWrite(Vext, HIGH);
}

void setup() {
  Serial.begin(115200);
  VextON();
  delay(100);

  display.init();
  display.setFont(ArialMT_Plain_10);
}


void loop() {
  display.clear();
  display.setTextAlignment(TEXT_ALIGN_LEFT);
  display.setFont(ArialMT_Plain_10);
  display.drawString(0, 0, "ADC1 " + String(analogReadmV(ADC1)) + " mV");
  display.drawString(0, 15, "ADC2 " + String(analogReadmV(ADC2)) + " mV");
  display.drawString(0, 30, "ADC3 " + String(analogReadmV(ADC3)) + " mV");
  display.display();
  delay(500);
}
