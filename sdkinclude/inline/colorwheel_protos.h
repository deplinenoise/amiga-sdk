#ifndef _VBCCINLINE_COLORWHEEL_H
#define _VBCCINLINE_COLORWHEEL_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

void __ConvertHSBToRGB(__reg("a0") struct ColorWheelHSB * hsb, __reg("a1") struct ColorWheelRGB * rgb, __reg("a6") struct Library *)="\tjsr\t-30(a6)";
#define ConvertHSBToRGB(hsb, rgb) __ConvertHSBToRGB((hsb), (rgb), ColorWheelBase)

void __ConvertRGBToHSB(__reg("a0") struct ColorWheelRGB * rgb, __reg("a1") struct ColorWheelHSB * hsb, __reg("a6") struct Library *)="\tjsr\t-36(a6)";
#define ConvertRGBToHSB(rgb, hsb) __ConvertRGBToHSB((rgb), (hsb), ColorWheelBase)

#endif /*  _VBCCINLINE_COLORWHEEL_H  */
