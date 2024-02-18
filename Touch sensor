#include "XLOT_CAP1203.h"

CAP1203 sensor;

void setup()
{
    Serial.begin(9600);
    if (sensor.begin() == false)
    {
        Serial.println("Not connected.");
        while (1)
            ;
    }
    else
    {
        Serial.println("Connected!");
    }
}
void loop()
{
    if (sensor.isRightSwipePulled())
    {
        Serial.println("Right Swipe");
    }
    else if (sensor.isLeftSwipePulled())
    {
        Serial.println("Left Swipe");
    }
}
