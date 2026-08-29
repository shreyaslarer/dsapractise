class Solution {
public:
    bool lemonadeChange(vector<int>& arr) {

        //Lets take the bills 
        int five = 0;
        int ten = 0;
    for (int i =0; i<arr.size(); i++){
        if (arr[i]==5){
            five+=1;
        }else if (arr[i]==10){
            if (five>0){
                five-=1;
                ten+=1;
            }else {
                return false;
            }
        }else {
            if(ten>0 && five>0){
                ten-=1;
                five-=1;
            }else if(five>=3){
                five-=3;
            }else{
                return false;
            }
        }
    }
    return true;
        
    }
};