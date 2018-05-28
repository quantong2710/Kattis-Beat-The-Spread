/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: tongd
 *
 * Created on November 24, 2017, 5:14 PM
 */

#include <cstdlib>
#include <iostream>
#include <stdio.h>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int count;
    cin >> count;
    for(int i = 0; i < count; i++) {
        int sum;
        cin >> sum;
        int dif;
        cin >> dif;
        if(dif > sum || (dif % 2 == 0 && sum % 2 != 0) || (sum % 2 == 0 && dif % 2 != 0)) cout << "impossible" << endl;
        else {
            int carry = 0;
            if(sum % 2 != 0 ) carry = 1;
            int larger = sum/2 + dif/2 + carry;
            int smaller = sum/2 - dif/2;
            cout << larger << " " << smaller << endl;
        }
    }
    return 0;
}

