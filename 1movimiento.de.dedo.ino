#include <Servo.h>

Servo servoFalange;  // Servo para la falange

int angulo = 90;  // Ángulo de la falange

void setup() {
  servoFalange.attach(7);  // Conecta el servo de la falange al pin 7
}

void loop() {
  // Mueve la falange a la posición deseada
  servoFalange.write(angulo);

  delay(1000);  // Espera 1 segundo
  
  // Vuelve a la posición inicial
  //servoFalange.write(160);  // 90 grados es la posición inicial

  //delay(1000);  // Espera 1 segundo antes de repetir el movimiento

  servoFalange.write(10);  // 90 grados es la posición inicial

  delay(1000);  // Espera 1 segundo antes de repetir el movimiento
}
