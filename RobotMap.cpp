// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
SpeedController* RobotMap::driverLeftRearController = NULL;
SpeedController* RobotMap::driverLeftFrontController = NULL;
SpeedController* RobotMap::driverRightFrontController = NULL;
SpeedController* RobotMap::driverRightRearController = NULL;
RobotDrive* RobotMap::driverRobotDrive41 = NULL;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
void RobotMap::init() {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	LiveWindow* lw = LiveWindow::GetInstance();
	driverLeftRearController = new Jaguar(1, 1);
	lw->AddActuator("Driver", "Left Rear Controller", (Jaguar*) driverLeftRearController);
	
	driverLeftFrontController = new Jaguar(1, 2);
	lw->AddActuator("Driver", "Left Front Controller", (Jaguar*) driverLeftFrontController);
	
	driverRightFrontController = new Jaguar(1, 3);
	lw->AddActuator("Driver", "Right Front Controller", (Jaguar*) driverRightFrontController);
	
	driverRightRearController = new Jaguar(1, 4);
	lw->AddActuator("Driver", "Right Rear Controller", (Jaguar*) driverRightRearController);
	
	driverRobotDrive41 = new RobotDrive(driverLeftFrontController, driverLeftRearController,
              driverRightFrontController, driverRightRearController);
	
	driverRobotDrive41->SetSafetyEnabled(true);
        driverRobotDrive41->SetExpiration(0.1);
        driverRobotDrive41->SetSensitivity(0.5);
        driverRobotDrive41->SetMaxOutput(1.0);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
