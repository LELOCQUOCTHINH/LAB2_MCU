#include "Ex3.h"

	const int MAX_LED = 4;
	int index_led = 0;
	int led_buffer [4] = {1 , 2 , 3 , 4};
	bool indicator50 = 0; //indicate whereas timer in interval 50ms

	void Ex3_set()
	{
		set_time(1000);
	}

void Ex3_run()
{
	if(index_led >= MAX_LED)
	{
		index_led = 0;
	}
}

void HAL_TIM_PeriodElapsedCallback ( TIM_HandleTypeDef * htim )
{
	if(counter < 51 && !indicator50 )
	{
		update7SEG(index_led++);
		indicator50 = 1;
	}

	if(counter < 1)
	{
		set_time(1000);
		indicator50 = 0;
	}

	counter --;
}

void update7SEG ( int index )
{
	 switch ( index )
	 {
		 case 0:
		 // Display the first 7 SEG with led_buffer [0]
				HAL_GPIO_WritePin(ANOT_COMMON_1_GPIO_Port, ANOT_COMMON_1_Pin, 0);
				HAL_GPIO_WritePin(ANOT_COMMON_2_GPIO_Port, ANOT_COMMON_2_Pin, 1);
				HAL_GPIO_WritePin(ANOT_COMMON_3_GPIO_Port, ANOT_COMMON_3_Pin, 1);
				HAL_GPIO_WritePin(ANOT_COMMON_4_GPIO_Port, ANOT_COMMON_4_Pin, 1);
				display7SEG(led_buffer [0]);
			 break ;
		 case 1:
		 // Display the second 7 SEG with led_buffer [1]
				HAL_GPIO_WritePin(ANOT_COMMON_1_GPIO_Port, ANOT_COMMON_1_Pin, 1);
				HAL_GPIO_WritePin(ANOT_COMMON_2_GPIO_Port, ANOT_COMMON_2_Pin, 0);
				HAL_GPIO_WritePin(ANOT_COMMON_3_GPIO_Port, ANOT_COMMON_3_Pin, 1);
				HAL_GPIO_WritePin(ANOT_COMMON_4_GPIO_Port, ANOT_COMMON_4_Pin, 1);
				display7SEG(led_buffer [1]);
			 break ;
		 case 2:
		 // Display the third 7 SEG with led_buffer [2]
				HAL_GPIO_WritePin(ANOT_COMMON_1_GPIO_Port, ANOT_COMMON_1_Pin, 1);
				HAL_GPIO_WritePin(ANOT_COMMON_2_GPIO_Port, ANOT_COMMON_2_Pin, 1);
				HAL_GPIO_WritePin(ANOT_COMMON_3_GPIO_Port, ANOT_COMMON_3_Pin, 0);
				HAL_GPIO_WritePin(ANOT_COMMON_4_GPIO_Port, ANOT_COMMON_4_Pin, 1);
				display7SEG(led_buffer [2]);
			 break ;
		 case 3:
		 // Display the forth 7 SEG with led_buffer [3]
				HAL_GPIO_WritePin(ANOT_COMMON_1_GPIO_Port, ANOT_COMMON_1_Pin, 1);
				HAL_GPIO_WritePin(ANOT_COMMON_2_GPIO_Port, ANOT_COMMON_2_Pin, 1);
				HAL_GPIO_WritePin(ANOT_COMMON_3_GPIO_Port, ANOT_COMMON_3_Pin, 1);
				HAL_GPIO_WritePin(ANOT_COMMON_4_GPIO_Port, ANOT_COMMON_4_Pin, 0);
				display7SEG(led_buffer [3]);
			 break ;
		 default :
			 break ;
	 }
}
