/**
 *  -- Sanity wrappers around Cypress code, so I don't have to look at CyUP3FxIsTheCPUOkay. --
 *
 *  Note: this license applies to this file. Other files in this project
 *  may be licensed differently, because Cypress likes to reserve their rights.
 *
 *  Or maybe not; I'm not a lawyer, I'm probably not in your jurisdiction, and I
 *  definitely don't believe software patents and restricted examples are helping anyone.
 *
 *       DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE 
 *                    Version 2, December 2004 
 *
 * Copyright (C) 2019 Katherine Temkin <k@ktemkin.com>, if you're not angry with the code
 * Copyright (C) 2019 Someone Else if you are angry and/or want to send me a C&D
 *
 * Everyone is permitted to copy and distribute verbatim or modified 
 * copies of this license document, and changing it is allowed as long 
 * as the name is changed. 
 *
 *            DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE 
 *   TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION 
 *
 *  0. You just DO WHAT THE FUCK YOU WANT TO.
*/

#ifndef __SANITY_H__
#define __SANITY_H__

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

void * memset(void * ptr, int value, size_t num);

void set_gpio_value(uint8_t pin, bool is_high);
bool get_gpio_value(uint8_t pin);

void send_on_ep0(void *data, size_t length);
int receive_on_ep0(void *buffer, size_t max_length, uint16_t *out_actual_length);
void send_ep0_ack(void);

#endif
