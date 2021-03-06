/*
 * ChibiOS/RT Application Layer for Miniature Cars
 * Copyright (C) 2013 - 2015 Christian Berger
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef DISCOVERYBOARD_H
#define DISCOVERYBOARD_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#include "ch.h"
#include "hal.h"
#include "shell.h"
#include "chprintf.h"
#include "chsprintf.h"
#include "STM32F4GPIO_AF.h"

// This file specifies the peripherals supported by this software.
#include "Peripherals.h"

#include "Lib/rsscanf.h"

// Here, all the header files for interacting with actors are collected.
#include "Actors/SteeringAcceleration/SteeringAcceleration.h"

// Here, all the header files for interacting with sensors are collected.
#include "Sensors/Infrared/Infrared.h"
//#include "Sensors/Razor9DoFIMU/Razor9DoFIMU.h"
#include "Sensors/Ultrasonic/Ultrasonic.h"
#include "Sensors/OnboardAccelerometer/OnboardAccelerometer.h"
#include "Sensors/RCReceiver/RCReceiver.h"
#include "Sensors/Temperature/Temperature.h"
#include "Sensors/WheelEncoder/WheelEncoder.h"

// Here, you'll find an example how to use the data received from the host.
#include "Example/RPNCalculator.h"

// Here, all the header files for protocol-based communication with the Discovery Board are collected.
#include "Protocol/ProtocolHandler2.h"
#include "Protocol/Protocol.h"

// Here, all the header files for interactively communicating with the Discovery Board are collected.
#include "UI/LEDs.h"
#include "UI/UserButton.h"
#include "UI/UserShellCommands.h"
#include "UI/UserShell.h"
#include "UI/UseShell.h"

#include "USB/USB.h"

#endif // DISCOVERYBOARD_H

