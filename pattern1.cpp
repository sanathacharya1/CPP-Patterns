#include<iostream>
using namespace std;
class Solution {
public:
    void pattern1(int n) {
        if(n>=1 || n<=100){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout<<"*";
                }
                cout<<endl;
            }
        }
    }
};

