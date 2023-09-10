# Automatic Speed Controlling of Vehicle

## Overview

Automatic speed controlling of vehicle, based on Real time operating system designed over STM32f407VGT6 development board and VL53LOX LiDAR Module. Traffic Sign detection using ESP32CAM module and pedestrian area detection oriented speed controlling, supported by Lidar module to avoid collision by maintaining safe distance. Data Transmission between modules is controlled by CAN Bus for reliable operations.

## Features

- **FreeRTOS:** We leverage FreeRTOS for real-time task scheduling, ensuring efficient and predictable execution of critical tasks.

- **STM32 Microcontroller:** The project is implemented on the STM32 microcontroller platform, known for its reliability and performance.

- **Lidar Module:** We integrate a Lidar module to provide accurate distance measurements for obstacle detection.

## Hardware Requirements

- STM32 Development Board (e.g., STM32F407F Discovery-01)
- Lidar Module (e.g., VL53LOX)
- Motor Driver and Motors for Vehicle Control
- Power Supply
- Sensors for Speed and Direction Control (e.g., encoders)
- ESP32CAM module

