#include <bits/stdc++.h>
using namespace std;

bool check_palindrome(long long int num) {
    
    while(num) {
        
        int last, first;
        last = num % 10;
        long long int raise_to_power = pow(10, (int)log10(num));
        first = num / raise_to_power;
        
        if(first!=last)
            return false;
        
        num = (num%raise_to_power) / 10;
        
    }
    
    return true;
}

int main() {
	
	long long int num;
	cin>>num;
    
    if(check_palindrome(num))
        cout<<"true";
    else
        cout<<"false";
}