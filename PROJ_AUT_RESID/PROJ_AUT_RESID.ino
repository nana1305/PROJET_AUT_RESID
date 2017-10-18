const int LedLampada = 9;
const int LedRed = 8;
const int LedYellow = 7;
const int LedGreen = 5;
const int BotaoLampada = 4;
const int BotaoPortao = 3;
int estadoBotaoL = LOW;
int estadoBotaoP = LOW;

#include <Servo.h>
Servo myservo;
int pos = 0;

#include <SPI.h>
#include <UIPEthernet.h>
#include <utility/logging.h>



void setup() {
  Serial.begin(9600);
  pinMode(LedLampada, OUTPUT);
  pinMode(LedRed, OUTPUT);
  pinMode(LedYellow, OUTPUT);
  pinMode(BotaoLampada, INPUT);
  pinMode(BotaoPortao, INPUT);
}

void loop() {
  estadoBotaoL = digitalRead(BotaoLampada);

  estadoBotaoP = digitalRead(BotaoPortao);
}
 
