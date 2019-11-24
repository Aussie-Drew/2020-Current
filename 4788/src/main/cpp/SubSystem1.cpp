#include "SubSystem1.h"
#include "ControlMap.h"


SubSystem::SubSystem(int SRX1_, int SRX2_) {

  // Initialise Motors
  MotorSRX1 = new curtinfrc::TalonSrx(SRX1_);
  MotorSRX2 = new curtinfrc::TalonSrx(SRX2_);

  // Zero Encoders (Only SRX's Have encoders)
  MotorSRX1->ZeroEncoder();
  MotorSRX2->ZeroEncoder();
}