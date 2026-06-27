# Solar Wireless EV Charging System

## Description

The Solar Wireless EV Charging System is a renewable energy-based project that enables wireless charging of electric vehicles using solar power. A solar panel generates electrical energy, which is regulated by a charge controller and stored in a rechargeable battery. The stored energy is supplied to a wireless transmitter coil that transfers power through a magnetic field to a receiver coil without any physical cable connection. The received power is converted into DC using a rectifier circuit and used to charge an EV battery or DC load. An ESP32 microcontroller monitors the charging voltage through a voltage sensor and displays the charging status on a 16x2 I2C LCD. This project demonstrates the integration of renewable energy, wireless power transfer, and IoT monitoring technologies for efficient and eco-friendly EV charging.

## Components Used

- ESP32 Development Board
- Solar Panel
- Charge Controller
- Rechargeable Battery
- Wireless Transmitter Coil
- Wireless Receiver Coil
- Rectifier Circuit
- Voltage Sensor Module
- 16x2 I2C LCD Display
- Jumper Wires

## Connections

### Voltage Sensor → ESP32

| Voltage Sensor | ESP32 |
|---------------|-------|
| VCC | 3.3V |
| GND | GND |
| OUT | GPIO34 |

### I2C LCD → ESP32

| LCD | ESP32 |
|-----|-------|
| VCC | 5V |
| GND | GND |
| SDA | GPIO21 |
| SCL | GPIO22 |

## Working Principle

1. The solar panel converts sunlight into electrical energy.
2. The charge controller regulates the charging process.
3. The battery stores the generated solar energy.
4. The stored energy powers the wireless transmitter coil.
5. The transmitter coil creates a magnetic field.
6. The receiver coil captures the magnetic field and generates electrical energy.
7. The rectifier converts the received AC power into DC power.
8. The EV battery is charged wirelessly.
9. The ESP32 monitors charging voltage and displays charging status on the LCD.

## Features

- Solar-powered charging
- Wireless power transfer
- Real-time voltage monitoring
- LCD status display
- Eco-friendly design
- Low maintenance

## Applications

- Electric Vehicle Charging Stations
- Smart Parking Systems
- Renewable Energy Projects
- Wireless Power Transfer Systems
- Research and Educational Projects

## Author

Akhand Parasar