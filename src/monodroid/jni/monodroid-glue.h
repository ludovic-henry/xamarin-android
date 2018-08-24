#ifndef __MONODROID_GLUE_H
#define __MONODROID_GLUE_H

#include <stdio.h>
#include <jni.h>

int monodroid_get_system_property_from_overrides (const char *name, char ** value);

struct DylibMono;

struct DylibMono  *monodroid_get_dylib (void);

extern  FILE  *gref_log;
extern  FILE  *lref_log;

MONO_API void
monodroid_runtime_init (JNIEnv*, jclass, jstring, jobjectArray, jstring, jobjectArray, jobject, jobjectArray, jobjectArray, jstring);

MONO_API void
monodroid_runtime_register (JNIEnv*, jclass, jstring, jclass, jstring);

MONO_API void
monodroid_runtime_notifyTimeZoneChanged (JNIEnv*, jclass);

MONO_API jint
monodroid_runtime_createNewContext (JNIEnv*, jclass, jobjectArray, jobjectArray, jobject);

MONO_API void
monodroid_runtime_switchToContext (JNIEnv*, jclass, jint);

MONO_API void
monodroid_runtime_destroyContexts (JNIEnv*, jclass, jintArray);

MONO_API void
monodroid_runtime_propagateUncaughtException (JNIEnv*, jclass, jobject, jthrowable);

#endif /* __MONODROID_GLUE_H */
