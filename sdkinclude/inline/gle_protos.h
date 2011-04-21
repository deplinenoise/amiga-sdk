int  __gleGetJoinStyle(__reg("a6") void *)="\tjsr\t-36(a6)";
#define gleGetJoinStyle() __gleGetJoinStyle(gleBase)
void  __gleSetJoinStyle(__reg("d0") int style,__reg("a6") void *)="\tjsr\t-42(a6)";
#define gleSetJoinStyle(x1) __gleSetJoinStyle((x1),gleBase)
int  __gleGetNumSlices(__reg("a6") void *)="\tjsr\t-48(a6)";
#define gleGetNumSlices() __gleGetNumSlices(gleBase)
void  __gleSetNumSlices(__reg("d0") int slices,__reg("a6") void *)="\tjsr\t-54(a6)";
#define gleSetNumSlices(x1) __gleSetNumSlices((x1),gleBase)
void  __glePolyCylinder(__reg("d0") int npoints,__reg("a0") gleDouble point_array[][3],__reg("a1") float color_array[][3],__reg("fp0") gleDouble radius,__reg("a6") void *)="\tjsr\t-60(a6)";
#define glePolyCylinder(x1,x2,x3,x4) __glePolyCylinder((x1),(x2),(x3),(x4),gleBase)
void  __glePolyCone(__reg("d0") int npoints,__reg("a0") gleDouble point_array[][3],__reg("a1") float color_array[][3],__reg("a2") gleDouble radius_array[],__reg("a6") void *)="\tjsr\t-66(a6)";
#define glePolyCone(x1,x2,x3,x4) __glePolyCone((x1),(x2),(x3),(x4),gleBase)
void  __gleExtrusion(__reg("d0") int ncp,__reg("a0") gleDouble contour[][2],__reg("a1") gleDouble cont_normal[][2],__reg("a2") gleDouble up[3],__reg("d1") int npoints,__reg("a3") gleDouble point_array[][3],__reg("d2") float color_array[][3],__reg("a6") void *)="\tjsr\t-72(a6)";
#define gleExtrusion(x1,x2,x3,x4,x5,x6,x7) __gleExtrusion((x1),(x2),(x3),(x4),(x5),(x6),(x7),gleBase)
void  __gleTwistExtrusion(__reg("d0") int ncp,__reg("a0") gleDouble contour[][2],__reg("a1") gleDouble cont_normal[][2],__reg("a2") gleDouble up[3],__reg("d1") int npoints,__reg("a3") gleDouble point_array[][3],__reg("d2") float color_array[][3],__reg("d3") gleDouble twist_array[],__reg("a6") void *)="\tjsr\t-78(a6)";
#define gleTwistExtrusion(x1,x2,x3,x4,x5,x6,x7,x8) __gleTwistExtrusion((x1),(x2),(x3),(x4),(x5),(x6),(x7),(x8),gleBase)
void  __gleSuperExtrusion(__reg("d0") int ncp,__reg("a0") gleDouble contour[][2],__reg("a1") gleDouble cont_normal[][2],__reg("a2") gleDouble up[3],__reg("d1") int npoints,__reg("a3") gleDouble point_array[][3],__reg("d2") float color_array[][3],__reg("d3") gleDouble xform_array[][2][3],__reg("a6") void *)="\tjsr\t-84(a6)";
#define gleSuperExtrusion(x1,x2,x3,x4,x5,x6,x7,x8) __gleSuperExtrusion((x1),(x2),(x3),(x4),(x5),(x6),(x7),(x8),gleBase)
/**void  __gleSpiral(__reg("d0") int ncp,__reg("a0") gleDouble contour[][2],__reg("a1") gleDouble cont_normal[][2],__reg("a2") gleDouble up[3],__reg("fp0") gleDouble startRadius,__reg("fp1") gleDouble drdTheta,__reg("fp2") gleDouble startZ,__reg("fp3") gleDouble dzdTheta,__reg("a3") gleDouble startXform[2][3],__reg("d1") gleDouble dXformdTheta[2][3],__reg("fp4") gleDouble startTheta,__reg("fp5") gleDouble sweepTheta,__reg("a6") void *)="\tjsr\t-90(a6)";*/
/**#define gleSpiral(x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12) __gleSpiral((x1),(x2),(x3),(x4),(x5),(x6),(x7),(x8),(x9),(x10),(x11),(x12),gleBase)*/
/**void  __gleLathe(__reg("d0") int ncp,__reg("a0") gleDouble contour[][2],__reg("a1") gleDouble cont_normal[][2],__reg("a2") gleDouble up[3],__reg("fp0") gleDouble startRadius,__reg("fp1") gleDouble drdTheta,__reg("fp2") gleDouble startZ,__reg("fp3") gleDouble dzdTheta,__reg("a3") gleDouble startXform[2][3],__reg("d1") gleDouble dXformdTheta[2][3],__reg("fp4") gleDouble startTheta,__reg("fp5") gleDouble sweepTheta,__reg("a6") void *)="\tjsr\t-96(a6)";*/
/**#define gleLathe(x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12) __gleLathe((x1),(x2),(x3),(x4),(x5),(x6),(x7),(x8),(x9),(x10),(x11),(x12),gleBase)*/
/**void  __gleHelicoid(__reg("fp0") gleDouble rToroid,__reg("fp1") gleDouble startRadius,__reg("fp2") gleDouble drdTheta,__reg("fp3") gleDouble startZ,__reg("fp4") gleDouble dzdTheta,__reg("a0") gleDouble startXform[2][3],__reg("a1") gleDouble dXformdTheta[2][3],__reg("fp5") gleDouble startTheta,__reg("fp6") gleDouble sweepTheta,__reg("a6") void *)="\tjsr\t-102(a6)";*/
/**#define gleHelicoid(x1,x2,x3,x4,x5,x6,x7,x8,x9) __gleHelicoid((x1),(x2),(x3),(x4),(x5),(x6),(x7),(x8),(x9),gleBase)*/
/**void  __gleToroid(__reg("fp0") gleDouble rToroid,__reg("fp1") gleDouble startRadius,__reg("fp2") gleDouble drdTheta,__reg("fp3") gleDouble startZ,__reg("fp4") gleDouble dzdTheta,__reg("a0") gleDouble startXform[2][3],__reg("a1") gleDouble dXformdTheta[2][3],__reg("fp5") gleDouble startTheta,__reg("fp6") gleDouble sweepTheta,__reg("a6") void *)="\tjsr\t-108(a6)";*/
/**#define gleToroid(x1,x2,x3,x4,x5,x6,x7,x8,x9) __gleToroid((x1),(x2),(x3),(x4),(x5),(x6),(x7),(x8),(x9),gleBase)*/
void  __gleScrew(__reg("d0") int ncp,__reg("a0") gleDouble contour[][2],__reg("a1") gleDouble cont_normal[][2],__reg("a2") gleDouble up[3],__reg("fp0") gleDouble startz,__reg("fp1") gleDouble endz,__reg("fp2") gleDouble twist,__reg("a6") void *)="\tjsr\t-114(a6)";
#define gleScrew(x1,x2,x3,x4,x5,x6,x7) __gleScrew((x1),(x2),(x3),(x4),(x5),(x6),(x7),gleBase)
void  __gleTextureMode(__reg("d0") int mode,__reg("a6") void *)="\tjsr\t-120(a6)";
#define gleTextureMode(x1) __gleTextureMode((x1),gleBase)
