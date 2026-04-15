#include "controller.h"

namespace {
constexpr int kSensorPin = A0;
constexpr int kHeaterLedPin = 8;
constexpr float kThresholdCelsius = 20.0f;

DeIcingController controller(kThresholdCelsius);

float readLm35TemperatureCelsius() {
  const int sensorValue = analogRead(kSensorPin);
  const float voltage = sensorValue * (5.0f / 1023.0f);

  return voltage * 100.0f;
}
}  // namespace

void setup() {
  pinMode(kHeaterLedPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  const float temperatureCelsius = readLm35TemperatureCelsius();
  const ControllerState state = controller.update(temperatureCelsius);

  digitalWrite(kHeaterLedPin, state.heaterOn ? HIGH : LOW);

  Serial.print("Temperature: ");
  Serial.print(temperatureCelsius);
  Serial.print(" C | Heater: ");
  Serial.println(state.heaterOn ? "ON" : "OFF");

  delay(1000);
}
