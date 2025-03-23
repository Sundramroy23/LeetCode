class Solution {
public:
    int titleToNumber(string ct) {
        int tot = 0;
        // if(ct.length()==1){
        //     return ct[0] - 'A'+1;
        // }
        int i = 0;
        for(i;i<ct.length();i++){
            tot = tot*26+(ct[i]-'A'+1);
        }
        // tot+= (ct[i]-'A'+1);
        
        return tot;
    }
};