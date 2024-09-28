#include "Ex5.h"

int index_Led = 0;
bool second_flag = 0;
int hour = 0 , minute = 0 , second = 0;

void Ex5_set()
{
	set_time(1000);
	hour = 15 ;
	minute = 8 ;
	second = 50 ;
}

void Ex5_run()
{
	if(second_flag)
	{
		second ++;
		index_Led++;
		HAL_GPIO_TogglePin(DOT_GPIO_Port, DOT_Pin);
		set_time(1000);
		second_flag = 0;
	}

	if ( second >= 60)
	{
	second = 0;
	minute ++;
	 }

	 if( minute >= 60)
	 {
	 minute = 0;
	 hour ++;
	 }

	 if( hour >=24)
	 {
	 hour = 0;
	 }
	 updateClockBuffer () ;
}

void Ex5_time()
{
	counter--;
	if(counter < 1)
	{
		second_flag = 1;
	}
}

void updateClockBuffer()
{
	led_buffer [0] = hour / 10;
	led_buffer [1] = hour % 10;

	led_buffer [2] = minute / 10;
	led_buffer [3] = minute % 10;

	if(index_Led >= MAX_LED)
	{
		index_Led = 0;
	}

	update7SEG(index_Led);

}
