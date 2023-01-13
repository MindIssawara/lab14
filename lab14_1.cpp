#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double A[],int N,double B[]){
    double sum=0,sum2=0,pro=1,sum3=0;
    B[4]=A[0];
    B[5]=A[0];
    for(int i=0;i<N;i++){
        sum = sum + A[i];
        sum2= sum2 + pow(A[i],2);
        pro = pro*A[i];
        sum3= sum3 + (1/A[i]);
        if(A[i]>B[4]) B[4]=A[i];
        if(A[i]<B[5]) B[5]=A[i];
    }
    B[0] = sum/N;
    B[1] = (sum2/N)-pow(B[0],2);
    B[1] = sqrt(B[1]);
    B[2]= pow(pro , (float)1 / N);
    B[3] = ((float)1/N)*sum3;
    B[3] = 1/B[3];
    
    
}