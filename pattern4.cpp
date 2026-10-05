class Solution {
public:
    void pattern4(int n) {
        if(n>=1 || n<=100){
            for(int i=1;i<=n;i++){
                for(int j=1;j<=i;j++){
                    cout<<i;
                }
                cout<<endl;
            }
        }
    }
};
