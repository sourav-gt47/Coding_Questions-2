#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool is_prime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int count_primes(int n) {
    string s = to_string(n);
    int count = 0;
    for (int i = s.size() ; i >= 0; i--) {
        string sub = s.substr(0, i);
       
       if(sub.empty()){
           
           continue;
       }
       
        int num = stoi(sub);
        if (is_prime(num)) {
            count++;
        }
    }
    return count;
}


int main() {
    int n;
    cin >> n;

    int count = count_primes(n);
    cout << count << endl;

    return 0;
}
