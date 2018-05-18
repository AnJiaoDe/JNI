//
// Created by cy on 2018/5/15.
//
#include <jni.h>
JNIEXPORT jstring JNICALL Java_com_cy_jnima_MainActivity_stringFromC
        (JNIEnv * env, jclass cl){
    char* str="jni";

    return (*env)->NewStringUTF(env,str);
}