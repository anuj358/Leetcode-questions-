class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int i=0;
        int j=0;

        while(i<str1.length() && j<str2.length()){

            char next;
            if(str1[i]=='z'){
                next='a';
            }
            else{
                next=str1[i]+1;
            }

            if(str1[i]==str2[j]){
                j++;
            }
            else if(next==str2[j]){
                j++;
            }

            i++;
        }

        if(j==str2.length()){
            return true;
        }
        else{
            return false;
        }
    }
};