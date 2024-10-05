#include "Math.h"
#include "in.h"
#include <iostream>
#include <cmath>

using namespace std;

void Math::mathemetic(){
    in b;
    bool tr = true;
    int a = b.Return();
    if(a >= 2){
        for(int i = 2; i <= sqrt(a); i++){
            if(a % i == 0){
                tr = false;
                cout << "Число а = " << a << " не є простим" << endl;
                break;
            }
        }
        if(tr == true){
            cout << "Число а = " << a << " є простим" << endl;
        }
    }
    else{
        cout << "Error a < 2" << endl;
    }
}