class Solution {
public:
    void pattern8(int n) {
        if(n>=1 && n<=100){
            for(int i=0;i<n;i++){
                for(int j=0;j<i;j++){
                    cout<<" ";
                }
                for(int j=0;j<2*n-(2*i+1);j++){
                    cout<<"*";
                }
                 
                
                cout<<endl;
            }
        }
    }
};
