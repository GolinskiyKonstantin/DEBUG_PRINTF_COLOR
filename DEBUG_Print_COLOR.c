/*
\033[0m    все атрибуты по умолчанию
\033[1m    жирный шрифт (интенсивный цвет)
\033[2m    полу яркий цвет (тёмно-серый, независимо от цвета)
\033[4m    подчеркивание
\033[5m    мигающий
\033[7m    реверсия (знаки приобретают цвет фона, а фон -- цвет знаков)

\033[22m    установить нормальную интенсивность
\033[24m    отменить подчеркивание
\033[25m    отменить мигание
\033[27m    отменить реверсию

\033[30    чёрный цвет знаков
\033[31    красный цвет знаков
\033[32    зелёный цвет знаков
\033[33    желтый цвет знаков
\033[34    синий цвет знаков
\033[35    фиолетовый цвет знаков
\033[36    цвет морской волны знаков
\033[37    серый цвет знаков

\033[40    чёрный цвет фона
\033[41    красный цвет фона
\033[42    зелёный цвет фона
\033[43    желтый цвет фона
\033[44    синий цвет фона
\033[45    фиолетовый цвет фона
\033[46    цвет морской волны фона
\033[47    серый цвет фона
*/

#include <stdio.h>

//*** Arduino *********************************************************************************************************
//char buff[128];
//#define DEBUG(ColorMsg, pFmt, ...) { sprintf(buff,"%s" pFmt "\r\n", ColorString[ColorMsg], ##__VA_ARGS__ ); Serial.print(buff);}
//*********************************************************************************************************************

// STM32 *************
#define DEBUG(ColorMsg, pFmt, ...) { printf("%s" pFmt "\r\n", ColorString[ColorMsg], ##__VA_ARGS__ );}
//********************

                                       
#define BLACK           PRINT_COLOR_BLACK
#define RED             PRINT_COLOR_RED
#define GREEN           PRINT_COLOR_GREEN
#define YELLOW          PRINT_COLOR_YELLOW
#define BLUE            PRINT_COLOR_BLUE
#define MAGENTA         PRINT_COLOR_MAGENTA
#define CYAN            PRINT_COLOR_CYAN
#define GRAY            PRINT_COLOR_GRAY

typedef enum PRINT_COLOR_e_ {
    PRINT_COLOR_BLACK = 0,
    PRINT_COLOR_RED,
    PRINT_COLOR_GREEN,
    PRINT_COLOR_YELLOW,
    PRINT_COLOR_BLUE,
    PRINT_COLOR_MAGENTA,
    PRINT_COLOR_CYAN,
    PRINT_COLOR_GRAY,

    PRINT_NUM_COLOR
} PRINT_COLOR_e;

const char *ColorString[] = {
    [PRINT_COLOR_BLACK]    = "\033[0m",
    [PRINT_COLOR_RED]      = "\033[0;31m",
    [PRINT_COLOR_GREEN]    = "\033[0;32m",
    [PRINT_COLOR_YELLOW]   = "\033[0;33m",
    [PRINT_COLOR_BLUE]     = "\033[0;34m",
    [PRINT_COLOR_MAGENTA]  = "\033[0;35m",
    [PRINT_COLOR_CYAN]     = "\033[0;36m",
    [PRINT_COLOR_GRAY]     = "\033[0;37m",
};

int main() {

  DEBUG(RED, "device power off -> low_battery !!! %d %d %s %s", 10, __LINE__, __FILE__, __FUNCTION__);
	
  return 0;
}