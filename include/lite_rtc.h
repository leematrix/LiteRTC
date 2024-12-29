#ifndef __LITE_RTC_H__
#define __LITE_RTC_H__

#include <stdint.h>

#ifdef __cplusplus
extern "C"
{
#endif
    typedef struct lite_rtc_channel
    {

    } lrc_channel_t;

    typedef struct lite_rtc
    {

    } lrc_t;

    lrc_t *lrc_create();

    void lrc_destroy(lrc_t *lrc);

#ifdef __cplusplus
}
#endif

#endif /* __LITE_RTC_H__ */