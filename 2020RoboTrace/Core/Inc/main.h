/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define MAKER1_Pin GPIO_PIN_2
#define MAKER1_GPIO_Port GPIOE
#define R_SW1_Pin GPIO_PIN_2
#define R_SW1_GPIO_Port GPIOB
#define R_SW2_Pin GPIO_PIN_7
#define R_SW2_GPIO_Port GPIOE
#define R_SW4_Pin GPIO_PIN_8
#define R_SW4_GPIO_Port GPIOE
#define ENCODER_A_Pin GPIO_PIN_9
#define ENCODER_A_GPIO_Port GPIOE
#define R_SW8_Pin GPIO_PIN_10
#define R_SW8_GPIO_Port GPIOE
#define ENCODER_B_Pin GPIO_PIN_11
#define ENCODER_B_GPIO_Port GPIOE
#define BZ_PWM_Pin GPIO_PIN_13
#define BZ_PWM_GPIO_Port GPIOE
#define SENSOR_PWM_Pin GPIO_PIN_14
#define SENSOR_PWM_GPIO_Port GPIOE
#define SPI_CS_Pin GPIO_PIN_12
#define SPI_CS_GPIO_Port GPIOB
#define MAKER2_Pin GPIO_PIN_8
#define MAKER2_GPIO_Port GPIOD
#define MOTOR_PH_Pin GPIO_PIN_9
#define MOTOR_PH_GPIO_Port GPIOD
#define MOTOR_PHD10_Pin GPIO_PIN_10
#define MOTOR_PHD10_GPIO_Port GPIOD
#define MOTOR_PWM_Pin GPIO_PIN_14
#define MOTOR_PWM_GPIO_Port GPIOD
#define MOTOR_PWMD15_Pin GPIO_PIN_15
#define MOTOR_PWMD15_GPIO_Port GPIOD
#define ENCODER_BC6_Pin GPIO_PIN_6
#define ENCODER_BC6_GPIO_Port GPIOC
#define ENCODER_AC7_Pin GPIO_PIN_7
#define ENCODER_AC7_GPIO_Port GPIOC
#define LED2_Pin GPIO_PIN_8
#define LED2_GPIO_Port GPIOA
#define LED1_Pin GPIO_PIN_9
#define LED1_GPIO_Port GPIOA
#define LEDB_Pin GPIO_PIN_10
#define LEDB_GPIO_Port GPIOA
#define LEDG_Pin GPIO_PIN_11
#define LEDG_GPIO_Port GPIOA
#define LEDR_Pin GPIO_PIN_12
#define LEDR_GPIO_Port GPIOA
#define SD_INSERT_Pin GPIO_PIN_15
#define SD_INSERT_GPIO_Port GPIOA
#define SW5_Pin GPIO_PIN_0
#define SW5_GPIO_Port GPIOD
#define SW4_Pin GPIO_PIN_1
#define SW4_GPIO_Port GPIOD
#define SW3_Pin GPIO_PIN_3
#define SW3_GPIO_Port GPIOD
#define SW2_Pin GPIO_PIN_4
#define SW2_GPIO_Port GPIOD
#define SW1_Pin GPIO_PIN_7
#define SW1_GPIO_Port GPIOD
#define ESC_WPM_Pin GPIO_PIN_4
#define ESC_WPM_GPIO_Port GPIOB
#define ESC_PWM_Pin GPIO_PIN_5
#define ESC_PWM_GPIO_Port GPIOB
#define ESC_PWMB8_Pin GPIO_PIN_8
#define ESC_PWMB8_GPIO_Port GPIOB
#define ESC_PWMB9_Pin GPIO_PIN_9
#define ESC_PWMB9_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
