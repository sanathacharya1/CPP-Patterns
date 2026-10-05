class Solution {
public:
    void pattern5(int n) {
        if(n>=1 || n<=100){
            for(int i=n;i>0;i--){
                for(int j=1;j<=i;j++){
                    cout<<"*";
                }
                cout<<endl;
            }
        }
    }
};
