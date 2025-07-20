
/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Simulink_model_assignment.h
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

#ifndef Simulink_model_assignment_h_
#define Simulink_model_assignment_h_
#ifndef Simulink_model_assignment_COMMON_INCLUDES_
#define Simulink_model_assignment_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                          /* Simulink_model_assignment_COMMON_INCLUDES_ */

#include "Simulink_model_assignment_types.h"
#include <stddef.h>
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint8_T is_c3_Simulink_model_assignment;/* '<Root>/Chart' */
} DW_Simulink_model_assignment_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T right_button_1s;              /* '<Root>/right_button_1s' */
  real_T left_button_1s;               /* '<Root>/left_button_1s' */
} ExtU_Simulink_model_assignmen_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T left_led_blink;               /* '<Root>/left_led_blink' */
  real_T right_led_blink;              /* '<Root>/right_led_blink' */
  real_T hazard_blink;                 /* '<Root>/hazard_blink' */
  real_T uart_log_code;                /* '<Root>/uart_log_code' */
} ExtY_Simulink_model_assignmen_T;

/* Real-time Model Data Structure */
struct tag_RTM_Simulink_model_assign_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_Simulink_model_assignment_T Simulink_model_assignment_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_Simulink_model_assignmen_T Simulink_model_assignment_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Simulink_model_assignmen_T Simulink_model_assignment_Y;

/* Model entry point functions */
extern void Simulink_model_assignment_initialize(void);
extern void Simulink_model_assignment_step(void);
extern void Simulink_model_assignment_terminate(void);
#endif
