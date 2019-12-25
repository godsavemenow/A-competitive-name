#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#define loop(a,b) for(int i = a; i < b; i++)

using namespace std;
void merge(vector<int> &vect, int l, int m, int r);
void mergeSort(vector<int> &vect, int l, int r);

void merge(vector<int> &vect, int l, int m, int r){
    int n1 = m - l + 1;
    int n2 = r - m;
    int lvect[n1];
    int rvect[n2];
    loop(0,n1){
        lvect[i] = vect[l + i];
    }
    loop(0,n2){
        rvect[i] = vect[m + i + 1];
    }
    int k = l;
    int j = 0;
    int i = 0;

   while (i < n1 && j < n2) 
    {
        if (lvect[i] <= rvect[j]){
            vect[k] = lvect[i];
            i++;
        }   
        else 
        {
            vect[k] = rvect[j];
            j++;
        }
        k++;
   }
   while (i < n1) 
    { 
        vect[k] = lvect[i]; 
        i++; 
        k++; 
    } 
  
    while (j < n2) 
    { 
        vect[k] = rvect[j]; 
        j++; 
        k++; 
    } 
}

void mergeSort(vector<int> &vect, int l, int r){ //N^2
    if(l < r){
        int m = l + (r-l) / 2;
        mergeSort(vect, l , m);
        mergeSort(vect, m+1 , r);
        merge(vect,l,m,r);
    }
    
}




int main() {  
cin.tie(0);
ios::sync_with_stdio(0);
vector<int> v = {-2,2,2,-15,3,1,-2,4,-2};
mergeSort(v, 0,v.size()-1);
loop(0, v.size()){
        cout << " | "<< v[i] ;
    }

return(0);
}
//g++ usual.cpp -std=c++11 -Wfatal-errors -o test
//test / test >> output.txt
// :)       