#ifndef _DSI_IRIS_DEF_H_
#define _DSI_IRIS_DEF_H_


enum {
	IRIS_CONT_SPLASH_LK = 1,
	IRIS_CONT_SPLASH_KERNEL,
	IRIS_CONT_SPLASH_NONE,
	IRIS_CONT_SPLASH_BYPASS,
	IRIS_CONT_SPLASH_VIDEO_BYPASS,
};

enum iris_abyp_status {
	IRIS_PT_MODE = 0,
	IRIS_ABYP_MODE,
	IRIS_PT_TO_ABYP_MODE,
	IRIS_ABYP_TO_PT_MODE,
	MAX_MODE = 255,
};

#endif // _DSI_IRIS_DEF_H_
