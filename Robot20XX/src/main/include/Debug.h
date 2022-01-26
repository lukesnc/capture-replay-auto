/*
 * Team 3229
 * Debug.h
 */

#pragma once

#define USE_DEBUG

#ifdef USE_DEBUG
#    include <frc/smartdashboard/SmartDashboard.h>
#    include <iostream>
#    define debugDashSend(s, x) frc::SmartDashboard::PutData(s, x)
#    define debugDashNum(s, x) frc::SmartDashboard::PutNumber(s, x)
#    define debugCons(x) std::cout << x;
#    define debug(x) x
#else
#    define debugDashSend(s, x)
#    define debugDashNum(s, x)
#    define debugCons(x)
#    define debug(x)
#endif