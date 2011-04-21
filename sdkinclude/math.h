#pragma begin_header
#ifndef __MATH_H
#define __MATH_H 1

#define HUGE_VAL        1e500

#if defined(__M68881)||defined(__M68882)
double sqrt(__reg("fp0") double)="\tfsqrt.x\tfp0";
double fabs(__reg("fp0") double)="\tfabs.x\tfp0";
double floor(__reg("fp0") double)="\tfmove.l\tfpcr,d1\n\tmoveq\t#32,d0\n\tor.l\td1,d0\n\tand.b\t#255-16,d0\n\tfmove.l\td0,fpcr\n\tfint.x\tfp0\n\tfmove.l\td1,fpcr";
double ceil(__reg("fp0") double)="\tfmove.l\tfpcr,d1\n\tmoveq\t#48,d0\n\tor.l\td1,d0\n\tfmove.l\td0,fpcr\n\tfint.x\tfp0\n\tfmove.l\td1,fpcr";
#else
double sqrt(double);
double fabs(double);
double floor(double);
double ceil(double);
#endif

#if (defined(__M68881)||defined(__M68882)) && !defined(__M68040) && !defined(__M68060)
double acos(__reg("fp0")double)="\tfacos.x\tfp0";
double asin(__reg("fp0")double)="\tfasin.x\tfp0";
double atan(__reg("fp0")double)="\tfatan.x\tfp0";
double cos(__reg("fp0")double)="\tfcos.x\tfp0";
double cosh(__reg("fp0")double)="\tfcosh.x\tfp0";
double exp(__reg("fp0")double)="\tfetox.x\tfp0";
double log(__reg("fp0")double)="\tflogn.x\tfp0";
double log10(__reg("fp0")double)="\tflog10.x\tfp0";
double modf(__reg("fp0")double,__reg("a0") double *)="\tfintrz.x\tfp0,fp1\n\tfmove.d\tfp1,(a0)\n\tfsub.x\tfp1,fp0";
double pow(__reg("fp0")double,__reg("fp1") double)="\tflogn.x\tfp0\n\tfmul.x\tfp1,fp0\n\tfetox.x\tfp0";
double sin(__reg("fp0")double)="\tfsin.x\tfp0";
double sinh(__reg("fp0")double)="\tfsinh.x\tfp0";
double tan(__reg("fp0")double)="\tftan.x\tfp0";
double tanh(__reg("fp0")double)="\tftanh.x\tfp0";
double fmod(__reg("fp0")double,__reg("fp1")double)="\tfmod.x\tfp1,fp0";
#else
double sin(double);
double cos(double);
double tan(double);
double sinh(double);
double cosh(double);
double tanh(double);
double asin(double);
double acos(double);
double atan(double);
double exp(double);
double log(double);
double log10(double);
double pow(double,double);
double modf(double,double *);
double fmod(double,double);
#endif

double atan2(double,double);
double ldexp(double,int);
double frexp(double,int *);

#endif
#pragma end_header
