class Solution {
public:
    vector<string> fizzBuzz(int n) {

    vector<string> answer;
    
    for(int i = 0; i<n ;i++){
    int num = i+1;
    if(num%3==0 && num%5==0){
        answer.push_back("FizzBuzz");//for vector here push_back
    }
    else if(num%3==0){
        answer.push_back("Fizz");
    }
    else if(num%5==0){
        answer.push_back("Buzz");
    }
    else{
       answer.push_back(to_string(num));
    }
   
    }
    return answer;
    }
};