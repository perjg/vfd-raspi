/*
 * VFD Modular Clock
 * (C) 2011 Akafugu Corporation
 * (C) 2013 William B Phelps
 *
 * This program is free software; you can redistribute it and/or modify it under the
 * terms of the GNU General Public License as published by the Free Software
 * Foundation; either version 2 of the License, or (at your option) any later
 * version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
 * PARTICULAR PURPOSE.  See the GNU General Public License for more details.
 *
 */

#ifndef _PIEZO_H_
#define _PIEZO_H_

#include <avr/io.h>

#define PEZ1 PB3
#define PEZ2 PB4
#define PEZ_PORT	PORTB
#define PEZ_DDR 	DDRB

void piezo_init(void);
void beep(uint16_t freq, uint16_t dur);
void tick(void);

#endif // _PIEZO_H_
