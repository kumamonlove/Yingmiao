// light
int redPin_h = 9;
int greenPin_h = 10;
int bluePin_h = 11;
void setColor_h(int RValue, int GValue, int BValue)
{
    analogWrite(redPin_h, RValue);
    analogWrite(greenPin_h, GValue);
    analogWrite(bluePin_h, BValue);
}
void setup()
{
    //set light pin
    pinMode(redPin_h, OUTPUT);
    pinMode(greenPin_h, OUTPUT);
    pinMode(bluePin_h, OUTPUT);
    setColor_h(255, 255, 255);
}
void loop()
{
    if (sensor.isRightSwipePulled())
    {
        rotate(new_pos);
    }
}
void rotate(int step)
{
    int light = 0;
    int k = 1;
    //omit the code
    for (j = 0; j < step; j++)
    {
        //omit the code
        setColor_h(light, light, light);
        if ((j % 20) == 0) light += k;
        if (light >= 255 && k > 0) k = -1;
        else if (light <= 0 && k < 0) k = 1;
    }
}
