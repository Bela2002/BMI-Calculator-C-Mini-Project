# ⚖️ BMI Calculator (C Mini Project)

A simple yet informative **C programming mini-project** that calculates the **Body Mass Index (BMI)** based on the user's height and weight.  
This console-based program includes user authentication, input validation, and health category analysis.

---

## 📖 Overview

The BMI Calculator is designed to help users check their weight status and get suggestions for a healthy range based on their height.  
The application uses **feet/inches** for height and **kg/grams** for weight, and converts them internally for precise calculations.

---

## 🎯 Key Features

- 👤 **Login System**  
  - Requires valid **username (9999)** and **password (1234)** for access.

- ⚖️ **Weight Input:**  
  - Accepts **kilograms** and **grams** for weight.

- 📏 **Height Input:**  
  - Accepts **feet** and **inches** for height.

- 🔄 **Unit Conversion:**  
  - Converts height to **meters** and weight to **kilograms** for accurate BMI calculation.

- 📊 **BMI Evaluation:**  
  - Categorizes BMI as:
    - Underweight (BMI < 18.5)
    - Normal weight (BMI 18.5–24.9)
    - Overweight (BMI ≥ 25)

- 🎯 **Ideal Weight Suggestion:**  
  - Recommends the **healthy weight range** based on the user's height.

- ✅ **Input Validation:**  
  - Ensures all values entered are **positive numbers**.

---

## 🧮 Formula Used

**BMI = weight (kg) / [height (m)]²**

---

## 🛠️ Built With

- 📘 C Programming Language
- 🖥️ Console Interface (Standard Input/Output)

---

## 🚀 How to Run

1. Open the file in a C IDE or terminal.
2. Compile the source code:
   ```bash
   gcc bmi_calculator.c -o bmi_calculator
