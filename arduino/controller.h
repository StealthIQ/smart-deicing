#pragma once

struct ControllerState {
    bool heaterOn;
};

class DeIcingController {
  public:
    explicit DeIcingController(float thresholdCelsius)
        : thresholdCelsius_(thresholdCelsius) {}

    [[nodiscard]] ControllerState update(float temperatureCelsius) const {
        return ControllerState{temperatureCelsius < thresholdCelsius_};
    }

  private:
    float thresholdCelsius_;
};
