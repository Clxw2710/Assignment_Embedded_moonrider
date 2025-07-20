# Moonrider_Assignment_Pavan
# Indicators Control Using STM32 and Simulink Stateflow

This project implements **vehicle indicators (left, right, hazard) control logic** using:

- **STM32F407VG Discovery Board**
- **Simulink Stateflow model**
- **PWM-based LED blinking**
- **Button press detection**

---

##  **Project Summary**

 **Features implemented:**

- Button press detection logic (≥1s press) for left and right indicator buttons.  
- Simulink Stateflow model integrated into STM32 project.  
- PWM output to drive left and right indicator LEDs based on Stateflow outputs.  
- UART logging of button status and LED indicator states for debugging.

---

##  **High-Level Architecture**

1. **Inputs:**  
   - **PA0:** Left button input  
   - **PA1:** Right button input

2. **STM32F407VG:**  
   - Runs button detection logic in TIM3 interrupt (every 100ms).  
   - Calls Simulink Stateflow-generated step function to determine indicator outputs.  
   - Drives PWM outputs for left and right indicators using TIM4 Channels 3 and 4.  
   - Sends UART logs of button status and outputs.

3. **Outputs:**  
   - **TIM4 Channel 3:** Left LED PWM output  
   - **TIM4 Channel 4:** Right LED PWM output  
   - **USART2:** Logs for debugging

---

##  **Software Implementation**

| Feature | Implementation |
| --- | --- |
| **Button Detection** | GPIO inputs with ≥1s press detection in TIM3 interrupt handler. |
| **State Machine** | Simulink Stateflow model generated as C code, integrated and called in `main.c`. |
| **PWM Outputs** | TIM4 Channel 3 (Left LED), TIM4 Channel 4 (Right LED) with 50% duty cycle when ON. |
| **UART Logging** | Transmits button states and LED indicator outputs at each TIM3 interrupt. |

---
