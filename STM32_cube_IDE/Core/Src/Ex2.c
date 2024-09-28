#include "Ex2.h"

int flag = 1; //1, 2 ,3 ,4 is 7seg_1, 2, 3, 4 resistively
//bool indicator_50 = 0; //indicate whereas timer in interval 50ms
const int max_flag = 4; //maximum led 7 seg

void Ex2_set()
{
	  set_time(1000);
	  HAL_GPIO_TogglePin(DOT_GPIO_Port, DOT_Pin);
}

void Ex2_run()
{
	switch(flag)
	{
		case 1:
			HAL_GPIO_WritePin(ANOT_COMMON_1_GPIO_Port, ANOT_COMMON_1_Pin, 0);
			HAL_GPIO_WritePin(ANOT_COMMON_2_GPIO_Port, ANOT_COMMON_2_Pin, 1);
			HAL_GPIO_WritePin(ANOT_COMMON_3_GPIO_Port, ANOT_COMMON_3_Pin, 1);
			HAL_GPIO_WritePin(ANOT_COMMON_4_GPIO_Port, ANOT_COMMON_4_Pin, 1);
			display7SEG(1);
			break;
		case 2:
			HAL_GPIO_WritePin(ANOT_COMMON_1_GPIO_Port, ANOT_COMMON_1_Pin, 1);
			HAL_GPIO_WritePin(ANOT_COMMON_2_GPIO_Port, ANOT_COMMON_2_Pin, 0);
			HAL_GPIO_WritePin(ANOT_COMMON_3_GPIO_Port, ANOT_COMMON_3_Pin, 1);
			HAL_GPIO_WritePin(ANOT_COMMON_4_GPIO_Port, ANOT_COMMON_4_Pin, 1);
			display7SEG(2);
			break;
		case 3:
			HAL_GPIO_WritePin(ANOT_COMMON_1_GPIO_Port, ANOT_COMMON_1_Pin, 1);
			HAL_GPIO_WritePin(ANOT_COMMON_2_GPIO_Port, ANOT_COMMON_2_Pin, 1);
			HAL_GPIO_WritePin(ANOT_COMMON_3_GPIO_Port, ANOT_COMMON_3_Pin, 0);
			HAL_GPIO_WritePin(ANOT_COMMON_4_GPIO_Port, ANOT_COMMON_4_Pin, 1);
			display7SEG(3);
			break;
		case 4:
			HAL_GPIO_WritePin(ANOT_COMMON_1_GPIO_Port, ANOT_COMMON_1_Pin, 1);
			HAL_GPIO_WritePin(ANOT_COMMON_2_GPIO_Port, ANOT_COMMON_2_Pin, 1);
			HAL_GPIO_WritePin(ANOT_COMMON_3_GPIO_Port, ANOT_COMMON_3_Pin, 1);
			HAL_GPIO_WritePin(ANOT_COMMON_4_GPIO_Port, ANOT_COMMON_4_Pin, 0);
			display7SEG(0);
			break;
	}

}

void Ex2_time()
{
	 if(counter == 50)
	 {
		 flag++;
//		 indicator_50 = 1;
	 }

	 if(flag > max_flag)
	 {
		 flag = 1;
	 }

	counter--;

	 if(counter < 1)
	 {
		 HAL_GPIO_TogglePin(DOT_GPIO_Port, DOT_Pin);
		 set_time(1000);
//		  indicator_50 = 0;
	 }
}
