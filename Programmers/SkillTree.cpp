// Programmers summer/winter coding SkillTree 문제

#include <string>
#include <vector>

using namespace std;
int solution(string skill, vector<string> skill_trees) {
    int answer = 0; // 가능한 스킬트리 갯수
    for(int i = 0; i < skill_trees.size(); i++) {
        int checks = 1;
        string corrects = "";
        int tmp = 0;
        for(int j = 0; j < skill_trees[i].size(); j++) {
            for(int z = tmp; z < skill.size(); z++) {
                if(skill[z] == skill_trees[i][j]) {
                    corrects.push_back(skill_trees[i][j]);
                    tmp = z;
                }
            }
        }
        for(int i = 0; i < corrects.size(); i++) {
            if(skill[i] != corrects[i]) {
                checks = 0;
                break;
            }
        }
        if(checks == 1)
            answer +=1;
    }
    return answer;
}