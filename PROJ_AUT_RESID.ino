int LedLâmpada
int LedRed
int LedYellow
int LedGreen
int BotãoLâmpada
int BotãoPortão

#include <Servo.h>
Servo myservo;
int pos = 0;

#include <SPI.h>
#include <UIPEthernet.h>
#include <utility/logging.h>



void setup() {
Serial.begin(9600);
pinMode(LedLâmpada, OUTPUT);
pinMode(LedRed, OUTPUT);
pinMode(LedYellow, OUTPUT);
pinMode(BotãoLâmpada, INPUT);
pinMode(BotãoPortão, INPUT);
}

void loop() {


}
