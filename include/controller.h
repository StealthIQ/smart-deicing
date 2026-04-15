#pragma once

struct ControllerState {
    bool heaterOn;
};

class DeIcingController {
  public:
    explicit DeIcingController(float thresholdCelsius);

    [[nodiscard]] ControllerState update(float temperatureCelsius) const;

  private:
    float thresholdCelsius_;
};
