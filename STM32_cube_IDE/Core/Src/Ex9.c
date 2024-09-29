#include "Ex9.h"
const int MAX_LED_MATRIX = 8;
int index_led_matrix = 0;
//uint8_t matrix_buffer[8] = {0x3C, 0x42, 0x42, 0x7E, 0x42, 0x42, 0x42, 0x42};
uint8_t matrix_buffer[8] = {0x01, 0x01, 0x01, 0xFF, 0xFF, 0x01, 0x01, 0x01};//use to indicate led matrix
uint8_t char_T [8] = {0x01, 0x01, 0x01, 0xFF, 0xFF, 0x01, 0x01, 0x01};
uint8_t char_I [8] = {0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00};
uint8_t char_R [8] = {0xFF, 0x05, 0x0D, 0x15, 0x25, 0x45, 0x85, 0x07};
uint8_t char_N [8] = {0xFF, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0xFF};
uint8_t char_G [8] = {0x7E, 0x91, 0x91, 0x91, 0x91, 0x91, 0x91, 0x62};
uint8_t char_U [8] = {0x00, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x00};
uint8_t char_A [8] = {0x00, 0xFE, 0x09, 0x09, 0x09, 0x09, 0xFE, 0x00};
uint8_t char_heart [8] = {0x1E, 0x21, 0x41, 0x82, 0x82, 0x81, 0x41, 0x1E};
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
		uint8_t temp [8];
		temp [0] = matrix_buffer[0]; //char_T
		temp[1] = char_R[0];
		temp[2] = char_A[0];
		temp[3] = char_N[0];
		temp[4] = char_G[0];
		temp[5] = char_I[0];
		temp[6] = char_U[0];
		temp[7] = char_heart[0];

		//init value of matrix_buffer is char_T

		for(int i = 0 ; i < 7 ; i++)
		{
			matrix_buffer[i] = matrix_buffer[i+1];//T
			char_R[i] = char_R[i+1];
			char_A[i] = char_A[i+1];
			char_N[i] = char_N[i+1];
			char_G[i] = char_G[i+1];
			char_I[i] = char_I[i+1];
			char_U[i] = char_U[i+1];
			char_heart[i] = char_heart[i+1];
		}

		matrix_buffer[7] = temp[1];
		char_R[7] = temp[2];
		char_A[7] = temp[3];
		char_N[7] = temp [4];
		char_G[7] = temp[5];

		char_I[7] = temp[6];
		char_U[7] = temp[7];

		char_heart[7] = temp [0];
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
			HAL_GPIO_WritePin(GPIOA, matrix_Col[1], LOW);
            break;
        case 2:
        	clearLEDMatrix();
        	HAL_GPIO_WritePin(GPIOB, matrix_buffer[2], LOW);
			HAL_GPIO_WritePin(GPIOA, matrix_Col[2], LOW);
            break;
        case 3:
        	clearLEDMatrix();
        	HAL_GPIO_WritePin(GPIOB, matrix_buffer[3], LOW);
			HAL_GPIO_WritePin(GPIOA, matrix_Col[3], LOW);
            break;
        case 4:
        	clearLEDMatrix();
        	HAL_GPIO_WritePin(GPIOB, matrix_buffer[4], LOW);
			HAL_GPIO_WritePin(GPIOA, matrix_Col[4], LOW);
            break;
        case 5:
        	clearLEDMatrix();
        	HAL_GPIO_WritePin(GPIOB, matrix_buffer[5], LOW);
			HAL_GPIO_WritePin(GPIOA, matrix_Col[5], LOW);
            break;
        case 6:
        	clearLEDMatrix();
        	HAL_GPIO_WritePin(GPIOB, matrix_buffer[6], LOW);
			HAL_GPIO_WritePin(GPIOA, matrix_Col[6], LOW);
            break;
        case 7:
        	clearLEDMatrix();
        	HAL_GPIO_WritePin(GPIOB, matrix_buffer[7], LOW);
			HAL_GPIO_WritePin(GPIOA, matrix_Col[7], LOW);
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
