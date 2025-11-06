#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int bagOfTokens(vector<int>& tokens, int power){
    sort(tokens.begin() , tokens.end());
    int n = tokens.size();
    int i = 0;
    int j = n-1;
    int score = 0;
    int maxS = 0;
    while(i <= j){
        if(power >= tokens[i]){
            power -= tokens[i];
            score += 1;
            maxS = max(maxS,score);
            i++;
        }
        else if(score >= 1){
            power += tokens[j];
            score -= 1;
            j--;
        }
        else return maxS;
    }
    return maxS;
}
int main(){
    int n ;
    cout << "Enter array size: ";
    cin >> n;
    vector<int> d(n);
    cout << "Enter your ele: ";
    for(int i=0; i<n; i++) cin >> d[i];
    cout << "Enter power: ";
    int pow;
    cin >> pow;
    cout << "Max Score: " << bagOfTokens(d,pow);
}
