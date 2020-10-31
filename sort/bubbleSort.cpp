#include <iostream>
#include <bits/stdc++.h>

#define loop(a,b) for(int i = a; i < b; i++)

using namespace std;

void bubbleSort(vector<int> &vect){//N^2
    int aux = 0;
    loop(0,vect.size()) {
        loop(0,vect.size()-1){
            if(vect[i]>vect[i+1]){
                aux = vect[i+1];
                vect[i+1] = vect[i];
                vect[i] = aux;
            }
        }
    }
    return;
}

int main() {  
    cin.tie(0);
    ios::sync_with_stdio(0);
    vector<int> v = {-2,2,2,-15,3,1,-2,4,-2};
    bubbleSort(v);
    
    loop(0, v.size()){
        cout << i << ": "<< v[i] << ", ";
    }

    return(0);
}

//g++ usual.cpp -std=c++11 -Wfatal-errors -o test
//test / test >> output.txt
// :)       