class Solution {
public:
    int nextGreaterElement(int n) {

        string str = to_string(n);
        int length = str.length();

        for(int k=length-2;k>=0;k--){
            if(str[k]<str[k+1]){

                int i=k+1;
                while(i<length-1 && str[i+1]>str[k]){
                    i++;
                }

                swap(str[k],str[i]);
                reverse(str.begin()+k+1,str.end());
                
                return (length==10 && str>"2147483647")? -1:stoi(str);
            }
        }

        return -1;
    }
};