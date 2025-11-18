#include <iostream>
#include <queue>
#include <stack>
#include <cctype>

using namespace std;

bool isPalindrome(const string& input){
    queue<char> q ;
    stack<char> s;

    for(int i=0; i < input.size(); i++){
        q.push(input[i]);
        s.push(input[i]);
    }

    while(!q.empty()){
        if(q.front()==s.top()){
                q.pop();
                s.pop(); 
            }
        else{
            return false;
        }
    }

    if(q.empty()){
        return true;
    }

    return false;

}

int main(){
    cout << boolalpha;

    cout << "Is 'racecar' a palindrome ?"
         << isPalindrome("racecar") << endl;
    
    cout << "Is 'hello' a palindrome ?"
         << isPalindrome("hello") << endl;

    cout << "Is 'kayak' a palindrome ?"
         << isPalindrome("kayak") << endl;
}