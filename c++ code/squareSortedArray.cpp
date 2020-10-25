#include<bits/stdc++.h>
using namespace std;


void printSortedSquaredArray(int A[],int numOfElements) {
    int left = 0, right = numOfElements -1;
    int sortedArray[numOfElements];
    for(int i = numOfElements - 1; i>=0; i--) {
        if(abs(A[left]) > abs(A[right])) {
            sortedArray[i] = A[left] * A[left];
            left++;
        } else {
            sortedArray[i] = A[right] * A[right];
            right--;
        }
    }
    for(int i=0; i<numOfElements; i++) {
        cout<<""<<sortedArray[i]<<" ";
    }
    cout<<endl;
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