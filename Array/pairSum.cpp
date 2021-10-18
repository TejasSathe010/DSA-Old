#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

pair<int, int> pair_sum(vector<int> arr, int sum){
	pair<int, int> result;
	unordered_set<int> resultSet;

	for(int i=0; i<arr.size(); i++){
		int complement = sum - arr[i];
		if (resultSet.find(complement) != resultSet.end()){
			result.first = arr[i];
			result.second = complement;
			return result;
		}
		resultSet.insert(arr[i]);
	}
	return {};
}


int main(){
	vector<int> arr {10,5,2,3,-6,9,11};
    int S = 4;

    pair<int,int> p = pair_sum(arr,S);

    cout<<p.first<<","<<p.second<<endl;
    return 0;
}
