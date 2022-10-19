/*
 * matrix.c
 *
 *  Created on: Oct 19, 2022
 *      Author: hieun
 */
#include "matrix.h"
#include "main.h"
int index_led_matrix = 0 ;

void updateLEDMatrix( int index){
	switch (index) {
		case 0:
			HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, RESET);
			HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, RESET);

			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		default:
			break;
	}
}
