#include<bits/stdc++.h>
using namespace std;


void printSortedSquaredArray(int A[],int numOfElements) {
    // todo 
}


int main() {
    int T;
    cin>>T;
    while(T--) {
        int i,numOfElements;
        cin>>numOfElements;
        int A[numOfElements];

        for(i=0; i<numOfElements;i++) {
            cin>>A[i];
        }

        printSortedSquaredArray(A, numOfElements);

    }
    return 0;
}