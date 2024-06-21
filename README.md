# ESP8266 Relay Control with Blynk

## Overview

This project demonstrates how to control four relays using an ESP8266 microcontroller and the Blynk platform. With this setup, you can remotely control appliances or devices connected to each relay through the Blynk smartphone app.

## Requirements

- ESP8266 Microcontroller
- Four Relays
- Blynk App (iOS or Android)
- Wi-Fi Network

## Installation

### Blynk Setup

1. **Create a Blynk Account**: Download the Blynk app from the App Store or Google Play, and create an account.
   
2. **Create a New Project**:
   - Open the Blynk app and click on "New Project".
   - Choose the device: ESP8266.
   - Select the connection type: Wi-Fi.
   
3. **Obtain Auth Token**:
   - After creating the project, an authentication token (Auth Token) will be sent to your email.
   - Copy this Auth Token. You will need it in your Arduino code.

### Arduino IDE Setup

1. **Install Libraries**:
   - Ensure you have the ESP8266 board and Blynk libraries installed in your Arduino IDE.

2. **Copy the Code**:
   - Copy the provided Arduino sketch into your Arduino IDE.

3. **Configure Credentials**:
   - Update the following in the Arduino sketch:
     - Replace `ssid[]` and `pass[]` with your Wi-Fi credentials.
     - Replace `auth[]` with the Blynk authentication token obtained earlier.

4. **Upload the Sketch**:
   - Connect your ESP8266 to your computer via USB.
   - Select the correct board and port in the Arduino IDE.
   - Click "Upload" to flash the code to your ESP8266.

## Usage

1. **Hardware Connection**:
   - Connect the relays to the ESP8266 GPIO pins (e.g., D1, D2, D3, D4).
   - Connect appliances or devices to the relays.

2. **Open Blynk App**:
   - Open the Blynk app on your smartphone.
   - Open the project you created earlier.

3. **Control Relays**:
   - Use the provided buttons (V1, V2, V3, V4) in the Blynk app to toggle each relay on or off.
   - Each relay corresponds to a connected appliance or device.

## Troubleshooting

- **Serial Monitor**: Use the Arduino IDE Serial Monitor at 115200 baud to debug and monitor messages from your ESP8266.
- **Check Connections**: Ensure all connections between the ESP8266, relays, and devices are secure and correctly wired.
- **Blynk Documentation**: Refer to the [Blynk Documentation](https://docs.blynk.io/) for troubleshooting Blynk-related issues.

## License

This project is licensed under the MIT License - see the LICENSE file for details.

## Acknowledgments

- Thanks to Blynk for providing a simple and powerful platform for IoT projects.
- Special thanks to the Arduino community for their support and resources.

