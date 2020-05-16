package com.example.factoriallib;

import android.util.Log;

public class factcalculator {

    static {
        System.loadLibrary("native-lib");
    }
    public static double calculate(int num){
        double a = new factcalculator().factcal(num);
        Log.d("tag",String.valueOf(a));
        return a;
    }

    public native double factcal(int n);

}
