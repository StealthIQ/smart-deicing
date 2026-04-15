#include "../include/controller.h"

DeIcingController::DeIcingController(float thresholdCelsius)
    : thresholdCelsius_(thresholdCelsius) {}

ControllerState DeIcingController::update(float temperatureCelsius) const {
    return ControllerState{temperatureCelsius < thresholdCelsius_};
}
