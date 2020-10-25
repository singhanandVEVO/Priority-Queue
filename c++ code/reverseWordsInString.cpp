#include<bits/stdc++.h>
using namespace std;

string getReversedWordString(string originalString) {

    string reversedString = "", tempWordString = "";
    const char Blankspace = ' ';
    int i,size = originalString.size();

    for(i=size-1; i>=0; i--) {

        if(originalString[i] == Blankspace) {
            tempWordString += originalString[i];
            reversedString += tempWordString;
            tempWordString = "";

        } else {
            tempWordString = originalString[i] + tempWordString;
        };
    }
    if(tempWordString.size()>0) {
        reversedString += tempWordString;
    }
    return reversedString;
}

int main() {
    string str = "i works as a software engineer";
    string reversedWordString  = getReversedWordString(str);
    cout<<""<<reversedWordString<<"\n";
    return 0;
}