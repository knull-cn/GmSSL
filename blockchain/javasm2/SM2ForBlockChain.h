/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class SM2ForBlockChain */

#ifndef _Included_SM2ForBlockChain
#define _Included_SM2ForBlockChain
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     SM2ForBlockChain
 * Method:    stringMethod
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_SM2ForBlockChain_stringMethod
  (JNIEnv *, jobject, jstring);

/*
 * Class:     SM2ForBlockChain
 * Method:    GenPrivateKey
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_SM2ForBlockChain_GenPrivateKey
  (JNIEnv *, jobject);

/*
 * Class:     SM2ForBlockChain
 * Method:    GetPublicKeyByPriv
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_SM2ForBlockChain_GetPublicKeyByPriv
  (JNIEnv *, jobject, jstring);

/*
 * Class:     SM2ForBlockChain
 * Method:    Sign
 * Signature: (Ljava/lang/String;[BI)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_SM2ForBlockChain_Sign
  (JNIEnv *, jobject, jstring, jbyteArray, jint);

/*
 * Class:     SM2ForBlockChain
 * Method:    Verify
 * Signature: (Ljava/lang/String;Ljava/lang/String;[BI)Z
 */
JNIEXPORT jboolean JNICALL Java_SM2ForBlockChain_Verify
  (JNIEnv *, jobject, jstring, jstring, jbyteArray, jint);

/*
 * Class:     SM2ForBlockChain
 * Method:    SM2Error
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_SM2ForBlockChain_SM2Error
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
