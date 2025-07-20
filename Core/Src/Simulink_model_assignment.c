
/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Simulink_model_assignment.c
 *
 * Code generated for Simulink model 'Simulink_model_assignment'.
 *
 * Model version                  : 1.20
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Mon Jul 21 01:42:11 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Simulink_model_assignment.h"
#include "rtwtypes.h"

/* Named constants for Chart: '<Root>/Chart' */
#define Simulink_mod_IN_RIGHT_INDICATOR ((uint8_T)4U)
#define Simulink_mode_IN_LEFT_INDICATOR ((uint8_T)2U)
#define Simulink_model_ass_IN_HAZARD_ON ((uint8_T)1U)
#define Simulink_model_assignmen_IN_OFF ((uint8_T)3U)

/* Block states (default storage) */
DW_Simulink_model_assignment_T Simulink_model_assignment_DW;

/* External inputs (root inport signals with default storage) */
ExtU_Simulink_model_assignmen_T Simulink_model_assignment_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Simulink_model_assignmen_T Simulink_model_assignment_Y;

/* Real-time model */
static RT_MODEL_Simulink_model_assig_T Simulink_model_assignment_M_;
RT_MODEL_Simulink_model_assig_T *const Simulink_model_assignment_M =
  &Simulink_model_assignment_M_;

