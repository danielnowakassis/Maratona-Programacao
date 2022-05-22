#include<iostream>
#include<math.h>
using namespace std;

float distancia(int a[], int b[], int n){
    float d = 0;
    float maior = 0;
    for(int j = 0; j < n - 1; ++j){
        for(int k = j + 1; k < n; ++k){
            d = sqrt( pow(a[j] - a[k], 2) +  pow(b[j] - b[k], 2));
            if(d > maior){
                maior = d;
            }
        }
    }
    return maior;
}
int main(){
    int n, i = 0,t, a, b;
    cin >> n;
    int array1[200];
    int array2[200];
    while(i < n){
    cin >> a >> b;
    array1[i] = a;
    array2[i] = b;
    i++;
    }
    cout << distancia(array1, array2, n);
    return 0;
}