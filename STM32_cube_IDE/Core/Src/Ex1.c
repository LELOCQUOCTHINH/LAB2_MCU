#include "Ex1.h"

bool state = 0;

void Ex1_set()
{
	  set_time(1000);
	  HAL_GPIO_TogglePin(ANOT_COMMON_1_GPIO_Port, ANOT_COMMON_1_Pin);//turn on 7seg_1
}

void Ex1_run()
{
	  if(counter < 1)
	  	  {
	  		  HAL_GPIO_TogglePin(ANOT_COMMON_2_GPIO_Port, ANOT_COMMON_2_Pin);
	  		  HAL_GPIO_TogglePin(ANOT_COMMON_1_GPIO_Port, ANOT_COMMON_1_Pin);
	  		  HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
	  		  state = !state;
	  		  set_time(1000);
	  	  }

	  	  switch(state)
	  	  {
	  	  case 0:
	  		  display7SEG(1);
	  		  break;
	  	  default:
	  		  display7SEG(2);
	  		  break;
	  	  }
}

//void HAL_TIM_PeriodElapsedCallback ( TIM_HandleTypeDef * htim )
//{
//	counter--;
//}

