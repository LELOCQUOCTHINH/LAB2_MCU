#include "Ex3&4.h"

	const int MAX_LED = 4;
	int index_led = 0;
	int led_buffer [4] = {1 , 2 , 3 , 4};

	void Ex3_set()
	{
		set_time(1000);
	}

void Ex3_run()
{

}

void Ex3_time()
{
	if(counter % 25 == 0 )
	{
		update7SEG(index_led++);
		if(index_led >= MAX_LED)
		{
			index_led = 0;
		}
	}

	if(counter < 1)
	{
		set_time(1000);
		HAL_GPIO_TogglePin(DOT_GPIO_Port, DOT_Pin);
	}

	counter --;
}

