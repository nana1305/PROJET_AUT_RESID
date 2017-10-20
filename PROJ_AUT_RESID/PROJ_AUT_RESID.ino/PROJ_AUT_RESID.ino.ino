const int LedLampada = 9;
const int LedRed = 8;
const int LedYellow = 7;
const int LedGreen = 5;
const int BotaoLampada = 4;
const int BotaoPortao = 3;
int estadoBotaoL = LOW;
int estadoBotaoP = LOW;
int estadoServoMotor = LOW;
int ultimoEstadoServoMotor = HIGH;

#include <Servo.h>
Servo microServo;
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
  microServo.attach(6);
}

void loop() {
  estadoBotaoL = digitalRead(BotaoLampada);
  estadoBotaoP = digitalRead(BotaoPortao);
  ultimoEstadoServoMotor = digitalRead(microServo);

  if (estadoBotaoP == HIGH) {
    if (estadoServoMotor == 50) {
      microServo.write(130);
      delay(15);
    }
  }
  else if (estadoBotaoP == HIGH) {
    if (ultimoEstadoServoMotor == 130) {
      microServo.write(50);
      delay(15);
    }
  }
}
