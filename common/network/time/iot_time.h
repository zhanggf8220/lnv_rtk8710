#ifndef __IOT_TIME_H__
#define __IOT_TIME_H__

#include <time.h>

#ifdef __cplusplus
extern "C" {
#endif

int IOT_timeZoneGet();
void IOT_timeZoneSet(int iTimeZone);
long IOT_time(char *pszPtr);
struct tm *IOT_localtime(const void *timep);

#ifdef __cplusplus
}
#endif

#endif /* __IOT_TIME_H__ */
