#include <cassert>

#include "../include/controller.h"

int main() {
    const DeIcingController controller(20.0f);

    assert(controller.update(25.0f).heaterOn == false);
    assert(controller.update(20.0f).heaterOn == false);
    assert(controller.update(19.9f).heaterOn == true);
    assert(controller.update(10.0f).heaterOn == true);

    return 0;
}
