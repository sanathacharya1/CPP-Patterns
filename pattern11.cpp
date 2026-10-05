class Solution {
public:
    void pattern11(int n) {
        if(n>=1 && n<=100){
            int even=1;
            for(int i=0;i<n;i++){
                if(i%2==0)
                even=1;
                else
                even=0;
                for(int j=0;j<=i;j++){
                    cout<<even<<" ";
                    even = 1 - even;
                }
                cout<<endl;
            }
        }
    }
};
