class Solution {
public:
    int compress(vector<char>& chars) {

        if(chars.size() == 1){
            return 1;
        }

        int i = 0;
        int j = 1;
        int k = 0;

        while(i < chars.size()){

            while(j < chars.size() && chars[i] == chars[j]){
                j++;
            }

            chars[k] = chars[i];
            k++;

            int count = j - i;

            if(count > 1){
                string num = to_string(count);

                for(int x = 0; x < num.size(); x++){
                    chars[k] = num[x];
                    k++;
                }
            }

            i = j;
            j = i + 1;
        }

        return k;
    }
};