/* Model step function */
void Simulink_model_assignment_step(void)
{
  /* Chart: '<Root>/Chart' incorporates:
   *  Inport: '<Root>/left_button_1s'
   *  Inport: '<Root>/right_button_1s'
   */
  switch (Simulink_model_assignment_DW.is_c3_Simulink_model_assignment) {
   case Simulink_model_ass_IN_HAZARD_ON:
    if ((Simulink_model_assignment_U.left_button_1s != 0.0) &&
        (!(Simulink_model_assignment_U.right_button_1s != 0.0))) {
      Simulink_model_assignment_DW.is_c3_Simulink_model_assignment =
        Simulink_mode_IN_LEFT_INDICATOR;

      /* Outport: '<Root>/right_led_blink' */
      Simulink_model_assignment_Y.right_led_blink = 0.0;

      /* Outport: '<Root>/left_led_blink' */
      Simulink_model_assignment_Y.left_led_blink = 1.0;

      /* Outport: '<Root>/hazard_blink' */
      Simulink_model_assignment_Y.hazard_blink = 0.0;

      /* Outport: '<Root>/uart_log_code' */
      Simulink_model_assignment_Y.uart_log_code = 2.0;
    } else {
      /* Outport: '<Root>/right_led_blink' */
      Simulink_model_assignment_Y.right_led_blink = 1.0;

      /* Outport: '<Root>/left_led_blink' */
      Simulink_model_assignment_Y.left_led_blink = 1.0;

      /* Outport: '<Root>/uart_log_code' */
      Simulink_model_assignment_Y.uart_log_code = 3.0;
    }
    break;

   case Simulink_mode_IN_LEFT_INDICATOR:
    if ((Simulink_model_assignment_U.left_button_1s != 0.0) &&
        (!(Simulink_model_assignment_U.right_button_1s != 0.0))) {
      Simulink_model_assignment_DW.is_c3_Simulink_model_assignment =
        Simulink_model_assignmen_IN_OFF;

      /* Outport: '<Root>/right_led_blink' */
      Simulink_model_assignment_Y.right_led_blink = 0.0;

      /* Outport: '<Root>/left_led_blink' */
      Simulink_model_assignment_Y.left_led_blink = 0.0;

      /* Outport: '<Root>/hazard_blink' */
      Simulink_model_assignment_Y.hazard_blink = 0.0;

      /* Outport: '<Root>/uart_log_code' */
      Simulink_model_assignment_Y.uart_log_code = 0.0;
    } else if ((Simulink_model_assignment_U.left_button_1s != 0.0) &&
               (Simulink_model_assignment_U.right_button_1s != 0.0)) {
      Simulink_model_assignment_DW.is_c3_Simulink_model_assignment =
        Simulink_model_ass_IN_HAZARD_ON;

      /* Outport: '<Root>/right_led_blink' */
      Simulink_model_assignment_Y.right_led_blink = 1.0;

      /* Outport: '<Root>/left_led_blink' */
      Simulink_model_assignment_Y.left_led_blink = 1.0;

      /* Outport: '<Root>/uart_log_code' */
      Simulink_model_assignment_Y.uart_log_code = 3.0;
    } else if ((Simulink_model_assignment_U.right_button_1s != 0.0) &&
               (!(Simulink_model_assignment_U.left_button_1s != 0.0))) {
      Simulink_model_assignment_DW.is_c3_Simulink_model_assignment =
        Simulink_mod_IN_RIGHT_INDICATOR;

      /* Outport: '<Root>/right_led_blink' */
      Simulink_model_assignment_Y.right_led_blink = 1.0;

      /* Outport: '<Root>/left_led_blink' */
      Simulink_model_assignment_Y.left_led_blink = 0.0;

      /* Outport: '<Root>/hazard_blink' */
      Simulink_model_assignment_Y.hazard_blink = 0.0;

      /* Outport: '<Root>/uart_log_code' */
      Simulink_model_assignment_Y.uart_log_code = 1.0;
    } else {
      /* Outport: '<Root>/right_led_blink' */
      Simulink_model_assignment_Y.right_led_blink = 0.0;

      /* Outport: '<Root>/left_led_blink' */
      Simulink_model_assignment_Y.left_led_blink = 1.0;

      /* Outport: '<Root>/hazard_blink' */
      Simulink_model_assignment_Y.hazard_blink = 0.0;

      /* Outport: '<Root>/uart_log_code' */
      Simulink_model_assignment_Y.uart_log_code = 2.0;
    }
    break;

   case Simulink_model_assignmen_IN_OFF:
    if ((Simulink_model_assignment_U.right_button_1s != 0.0) &&
        (!(Simulink_model_assignment_U.left_button_1s != 0.0))) {
      Simulink_model_assignment_DW.is_c3_Simulink_model_assignment =
        Simulink_mod_IN_RIGHT_INDICATOR;

      /* Outport: '<Root>/right_led_blink' */
      Simulink_model_assignment_Y.right_led_blink = 1.0;

      /* Outport: '<Root>/left_led_blink' */
      Simulink_model_assignment_Y.left_led_blink = 0.0;

      /* Outport: '<Root>/hazard_blink' */
      Simulink_model_assignment_Y.hazard_blink = 0.0;

      /* Outport: '<Root>/uart_log_code' */
      Simulink_model_assignment_Y.uart_log_code = 1.0;
    } else if ((Simulink_model_assignment_U.left_button_1s != 0.0) &&
               (!(Simulink_model_assignment_U.right_button_1s != 0.0))) {
      Simulink_model_assignment_DW.is_c3_Simulink_model_assignment =
        Simulink_mode_IN_LEFT_INDICATOR;

      /* Outport: '<Root>/right_led_blink' */
      Simulink_model_assignment_Y.right_led_blink = 0.0;

      /* Outport: '<Root>/left_led_blink' */
      Simulink_model_assignment_Y.left_led_blink = 1.0;

      /* Outport: '<Root>/hazard_blink' */
      Simulink_model_assignment_Y.hazard_blink = 0.0;

      /* Outport: '<Root>/uart_log_code' */
      Simulink_model_assignment_Y.uart_log_code = 2.0;
    } else if ((Simulink_model_assignment_U.left_button_1s != 0.0) &&
               (Simulink_model_assignment_U.right_button_1s != 0.0)) {
      Simulink_model_assignment_DW.is_c3_Simulink_model_assignment =
        Simulink_model_ass_IN_HAZARD_ON;

      /* Outport: '<Root>/right_led_blink' */
      Simulink_model_assignment_Y.right_led_blink = 1.0;

      /* Outport: '<Root>/left_led_blink' */
      Simulink_model_assignment_Y.left_led_blink = 1.0;

      /* Outport: '<Root>/uart_log_code' */
      Simulink_model_assignment_Y.uart_log_code = 3.0;
    } else {
      /* Outport: '<Root>/right_led_blink' */
      Simulink_model_assignment_Y.right_led_blink = 0.0;

      /* Outport: '<Root>/left_led_blink' */
      Simulink_model_assignment_Y.left_led_blink = 0.0;

      /* Outport: '<Root>/hazard_blink' */
      Simulink_model_assignment_Y.hazard_blink = 0.0;

      /* Outport: '<Root>/uart_log_code' */
      Simulink_model_assignment_Y.uart_log_code = 0.0;
    }
    break;

   default:
    /* case IN_RIGHT_INDICATOR: */
    if ((Simulink_model_assignment_U.right_button_1s != 0.0) &&
        (!(Simulink_model_assignment_U.left_button_1s != 0.0))) {
      Simulink_model_assignment_DW.is_c3_Simulink_model_assignment =
        Simulink_model_assignmen_IN_OFF;

      /* Outport: '<Root>/right_led_blink' */
      Simulink_model_assignment_Y.right_led_blink = 0.0;

      /* Outport: '<Root>/left_led_blink' */
      Simulink_model_assignment_Y.left_led_blink = 0.0;

      /* Outport: '<Root>/hazard_blink' */
      Simulink_model_assignment_Y.hazard_blink = 0.0;

      /* Outport: '<Root>/uart_log_code' */
      Simulink_model_assignment_Y.uart_log_code = 0.0;
    } else if ((Simulink_model_assignment_U.left_button_1s != 0.0) &&
               (Simulink_model_assignment_U.right_button_1s != 0.0)) {
      Simulink_model_assignment_DW.is_c3_Simulink_model_assignment =
        Simulink_model_ass_IN_HAZARD_ON;

      /* Outport: '<Root>/right_led_blink' */
      Simulink_model_assignment_Y.right_led_blink = 1.0;

      /* Outport: '<Root>/left_led_blink' */
      Simulink_model_assignment_Y.left_led_blink = 1.0;

      /* Outport: '<Root>/uart_log_code' */
      Simulink_model_assignment_Y.uart_log_code = 3.0;
    } else if ((Simulink_model_assignment_U.left_button_1s != 0.0) &&
               (!(Simulink_model_assignment_U.right_button_1s != 0.0))) {
      Simulink_model_assignment_DW.is_c3_Simulink_model_assignment =
        Simulink_mode_IN_LEFT_INDICATOR;

      /* Outport: '<Root>/right_led_blink' */
      Simulink_model_assignment_Y.right_led_blink = 0.0;

      /* Outport: '<Root>/left_led_blink' */
      Simulink_model_assignment_Y.left_led_blink = 1.0;

      /* Outport: '<Root>/hazard_blink' */
      Simulink_model_assignment_Y.hazard_blink = 0.0;

      /* Outport: '<Root>/uart_log_code' */
      Simulink_model_assignment_Y.uart_log_code = 2.0;
    } else {
      /* Outport: '<Root>/right_led_blink' */
      Simulink_model_assignment_Y.right_led_blink = 1.0;

      /* Outport: '<Root>/left_led_blink' */
      Simulink_model_assignment_Y.left_led_blink = 0.0;

      /* Outport: '<Root>/hazard_blink' */
      Simulink_model_assignment_Y.hazard_blink = 0.0;

      /* Outport: '<Root>/uart_log_code' */
      Simulink_model_assignment_Y.uart_log_code = 1.0;
    }
    break;
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void Simulink_model_assignment_initialize(void)
{
  /* Chart: '<Root>/Chart' */
  Simulink_model_assignment_DW.is_c3_Simulink_model_assignment =
    Simulink_model_assignmen_IN_OFF;
}

/* Model terminate function */
void Simulink_model_assignment_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
