# SmartGlass
# DIY Smart Augmented Reality Glasses Using Arduino Nano

This project is a smart wearable prototype that brings Augmented Reality (AR) into the DIY space using simple and affordable electronics. Inspired by the original guide from [Ankit Kunti on Instructables](https://www.instructables.com/DIY-Smart-Augmented-Reality-Glasses-Using-Arduino/), this version reconstructs and documents the build with a focus on educational clarity and open-source sharing.

The project enables real-time text display on a small OLED screen positioned in front of one eye—mimicking the heads-up display (HUD) concept found in smart glasses.

---

## 🔧 Components Used

| Component             | Description                                    |
|-----------------------|------------------------------------------------|
| **Arduino Nano**      | Microcontroller board based on ATmega328P     |
| **HC-05 Bluetooth**   | Module to wirelessly receive text from phone  |
| **OLED Display (0.96")** | I2C-based 128x64 pixel display for HUD     |
| **Li-ion Battery**    | Portable power source with a 5V boost module  |
| **Slide Switch**      | To turn the system on or off                  |
| **Connecting Wires**  | For electrical connections                    |
| **Glasses Frame**     | Holds components in wearable form             |

---

## 🧠 Why Arduino Nano?

The **Arduino Nano** is the perfect choice for this wearable project for several reasons:

- 🔹 **Compact Size**: Its small footprint makes it easy to embed on a glasses frame.
- 🔹 **Full Arduino Functionality**: It offers the same features as an Uno (ATmega328P) but in a much smaller form.
- 🔹 **Multiple I/O Pins**: Sufficient GPIOs for connecting the OLED, Bluetooth module, and any future sensors or upgrades.
- 🔹 **USB Mini Port**: Easy to program via USB without requiring extra hardware.
- 🔹 **Low Power Consumption**: Efficient enough to run on a small Li-ion battery.

Its simplicity, versatility, and affordability make it ideal for wearable and space-constrained projects.

---

## 💡 How It Works

1. The OLED display is positioned in the wearer’s field of view to create a minimal AR experience.
2. The **HC-05 Bluetooth module** connects wirelessly to a smartphone or PC and receives messages over serial communication.
3. The **Arduino Nano** receives this data through its RX pin and renders the text on the OLED display.
4. The display continuously updates in real-time to show incoming messages—useful for notifications, navigation text, or short instructions.

---

## 📲 Features

- ✅ Wireless message display using Bluetooth
- ✅ Real-time HUD experience via OLED
- ✅ Fully portable and wearable form factor
- ✅ Low-cost DIY alternative to commercial AR glasses
- ✅ Easily extendable to include sensors or gesture control

---

## 📁 Project Structure

DIY-AR-Glasses/
├── Arduino/
│   └── ar_glasses.ino             # Main Arduino sketch (code for Nano + OLED + Bluetooth)
├── Images/
│   ├── final_build.jpg            # Photo of the finished AR glasses
│   └── assembly_steps.jpg         # Photos showing step-by-step assembly
├── Schematics/
│   └── circuit_diagram.png        # Wiring diagram or Fritzing schematic
├── README.md                      # Complete project documentation
└── LICENSE                        # Open-source license file (e.g., MIT)
