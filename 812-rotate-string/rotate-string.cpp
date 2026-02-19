class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length())
        return false;

        string temp=s+s;

        if(temp.find(goal)!=string::npos) //string::npos is used if goal isnot in s then return no position
        return true;
        else
        return false;
    }
};