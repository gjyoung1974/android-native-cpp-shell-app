/*
Copyleft 2017 Gordon Young
gjyoung1974@gmail.com

This class demonstrates integration with the Crystax NDK

*/

#include <jni.h>
#include <string>


extern "C" {
jstring Java_com_gyoung_crypto_botan_android_demo_MainActivity_HelloWorldString(JNIEnv *env) {

    std::string s_ccid = "Hello from C++11";

    return env->NewStringUTF(s_ccid.c_str());
}


}
