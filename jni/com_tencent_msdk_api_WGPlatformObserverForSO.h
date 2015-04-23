/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_tencent_msdk_api_WGPlatformObserverForSO */

#ifndef _Included_com_tencent_msdk_api_WGPlatformObserverForSO
#define _Included_com_tencent_msdk_api_WGPlatformObserverForSO
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_tencent_msdk_api_WGPlatformObserverForSO
 * Method:    OnLoginNotify
 * Signature: (Lcom/tencent/msdk/api/LoginRet;)V
 */
JNIEXPORT void JNICALL Java_com_tencent_msdk_api_WGPlatformObserverForSO_OnLoginNotify
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_tencent_msdk_api_WGPlatformObserverForSO
 * Method:    OnShareNotify
 * Signature: (Lcom/tencent/msdk/api/ShareRet;)V
 */
JNIEXPORT void JNICALL Java_com_tencent_msdk_api_WGPlatformObserverForSO_OnShareNotify
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_tencent_msdk_api_WGPlatformObserverForSO
 * Method:    OnWakeupNotify
 * Signature: (Lcom/tencent/msdk/api/WakeupRet;)V
 */
JNIEXPORT void JNICALL Java_com_tencent_msdk_api_WGPlatformObserverForSO_OnWakeupNotify
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_tencent_msdk_api_WGPlatformObserverForSO
 * Method:    OnRelationNotify
 * Signature: (Lcom/tencent/msdk/remote/api/RelationRet;)V
 */
JNIEXPORT void JNICALL Java_com_tencent_msdk_api_WGPlatformObserverForSO_OnRelationNotify
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_tencent_msdk_api_WGPlatformObserverForSO
 * Method:    OnLocationNotify
 * Signature: (Lcom/tencent/msdk/remote/api/RelationRet;)V
 */
JNIEXPORT void JNICALL Java_com_tencent_msdk_api_WGPlatformObserverForSO_OnLocationNotify
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_tencent_msdk_api_WGPlatformObserverForSO
 * Method:    OnGotLocationNotify
 * Signature: (Lcom/tencent/msdk/remote/api/LocationRet;)V
 */
JNIEXPORT void JNICALL Java_com_tencent_msdk_api_WGPlatformObserverForSO_OnLocationGotNotify
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_tencent_msdk_api_WGPlatformObserverForSO
 * Method:    OnFeedbackNotify
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_tencent_msdk_api_WGPlatformObserverForSO_OnFeedbackNotify
  (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     com_tencent_msdk_api_WGPlatformObserverForSO
 * Method:    OnCrashExtMessageNotify
 * Signature: ()Ljava/lang/String
 */
JNIEXPORT jstring JNICALL Java_com_tencent_msdk_api_WGPlatformObserverForSO_OnCrashExtMessageNotify
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
