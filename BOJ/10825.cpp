// 여러개의 원소들이 있는 경우 + 각 원소들에 대한 조건들이 있는 경우의 정렬

#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
#include <string>

// stable_sort() 활용
using namespace std;

class Student {
public:
    string name;
    int korean;
    int english;
    int math;
};

bool com(Student a, Student b);

int main() {
    
    int N; // 갯수

//    vector<Student> v; // 학생의 정보를 담고 있는 vector 생성
    
    cin >> N;
    
    Student v[N];
    
    for(int i = 0; i < N; i++) {
        cin >> v[i].name >> v[i].korean >> v[i].english >> v[i].math;
    }
    
    sort(v, v+N, com);
    
    for(int j = 0; j < N; j++) {
        cout << v[j].name << "\n";
    }
    
    
    return 0;
}

bool com(Student a, Student b) {
    if(a.korean > b.korean)
        return true;
    else if(a.korean == b.korean) {
        if(a.english < b.english)
            return true;
        else if(a.english == b.english) {
            if(a.math > b.math)
                return true;
            else if(a.math == b.math) {
                if(a.name < b.name)
                    return true;
                else
                    return false;
            }
            else
                return false;
        }
        else
            return false;
    }
    else
        return false;
}
