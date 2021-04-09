    string intToRoman(int num) {
        vector<string> code = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };
        vector<int> nums = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        
        string res = "";
        
        for(int i = 0; i < code.size(); i++){
            while(num >= nums[i]){
                res += code[i];
                num -= nums[i];
            }
        }
        return res; 
    }
