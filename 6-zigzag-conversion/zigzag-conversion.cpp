class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1 or s.length()<=numRows)
            return s;

        string rowstr[numRows];
        for(int i=0;i<numRows;i++){
            rowstr[i]="";
        }
        int index=0;
        int i=0;
        while(index<s.length()){
            while(index<s.length() && i<numRows){
                rowstr[i].push_back(s[index++]);
                i++;
            }
            i-=2;
       
            while(index<s.length() && i>=0){
                rowstr[i].push_back(s[index++]);
                i--;
         

            }
            i=1;
           
            
        }
        string res="";
        for(i=0;i<numRows;i++){
            res.append(rowstr[i]);
        }
        return res;
    }
};