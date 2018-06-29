#include <gmock/gmock.h>

#include "plugins/action/action_result.h"

namespace dronecode_sdk {
namespace testing {

class MockAction {
public:
    MOCK_CONST_METHOD0(arm, ActionResult());
    MOCK_CONST_METHOD0(disarm, ActionResult());
    MOCK_CONST_METHOD0(takeoff, ActionResult());
    MOCK_CONST_METHOD0(land, ActionResult());
    MOCK_CONST_METHOD0(kill, ActionResult());
    MOCK_CONST_METHOD0(return_to_launch, ActionResult());
    MOCK_CONST_METHOD0(transition_to_fixedwing, ActionResult());
    MOCK_CONST_METHOD0(transition_to_multicopter, ActionResult());
    MOCK_CONST_METHOD0(get_takeoff_altitude_m, float());
    MOCK_CONST_METHOD1(set_takeoff_altitude, void(float));
    MOCK_CONST_METHOD0(get_max_speed_m_s, float());
    MOCK_CONST_METHOD1(set_max_speed, void(float));
};

} // namespace testing
} // namespace dronecode_sdk
