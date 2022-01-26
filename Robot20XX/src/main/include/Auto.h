/*
 * Team 3229
 * Auto.h
 */

#pragma once

#include "Math.h"
#include <iostream>
#include <string>

#include "frc/Timer.h"
#include "frc/XboxController.h"
#include "frc/smartdashboard/SmartDashboard.h"

#include "CaptureFile.h"
#include "ControllerInputs.h"
#include "Debug.h"
#include "drive/Drivetrain.h"
#include "powercell/Intake.h"
#include "powercell/Limelight.h"

class Auto {
private:
    bool autoDone = false;

    // Pass in our subsystems
    Drivetrain* autoChassis;
    Limelight* autoVisionSystem;
    Shooter* autoShooter;
    Intake* autoIntake;
    Turret* autoTurret;

    // Use .aut file extension
    std::string stationFileList = "crossLineAndShoot.aut, crossLine.aut";
    std::string defaultFileName = "defaultAutoPath.aut";
    std::string stationText = "Auto file path: /home/lvuser/";
    std::string inputFileName = "crossLineAndShoot";

    const bool WRITE = true;
    const bool READ = false;
    CaptureFile cmdFile {};

public:
    Auto(Drivetrain* c, Turret* t, Shooter* s, Limelight* v, Intake* i);
    ~Auto();
    void SetupPlayback();
    void ReadFile(cmd* inputs);
    void SetupRecording();
    void Record(cmd* inputs);
    void CloseFile();
};
