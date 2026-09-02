class Solution {
public:

        //Here look simple we need to perform the task again and again for that lets use recursion by creating the another new functionn 
        //Lsts take this = | and lets do partition b/w the words one after the another 
        //while we are doing the partitions right we will get some palindrom words so we need to store then right for that lets use a temporary storage called part
        //After performing all of these lsts push all of the things inside the main output ans
        //Before all of these as we are applying the recursion here note one thing we need to create a functionn to check is it a palindrome and alos remember one thing in the recursion annd while we are backtracking we will delete the words/eleme ts keep this thing in mind always 

        //Start ans create the palindrome function first

        bool isPal(string s){
            string s1=s;
            reverse(s1.begin(), s1.end());
            return s==s1;
        }

        //After this lets create the recursion function 

        void palPart(string s, vector<string>&part, vector<vector<string>>&ans){
            //Wrtite the base case 

            if (s.size()==0){
                //We shpuld not perform anything just push all the things the ans and return it 
                ans.push_back(part);
                return;
            }

            //Start trversing the string 
            for (int i=0; i<s.size(); i++){
                //Whilw we are traversing right we will get some subpart we need  to take that and we need to apply the recursion

                string subPart = s.substr(0, i+1);
                //Call the palindrome function

                if (isPal(subPart)){
                    //If it is a pal then weneed to push that to the part
                    part.push_back(subPart);
                    //Call the main recursive fun so that it can perform the task on remeinig string 
                    palPart(s.substr(i+1), part, ans);
                    part.pop_back();
                }
            }

        }


    vector<vector<string>> partition(string s) {

        vector<string> part;
        vector<vector<string>>ans;
        palPart(s, part, ans);
        return ans;
    
        
    }
};