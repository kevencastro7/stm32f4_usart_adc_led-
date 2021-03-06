/*
 * debug.h
 *
 *  Created on: 6 de nov de 2015
 *      Author: ox_jodm_xo
 */

#ifndef DEBUG_H_
#define DEBUG_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stm32f4xx.h"
#include "stm32f4_discovery.h"
#include "stm32f4xx_rcc.h"
#include "stm32f4xx_usart.h"
#include "VTipos.h"

void Delay ( __IO uint32_t nCount );
void debug_init ( void );
void debug_write_string ( volatile char *info );
void debug_write_protocol_string ( msg_protocol info );
void debug_write_int_to_string(uint16_t info);
void debug_write_msg_string(uint8_t ID, uint16_t info);
uint16_t debug_read();
uint8_t calc_bytes(uint16_t info);

#endif /* DEBUG_H_ */
