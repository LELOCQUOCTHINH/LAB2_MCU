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
#define DOT_Pin GPIO_PIN_4
#define DOT_GPIO_Port GPIOA
#define LED_RED_Pin GPIO_PIN_5
#define LED_RED_GPIO_Port GPIOA
#define ANOT_COMMON_1_Pin GPIO_PIN_10
#define ANOT_COMMON_1_GPIO_Port GPIOB
#define ANOT_COMMON_2_Pin GPIO_PIN_11
#define ANOT_COMMON_2_GPIO_Port GPIOB
#define ANOT_COMMON_3_Pin GPIO_PIN_12
#define ANOT_COMMON_3_GPIO_Port GPIOB
#define ANOT_COMMON_4_Pin GPIO_PIN_13
#define ANOT_COMMON_4_GPIO_Port GPIOB
#define A_7_SEG_Pin GPIO_PIN_8
#define A_7_SEG_GPIO_Port GPIOA
#define B_7_SEG_Pin GPIO_PIN_9
#define B_7_SEG_GPIO_Port GPIOA
#define C_7_SEG_Pin GPIO_PIN_10
#define C_7_SEG_GPIO_Port GPIOA
#define D_7_SEG_Pin GPIO_PIN_11
#define D_7_SEG_GPIO_Port GPIOA
#define E_7_SEG_Pin GPIO_PIN_12
#define E_7_SEG_GPIO_Port GPIOA
#define F_7_SEG_Pin GPIO_PIN_13
#define F_7_SEG_GPIO_Port GPIOA
#define G_7_SEG_Pin GPIO_PIN_14
#define G_7_SEG_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
