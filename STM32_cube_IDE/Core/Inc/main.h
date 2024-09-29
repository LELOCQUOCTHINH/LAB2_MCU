/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
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
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */
	typedef enum{false, true} bool;
	#define Tick 10
/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */
	extern int counter;
/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */
void set_time(int time);
/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_RED_Pin GPIO_PIN_13
#define LED_RED_GPIO_Port GPIOC
#define ENM0_Pin GPIO_PIN_4
#define ENM0_GPIO_Port GPIOA
#define ENM1_Pin GPIO_PIN_5
#define ENM1_GPIO_Port GPIOA
#define ENM2_Pin GPIO_PIN_6
#define ENM2_GPIO_Port GPIOA
#define ENM3_Pin GPIO_PIN_7
#define ENM3_GPIO_Port GPIOA
#define ROW0_Pin GPIO_PIN_0
#define ROW0_GPIO_Port GPIOB
#define ROW1_Pin GPIO_PIN_1
#define ROW1_GPIO_Port GPIOB
#define ROW2_Pin GPIO_PIN_2
#define ROW2_GPIO_Port GPIOB
#define C_7_SEG_Pin GPIO_PIN_10
#define C_7_SEG_GPIO_Port GPIOB
#define D_7_SEG_Pin GPIO_PIN_11
#define D_7_SEG_GPIO_Port GPIOB
#define E_7_SEG_Pin GPIO_PIN_12
#define E_7_SEG_GPIO_Port GPIOB
#define F_7_SEG_Pin GPIO_PIN_13
#define F_7_SEG_GPIO_Port GPIOB
#define G_7_SEG_Pin GPIO_PIN_14
#define G_7_SEG_GPIO_Port GPIOB
#define DOT_Pin GPIO_PIN_15
#define DOT_GPIO_Port GPIOB
#define ENM4_Pin GPIO_PIN_8
#define ENM4_GPIO_Port GPIOA
#define ENM5_Pin GPIO_PIN_9
#define ENM5_GPIO_Port GPIOA
#define ENM6_Pin GPIO_PIN_10
#define ENM6_GPIO_Port GPIOA
#define ENM7_Pin GPIO_PIN_11
#define ENM7_GPIO_Port GPIOA
#define ANOT_COMMON_1_Pin GPIO_PIN_12
#define ANOT_COMMON_1_GPIO_Port GPIOA
#define ANOT_COMMON_2_Pin GPIO_PIN_13
#define ANOT_COMMON_2_GPIO_Port GPIOA
#define ANOT_COMMON_3_Pin GPIO_PIN_14
#define ANOT_COMMON_3_GPIO_Port GPIOA
#define ANOT_COMMON_4_Pin GPIO_PIN_15
#define ANOT_COMMON_4_GPIO_Port GPIOA
#define ROW3_Pin GPIO_PIN_3
#define ROW3_GPIO_Port GPIOB
#define ROW4_Pin GPIO_PIN_4
#define ROW4_GPIO_Port GPIOB
#define ROW5_Pin GPIO_PIN_5
#define ROW5_GPIO_Port GPIOB
#define ROW6_Pin GPIO_PIN_6
#define ROW6_GPIO_Port GPIOB
#define ROW7_Pin GPIO_PIN_7
#define ROW7_GPIO_Port GPIOB
#define A_7_SEG_Pin GPIO_PIN_8
#define A_7_SEG_GPIO_Port GPIOB
#define B_7_SEG_Pin GPIO_PIN_9
#define B_7_SEG_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
