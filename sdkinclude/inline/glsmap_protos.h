SphereMap * __smapCreateSphereMap(__reg("a0") SphereMap *shareSmap,__reg("a6") void *)="\tjsr\t-36(a6)";
#define smapCreateSphereMap(x1) __smapCreateSphereMap((x1),glsmapBase)
void  __smapDestroySphereMap(__reg("a0") SphereMap *smap,__reg("a6") void *)="\tjsr\t-42(a6)";
#define smapDestroySphereMap(x1) __smapDestroySphereMap((x1),glsmapBase)
void  __smapConfigureSphereMapMesh(__reg("a0") SphereMap *smap,__reg("d0") int steps,__reg("d1") int rings,__reg("d2") int edgeExtend,__reg("a6") void *)="\tjsr\t-48(a6)";
#define smapConfigureSphereMapMesh(x1,x2,x3,x4) __smapConfigureSphereMapMesh((x1),(x2),(x3),(x4),glsmapBase)
void  __smapSetSphereMapTexObj(__reg("a0") SphereMap *smap,__reg("d0") GLuint texobj,__reg("a6") void *)="\tjsr\t-54(a6)";
#define smapSetSphereMapTexObj(x1,x2) __smapSetSphereMapTexObj((x1),(x2),glsmapBase)
void  __smapSetViewTexObj(__reg("a0") SphereMap *smap,__reg("d0") GLuint texobj,__reg("a6") void *)="\tjsr\t-60(a6)";
#define smapSetViewTexObj(x1,x2) __smapSetViewTexObj((x1),(x2),glsmapBase)
void  __smapSetViewTexObjs(__reg("a0") SphereMap *smap,__reg("a1") GLuint texobjs[6],__reg("a6") void *)="\tjsr\t-66(a6)";
#define smapSetViewTexObjs(x1,x2) __smapSetViewTexObjs((x1),(x2),glsmapBase)
void  __smapGetSphereMapTexObj(__reg("a0") SphereMap *smap,__reg("a1") GLuint *texobj,__reg("a6") void *)="\tjsr\t-72(a6)";
#define smapGetSphereMapTexObj(x1,x2) __smapGetSphereMapTexObj((x1),(x2),glsmapBase)
void  __smapGetViewTexObj(__reg("a0") SphereMap *smap,__reg("a1") GLuint *texobj,__reg("a6") void *)="\tjsr\t-78(a6)";
#define smapGetViewTexObj(x1,x2) __smapGetViewTexObj((x1),(x2),glsmapBase)
void  __smapGetViewTexObjs(__reg("a0") SphereMap *smap,__reg("a1") GLuint texobjs[6],__reg("a6") void *)="\tjsr\t-84(a6)";
#define smapGetViewTexObjs(x1,x2) __smapGetViewTexObjs((x1),(x2),glsmapBase)
void  __smapSetFlags(__reg("a0") SphereMap *smap,__reg("d0") SphereMapFlags flags,__reg("a6") void *)="\tjsr\t-90(a6)";
#define smapSetFlags(x1,x2) __smapSetFlags((x1),(x2),glsmapBase)
void  __smapGetFlags(__reg("a0") SphereMap *smap,__reg("a1") SphereMapFlags *flags,__reg("a6") void *)="\tjsr\t-96(a6)";
#define smapGetFlags(x1,x2) __smapGetFlags((x1),(x2),glsmapBase)
void  __smapSetViewOrigin(__reg("a0") SphereMap *smap,__reg("d0") GLint x,__reg("d1") GLint y,__reg("a6") void *)="\tjsr\t-102(a6)";
#define smapSetViewOrigin(x1,x2,x3) __smapSetViewOrigin((x1),(x2),(x3),glsmapBase)
void  __smapSetSphereMapOrigin(__reg("a0") SphereMap *smap,__reg("d0") GLint x,__reg("d1") GLint y,__reg("a6") void *)="\tjsr\t-108(a6)";
#define smapSetSphereMapOrigin(x1,x2,x3) __smapSetSphereMapOrigin((x1),(x2),(x3),glsmapBase)
void  __smapGetViewOrigin(__reg("a0") SphereMap *smap,__reg("a1") GLint *x,__reg("a2") GLint *y,__reg("a6") void *)="\tjsr\t-114(a6)";
#define smapGetViewOrigin(x1,x2,x3) __smapGetViewOrigin((x1),(x2),(x3),glsmapBase)
void  __smapGetSphereMapOrigin(__reg("a0") SphereMap *smap,__reg("a1") GLint *x,__reg("a2") GLint *y,__reg("a6") void *)="\tjsr\t-120(a6)";
#define smapGetSphereMapOrigin(x1,x2,x3) __smapGetSphereMapOrigin((x1),(x2),(x3),glsmapBase)
void  __smapSetEye(__reg("a0") SphereMap *smap,__reg("fp0") GLfloat eyex,__reg("fp1") GLfloat eyey,__reg("fp2") GLfloat eyez,__reg("a6") void *)="\tjsr\t-126(a6)";
#define smapSetEye(x1,x2,x3,x4) __smapSetEye((x1),(x2),(x3),(x4),glsmapBase)
void  __smapSetEyeVector(__reg("a0") SphereMap *smap,__reg("a1") GLfloat *eye,__reg("a6") void *)="\tjsr\t-132(a6)";
#define smapSetEyeVector(x1,x2) __smapSetEyeVector((x1),(x2),glsmapBase)
void  __smapSetUp(__reg("a0") SphereMap *smap,__reg("fp0") GLfloat upx,__reg("fp1") GLfloat upy,__reg("fp2") GLfloat upz,__reg("a6") void *)="\tjsr\t-138(a6)";
#define smapSetUp(x1,x2,x3,x4) __smapSetUp((x1),(x2),(x3),(x4),glsmapBase)
void  __smapSetUpVector(__reg("a0") SphereMap *smap,__reg("a1") GLfloat *up,__reg("a6") void *)="\tjsr\t-144(a6)";
#define smapSetUpVector(x1,x2) __smapSetUpVector((x1),(x2),glsmapBase)
void  __smapSetObject(__reg("a0") SphereMap *smap,__reg("fp0") GLfloat objx,__reg("fp1") GLfloat objy,__reg("fp2") GLfloat objz,__reg("a6") void *)="\tjsr\t-150(a6)";
#define smapSetObject(x1,x2,x3,x4) __smapSetObject((x1),(x2),(x3),(x4),glsmapBase)
void  __smapSetObjectVector(__reg("a0") SphereMap *smap,__reg("a1") GLfloat *obj,__reg("a6") void *)="\tjsr\t-156(a6)";
#define smapSetObjectVector(x1,x2) __smapSetObjectVector((x1),(x2),glsmapBase)
void  __smapGetEye(__reg("a0") SphereMap *smap,__reg("a1") GLfloat *eyex,__reg("a2") GLfloat *eyey,__reg("a3") GLfloat *eyez,__reg("a6") void *)="\tjsr\t-162(a6)";
#define smapGetEye(x1,x2,x3,x4) __smapGetEye((x1),(x2),(x3),(x4),glsmapBase)
void  __smapGetEyeVector(__reg("a0") SphereMap *smap,__reg("a1") GLfloat *eye,__reg("a6") void *)="\tjsr\t-168(a6)";
#define smapGetEyeVector(x1,x2) __smapGetEyeVector((x1),(x2),glsmapBase)
void  __smapGetUp(__reg("a0") SphereMap *smap,__reg("a1") GLfloat *upx,__reg("a2") GLfloat *upy,__reg("a3") GLfloat *upz,__reg("a6") void *)="\tjsr\t-174(a6)";
#define smapGetUp(x1,x2,x3,x4) __smapGetUp((x1),(x2),(x3),(x4),glsmapBase)
void  __smapGetUpVector(__reg("a0") SphereMap *smap,__reg("a1") GLfloat *up,__reg("a6") void *)="\tjsr\t-180(a6)";
#define smapGetUpVector(x1,x2) __smapGetUpVector((x1),(x2),glsmapBase)
void  __smapGetObject(__reg("a0") SphereMap *smap,__reg("a1") GLfloat *objx,__reg("a2") GLfloat *objy,__reg("a3") GLfloat *objz,__reg("a6") void *)="\tjsr\t-186(a6)";
#define smapGetObject(x1,x2,x3,x4) __smapGetObject((x1),(x2),(x3),(x4),glsmapBase)
void  __smapGetObjectVector(__reg("a0") SphereMap *smap,__reg("a1") GLfloat *obj,__reg("a6") void *)="\tjsr\t-192(a6)";
#define smapGetObjectVector(x1,x2) __smapGetObjectVector((x1),(x2),glsmapBase)
void  __smapSetNearFar(__reg("a0") SphereMap *smap,__reg("fp0") GLfloat viewNear,__reg("fp1") GLfloat viewFar,__reg("a6") void *)="\tjsr\t-198(a6)";
#define smapSetNearFar(x1,x2,x3) __smapSetNearFar((x1),(x2),(x3),glsmapBase)
void  __smapGetNearFar(__reg("a0") SphereMap *smap,__reg("a1") GLfloat *viewNear,__reg("a2") GLfloat *viewFar,__reg("a6") void *)="\tjsr\t-204(a6)";
#define smapGetNearFar(x1,x2,x3) __smapGetNearFar((x1),(x2),(x3),glsmapBase)
void  __smapSetSphereMapTexDim(__reg("a0") SphereMap *smap,__reg("d0") GLsizei texdim,__reg("a6") void *)="\tjsr\t-210(a6)";
#define smapSetSphereMapTexDim(x1,x2) __smapSetSphereMapTexDim((x1),(x2),glsmapBase)
void  __smapSetViewTexDim(__reg("a0") SphereMap *smap,__reg("d0") GLsizei texdim,__reg("a6") void *)="\tjsr\t-216(a6)";
#define smapSetViewTexDim(x1,x2) __smapSetViewTexDim((x1),(x2),glsmapBase)
void  __smapGetSphereMapTexDim(__reg("a0") SphereMap *smap,__reg("a1") GLsizei *texdim,__reg("a6") void *)="\tjsr\t-222(a6)";
#define smapGetSphereMapTexDim(x1,x2) __smapGetSphereMapTexDim((x1),(x2),glsmapBase)
void  __smapGetViewTexDim(__reg("a0") SphereMap *smap,__reg("a1") GLsizei *texdim,__reg("a6") void *)="\tjsr\t-228(a6)";
#define smapGetViewTexDim(x1,x2) __smapGetViewTexDim((x1),(x2),glsmapBase)
void  __smapSetContextData(__reg("a0") SphereMap *smap,__reg("a1") void *context,__reg("a6") void *)="\tjsr\t-234(a6)";
#define smapSetContextData(x1,x2) __smapSetContextData((x1),(x2),glsmapBase)
void  __smapGetContextData(__reg("a0") SphereMap *smap,__reg("a1") void **context,__reg("a6") void *)="\tjsr\t-240(a6)";
#define smapGetContextData(x1,x2) __smapGetContextData((x1),(x2),glsmapBase)
void  __smapSetPositionLightsFunc(__reg("a0") SphereMap *smap,__reg("a1") void (*positionLights)(int view, void *context),__reg("a6") void *)="\tjsr\t-246(a6)";
#define smapSetPositionLightsFunc(x1,x2) __smapSetPositionLightsFunc((x1),(x2),glsmapBase)
void  __smapSetDrawViewFunc(__reg("a0") SphereMap *smap,__reg("a1") void (*drawView)(int view, void *context),__reg("a6") void *)="\tjsr\t-252(a6)";
#define smapSetDrawViewFunc(x1,x2) __smapSetDrawViewFunc((x1),(x2),glsmapBase)
void  __smapGetPositionLightsFunc(__reg("a0") SphereMap *smap,__reg("a1") void (**positionLights)(int view, void *context),__reg("a6") void *)="\tjsr\t-258(a6)";
#define smapGetPositionLightsFunc(x1,x2) __smapGetPositionLightsFunc((x1),(x2),glsmapBase)
void  __smapGetDrawViewFunc(__reg("a0") SphereMap *smap,__reg("a1") void (**drawView)(int view, void *context),__reg("a6") void *)="\tjsr\t-264(a6)";
#define smapGetDrawViewFunc(x1,x2) __smapGetDrawViewFunc((x1),(x2),glsmapBase)
void  __smapGenViewTex(__reg("a0") SphereMap *smap,__reg("d0") int view,__reg("a6") void *)="\tjsr\t-270(a6)";
#define smapGenViewTex(x1,x2) __smapGenViewTex((x1),(x2),glsmapBase)
void  __smapGenViewTexs(__reg("a0") SphereMap *smap,__reg("a6") void *)="\tjsr\t-276(a6)";
#define smapGenViewTexs(x1) __smapGenViewTexs((x1),glsmapBase)
void  __smapGenSphereMapFromViewTexs(__reg("a0") SphereMap *smap,__reg("a6") void *)="\tjsr\t-282(a6)";
#define smapGenSphereMapFromViewTexs(x1) __smapGenSphereMapFromViewTexs((x1),glsmapBase)
void  __smapGenSphereMap(__reg("a0") SphereMap *smap,__reg("a6") void *)="\tjsr\t-288(a6)";
#define smapGenSphereMap(x1) __smapGenSphereMap((x1),glsmapBase)
void  __smapGenSphereMapWithOneViewTex(__reg("a0") SphereMap *smap,__reg("a6") void *)="\tjsr\t-294(a6)";
#define smapGenSphereMapWithOneViewTex(x1) __smapGenSphereMapWithOneViewTex((x1),glsmapBase)
int  __smapRvecToSt(__reg("a0") float rvec[3],__reg("a1") float st[2],__reg("a6") void *)="\tjsr\t-300(a6)";
#define smapRvecToSt(x1,x2) __smapRvecToSt((x1),(x2),glsmapBase)
void  __smapStToRvec(__reg("a0") float *st,__reg("a1") float *rvec,__reg("a6") void *)="\tjsr\t-306(a6)";
#define smapStToRvec(x1,x2) __smapStToRvec((x1),(x2),glsmapBase)
