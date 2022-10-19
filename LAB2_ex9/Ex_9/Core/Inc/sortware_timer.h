/*
 * sortware_timer.h
 *
 *  Created on: Oct 19, 2022
 *      Author: hieun
 */

#ifndef INC_SORTWARE_TIMER_H_
#define INC_SORTWARE_TIMER_H_

extern int timer1_flag;
extern int timer2_flag;

void setTimer1(int duration);
void setTimer2(int duration);
void timerRun();

#endif /* INC_SORTWARE_TIMER_H_ */
