class Solution {
public:
    bool isPalindrome(int x) {
        
   int num = x;
   long long reverse = 0;
    if(num < 0){
        return false;
    }
    else{
        do{
   
            int temp = num%10;
            reverse = (reverse*10) + temp;
            num = num/10;
        }while(num!=0);
    }

  if(reverse == x){
    return true;
  }
  else{
    return false;
  }
    }
};