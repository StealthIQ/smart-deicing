#include <iostream>
#include <vector>

#include "../include/controller.h"

int main() {
    const DeIcingController controller(20.0f);
    const std::vector<float> testTemperatures{28.5f, 24.0f, 21.0f, 19.5f, 15.0f, 22.0f};

    for (const float temperature : testTemperatures) {
        const ControllerState state = controller.update(temperature);

        std::cout << "Temp: " << temperature << " C"
                  << " | Heater: " << (state.heaterOn ? "ON" : "OFF") << '\n';
    }

    return 0;
}
