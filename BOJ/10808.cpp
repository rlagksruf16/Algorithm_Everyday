#include <iostream>
#include <algorithm>
#include <string>


using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int alpha[26];

    string word;
    
    cin >> word;
    
    for(int i = 0 ; i < 26; i++)
        alpha[i] = 0;
    
    int num;
    
    for(int i = 0; i < word.size(); i++) {
        num = word[i] - 97;
        alpha[num]++;
    }
    
    for(int i = 0 ; i < 26; i++)
        cout << alpha[i] << " ";
    
    
    return 0;
    
    
}
