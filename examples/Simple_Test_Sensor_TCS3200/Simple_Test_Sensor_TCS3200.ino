#include <KRtcs3200.h>
KRtcs3200 sensor(4, 5, 6, 7, 8);

void setup() {
  Serial.begin(9600);
  sensor.begin();
}

void loop() {

  int red_value = 0;
  int green_value = 0;
  int blue_value = 0;

  red_value = sensor.getRed();
  delay(200);
  green_value = sensor.getGreen();
  delay(200);
  blue_value = sensor.getBlue();
  delay(200);

  Serial.print("Red Value = ");
  Serial.print(red_value);
  Serial.print(" - Green Value = ");
  Serial.print(green_value);
  Serial.print(" - Blue Value = ");
  Serial.println(blue_value);

}
