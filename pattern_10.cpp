class Solution {
public:
    void pattern10(int n) {
        if(n>=1 && n<=100){
            for(int i=1;i<=n*2-1;i++){
                int start=i;
                if(i>n)
                    start=2*n-i;
                for(int j=1;j<=start;j++){
                    cout<<"*";
                }
                cout<<endl;
            }
        }
    }
};
