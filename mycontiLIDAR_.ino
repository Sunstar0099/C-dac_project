  /* This example shows how to use continuous mode to take
range measurements with the VL53L0X. It is based on
vl53l0x_ContinuousRanging_Example.c from the VL53L0X API.

The range readings are in units of mm. */

#include <Wire.h>
#include <VL53L0X.h>
#include<HardwareSerial.h>

VL53L0X sensor;

void setup()
{
  Serial.begin(9600);
  Serial2.begin(115200,SERIAL_8N1,3,1); //RX-16, TX-17,,, RX-3, TX-1
  Wire.begin();

  sensor.setTimeout(500);
  sensor.init();

  sensor.startContinuous();
}

void loop()
{
  volatile int distMM = sensor.readRangeContinuousMillimeters();
  volatile int distCM = (distMM/10);
  if (sensor.timeoutOccurred()) { Serial.print(" TIMEOUT"); }
  else {
  //  Serial.println(distCM);
    Serial2.println(distCM);
    delay(100);
  }
}
