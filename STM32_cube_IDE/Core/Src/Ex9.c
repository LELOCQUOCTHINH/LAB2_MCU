#include "Ex9.h"
const int MAX_LED_MATRIX = 8;
int index_led_matrix = 0;
//uint8_t matrix_buffer[8] = {0x3C, 0x42, 0x42, 0x7E, 0x42, 0x42, 0x42, 0x42};
uint8_t matrix_buffer[8] = {0x00, 0xFE, 0x09, 0x09, 0x09, 0x09, 0xFE, 0x00};
uint16_t matrix_Col[8]= {0x0010, 0x0020, 0x0040, 0x0080, 0x0100, 0x0200, 0x0400, 0x0800};
uint8_t reset_row = 0x00FF;
uint16_t reset_col = 0x0FF0;

void Ex9_set()
{
	set_time(1000);
}

void Ex9_run()
{
//	if(counter <= 0)
//	{
//		index_led_matrix++;
//		set_time(1000);
//	}
//
//	if(index_led_matrix > 7)
//	{
//		index_led_matrix = 0;
//	}

}

void Ex9_time()
{
	index_led_matrix++;

	if(index_led_matrix > 7)
	{
		index_led_matrix = 0;
	}

	updateLEDMatrix(index_led_matrix);
//	if(counter == 50)
//	{
//		index_led_matrix++;
//	}
//
//	if(index_led_matrix > 7)
//	{
//		index_led_matrix = 0;
//	}
//
//	counter--;
}

void updateLEDMatrix(int index)
{
    switch (index)
    {
        case 0:
        	clearLEDMatrix();
        	HAL_GPIO_WritePin(GPIOB, matrix_buffer[0], LOW);
        	HAL_GPIO_WritePin(GPIOA, matrix_Col[0], LOW);
            break;
        case 1:
        	clearLEDMatrix();
        	HAL_GPIO_WritePin(GPIOB, matrix_buffer[1], LOW);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, matrix_Col[1], LOW);
            break;
        case 2:
        	clearLEDMatrix();
        	HAL_GPIO_WritePin(GPIOB, matrix_buffer[2], LOW);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, matrix_Col[2], LOW);
            break;
        case 3:
        	clearLEDMatrix();
        	HAL_GPIO_WritePin(GPIOB, matrix_buffer[3], LOW);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, matrix_Col[3], LOW);
            break;
        case 4:
        	clearLEDMatrix();
        	HAL_GPIO_WritePin(GPIOB, matrix_buffer[4], LOW);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, matrix_Col[4], LOW);
            break;
        case 5:
        	clearLEDMatrix();
        	HAL_GPIO_WritePin(GPIOB, matrix_buffer[5], LOW);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, matrix_Col[5], LOW);
            break;
        case 6:
        	clearLEDMatrix();
        	HAL_GPIO_WritePin(GPIOB, matrix_buffer[6], LOW);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, matrix_Col[6], LOW);
            break;
        case 7:
        	clearLEDMatrix();
        	HAL_GPIO_WritePin(GPIOB, matrix_buffer[7], LOW);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, matrix_Col[7], LOW);
            break;
        default:
            break;
    }
}

void clearLEDMatrix()
{
	HAL_GPIO_WritePin(GPIOA, reset_col, HIGH);
	HAL_GPIO_WritePin(GPIOB, reset_row, HIGH);
}
