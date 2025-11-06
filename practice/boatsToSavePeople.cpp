#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int boatsToSave(vector<int>&pep, int limit){
    sort(pep.begin(),pep.end());
    int n = pep.size();
    int i = 0;
    int j = n-1;
    int Totalb = 0;
    while(i <= j){
        if(pep[i] + pep[j] <= limit){
            i++;
            j--;
        }
        else{
            j--;
        }
        Totalb += 1;
    }
    return Totalb;
}
int main(){
    int n;
    cout << "Enter size: ";
    cin >> n;
    vector<int> d(n);
    for(int i=0; i<n; i++){
        cin >> d[i];
    }
    int limit;
    cout << "Enter limit: ";
    cin >> limit;
    cout << boatsToSave(d,limit);
}
