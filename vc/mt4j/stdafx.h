// stdafx.h : Includedatei f�r Standardsystem-Includedateien
// oder h�ufig verwendete projektspezifische Includedateien,
// die nur in unregelm��igen Abst�nden ge�ndert werden.
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Selten verwendete Teile der Windows-Header nicht einbinden.
// Windows-Headerdateien:
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <tchar.h> 
#include <stdarg.h>
#include <time.h>


// TODO: Hier auf zus�tzliche Header, die das Programm erfordert, verweisen.
#include <jni.h>

bool createJavaVm();
JNIEnv* prepareEnv();
void destroyVM();
void log(char * format,...);
bool loadDynModule();
void attachCurrentThread();
void detachCurrentThread();