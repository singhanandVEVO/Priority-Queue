#include<bits/stdc++.h>
using namespace std;

int findLastStone(int stones[],int N){
	int i,lastStoneValue = 0;
	priority_queue<int> maxHeap(stones, stones + N);

	while(maxHeap.size()>1){
		int first = maxHeap.top();
		maxHeap.pop();
		int second = maxHeap.top();
		maxHeap.pop();
		if(first == second)
			continue;
		else maxHeap.push(abs(first-second));
	}
	if(!maxHeap.empty())
		lastStoneValue = maxHeap.top();
	return lastStoneValue;
}

int main(){
	int T;
	cin>>T;
	while(T--){
		int i,N;
		cin>>N;
		int A[N];
		for(i=0;i<N;i++){
			cin>>A[i];
		}
		int lastStone = findLastStone(A,N);
		cout<<"Last Stone : "<<lastStone<<"\n";
	}	
	return 0;
}
