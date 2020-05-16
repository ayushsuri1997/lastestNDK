#include <jni.h>
#include <string>

extern "C" JNIEXPORT jdouble JNICALL
Java_com_example_factoriallib_factcalculator_factcal(
        JNIEnv* env,
        jobject /* this */, jint num) {
    jint fact = 1;
    for (jint i = num; i > 0 ; i--) {
        fact = fact * i;
    }
    return jdouble(fact);
}
