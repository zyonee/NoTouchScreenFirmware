#pragma once

// Enable LCD backlight beeing controlled by PWM
//#define LCD_PWM_DIMMER
#if defined(LCD_PWM_DIMMER)
    #define LCD_LED_PWM_ON_BRIGHTNESS 100
    #define LCD_LED_PWM_OFF_BRIGHTNESS 2
#endif

// Enable LCD backlight idle off
//#define LCD_IDLE_OFF
#if defined(LCD_IDLE_OFF)
    #define LCD_IDLE_TIMEOUT_SEC 5
#endif