//
// Created by user on 7/8/22.
//

#include <jni.h>

extern "C"
JNIEXPORT void JNICALL
Java_com_example_asantest_MainActivity_nativeCall(JNIEnv* env,jobject thiz) {
    int* x = new int[1];
    x[100] = 0;
}