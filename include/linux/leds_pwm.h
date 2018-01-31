/* SPDX-License-Identifier: GPL-2.0 */
/*
 * PWM LED driver data - see drivers/leds/leds-pwm.c
 */
#ifndef __LINUX_LEDS_PWM_H
#define __LINUX_LEDS_PWM_H

struct led_pwm {
	const char	*name;
	const char	*default_trigger;
	unsigned int	pwm_id __deprecated;
	u8		active_low;
	unsigned int	max_brightness;
	unsigned int	initial_brightness;
	unsigned int	pwm_period_ns;
};

struct led_pwm_platform_data {
	int			num_leds;
	struct led_pwm	*leds;
};

#endif
