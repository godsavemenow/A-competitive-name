#include <iostream>
#include <bits/stdc++.h>
#include <array>
#define loop(a,b) for(int i = a; i < b; i++)
#define lenght(a) sizeof(a)/sizeof(*a)

using namespace std;
int[] bubbleSort(int [] array*){//N^2
    int aux = 0;
    loop(0,lenght(array)) {
        loop(0,lenght(array)-1){
            if(array[i]>array[i+1]){
                sum = array[i+1];
                array[i+1] = array[i];
                array[i] = aux;
            }
        }
    }
}
int main() {  
cin.tie(0);
ios::sync_with_stdio(0);
int array[9] = {-2,2,2,-15,3,1,-2,4,-2};
bubbleSort(array)
loop(0, lenght(array)){
        cout <<i << ": "<< array[i] << ", ";
    }

return(0);
}
//g++ usual.cpp -std=c++11 -Wfatal-errors -o test
//test / test >> output.txt
// :)       