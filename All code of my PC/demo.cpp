#include <SoftwareSerial.h>


const int motor1Pin = 3;    // H-bridge leg 1 (pin 2, 1A)
const int motor2Pin = 4;    // H-bridge leg 2 (pin 7, 2A)
const int motor3Pin = 6;    // H-bridge leg 1 (pin 10, 3A)
const int motor4Pin = 7;    // H-bridge leg 2 (pin 15, 4A)
const int headlight = 8;

char ch = 'S';
char prevCh='A';
boolean modestatus = true;
int modevalue = 0;



SoftwareSerial Bluetooth (10, 11);//RX,TX

void forward()
{
    digitalWrite(motor1Pin, HIGH);   // set leg 1 of the H-bridge low
    digitalWrite(motor2Pin, LOW);  // set leg 2 of the H-bridge high
    digitalWrite(motor3Pin, HIGH);   // set leg 1 of the H-bridge low
    digitalWrite(motor4Pin, LOW);

    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);

}

void autoforward()
{
    digitalWrite(motor1Pin, HIGH);   // set leg 1 of the H-bridge low
    analogWrite (motor1Pin, 150);
    analogWrite (motor2Pin, 0);  // set leg 2 of the H-bridge high
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
}
void forwardright()
{
    digitalWrite(motor1Pin, HIGH);   // set leg 1 of the H-bridge low
    digitalWrite(motor2Pin, LOW);  // set leg 2 of the H-bridge high
    digitalWrite(motor3Pin, LOW);   // set leg 1 of the H-bridge low
    digitalWrite(motor4Pin, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
}
void forwardleft()
{
    digitalWrite(motor1Pin, HIGH);   // set leg 1 of the H-bridge low
    digitalWrite(motor2Pin, LOW);  // set leg 2 of the H-bridge high
    digitalWrite(motor3Pin, HIGH);   // set leg 1 of the H-bridge low
    digitalWrite(motor4Pin, LOW);  // set leg 2 of the H-bridge high
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
}

void backward()
{
    digitalWrite(motor1Pin, LOW);   // set leg 1 of the H-bridge low
    digitalWrite(motor2Pin, HIGH);  // set leg 2 of the H-bridge high
    digitalWrite(motor3Pin, LOW);   // set leg 1 of the H-bridge low
    digitalWrite(motor4Pin, HIGH);

    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);

}
void autobackward()
{
    //digitalWrite(motor1Pin, HIGH);   // set leg 1 of the H-bridge low
    analogWrite (motor1Pin, 0);
    analogWrite (motor2Pin, 100);  // set leg 2 of the H-bridge high
    digitalWrite(12, LOW);
    digitalWrite(12, HIGH);
}

void backwardleft()
{
    digitalWrite(motor1Pin, LOW);   // set leg 1 of the H-bridge low
    digitalWrite(motor2Pin, HIGH);  // set leg 2 of the H-bridge high
    digitalWrite(motor3Pin, LOW);   // set leg 1 of the H-bridge low
    digitalWrite(motor4Pin, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);

}
void backwardright()
{
    digitalWrite(motor1Pin, LOW);   // set leg 1 of the H-bridge low
    digitalWrite(motor2Pin, HIGH);  // set leg 2 of the H-bridge high
    digitalWrite(motor3Pin, HIGH);   // set leg 1 of the H-bridge low
    digitalWrite(motor4Pin, LOW);  // set leg 2 of the H-bridge high
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);

}

void right()
{
    digitalWrite(motor3Pin, LOW);   // set leg 1 of the H-bridge low
    digitalWrite(motor4Pin, LOW);  // set leg 2 of the H-bridge LOW
    //   delay(250);
    digitalWrite(motor1Pin, HIGH);   // set leg 1 of the H-bridge HIGH
    digitalWrite(motor2Pin, LOW);  // set leg 2 of the H-bridge LOW

}
void autoleft()
{
    digitalWrite(motor3Pin, HIGH);   // set leg 1 of the H-bridge low
    digitalWrite(motor4Pin, LOW);  // set leg 2 of the H-bridge high
    delay(500);
    digitalWrite(motor3Pin, LOW);   // set leg 1 of the H-bridge low
    digitalWrite(motor4Pin, LOW);  // set leg 2 of the H-bridge high

}

void left()
{
    digitalWrite(motor3Pin, HIGH);   // set leg 1 of the H-bridge HIGH
    digitalWrite(motor4Pin, LOW);  // set leg 2 of the H-bridge LOW
    // delay(250);
    digitalWrite(motor1Pin, LOW);   // set leg 1 of the H-bridge LOW
    digitalWrite(motor2Pin, LOW);  // set leg 2 of the H-bridge LOW

}
void autoright()
{
    digitalWrite(motor3Pin, LOW);   // set leg 1 of the H-bridge low
    digitalWrite(motor4Pin, HIGH);  // set leg 2 of the H-bridge high
    delay(500);
    digitalWrite(motor3Pin, LOW);   // set leg 1 of the H-bridge low
    digitalWrite(motor4Pin, LOW);  // set leg 2 of the H-bridge high

}

void carstop()
{
    digitalWrite(motor1Pin, LOW);   // set leg 1 of the H-bridge low
    digitalWrite(motor2Pin, LOW);  // set leg 2 of the H-bridge high
    digitalWrite(motor3Pin, LOW);   // set leg 1 of the H-bridge low
    digitalWrite(motor4Pin, LOW);  // set leg 2 of the H-bridge high
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);

}



void remotemode()
{
    if (Bluetooth.available()>0 )
    {
        prevCh = ch;
        ch = Bluetooth.read();

        if(ch!=prevCh)
        {


            if (ch=='F')
            {
                forward();
            }

            if (ch=='G')
            {
                forwardleft();
            }

            if(ch== 'I')
            {
                forwardright();
            }

            if (ch== 'B')
            {
                backward();
            }

            if (ch=='H')
            {
                backwardright();
            }

            if (ch=='J')
            {
                backwardleft();
            }
            if(ch== 'L')
            {
                left();
            }

            if(ch=='R')
            {
                right();
            }

            if (ch=='S')
            {
                carstop();
            }


            if(ch=='W')
            {

                digitalWrite(headlight, LOW);
            }
            if(ch=='w')
            {

                digitalWrite(headlight, HIGH);
            }

        }

    }
}

void setup()
{


    // set all the other pins you're using as outputs/input:

    pinMode(motor1Pin, OUTPUT);
    pinMode(motor2Pin, OUTPUT);
    pinMode(motor3Pin, OUTPUT);
    pinMode(motor4Pin, OUTPUT);
    pinMode(headlight, OUTPUT);

    pinMode(13, OUTPUT);
    pinMode(12, OUTPUT);
    Serial.begin  (9600);


    // set enablePin high so that motor can turn on:

    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(headlight, HIGH);
    Bluetooth.begin(9600);

}

void loop()
{

    remotemode();
}

