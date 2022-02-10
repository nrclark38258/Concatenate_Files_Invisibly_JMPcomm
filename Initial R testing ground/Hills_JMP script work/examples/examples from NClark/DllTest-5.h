/* 
 * File:   DllTest.h
 * Author: rlachapelle
 *
 * Created on May 29, 2014, 12:44 PM
 */

using namespace std;

extern "C" double __declspec(dllexport) _stdcall calcTrigger(double input, double * mockarray, int size, double * outarray, int outsize);

