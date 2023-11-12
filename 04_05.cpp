#include <iostream>
#include <vector>

using namespace std;

// 定义学生结构体
struct Student {
    string name;
    int averageScore;
    int classEvaluation;
    char isStudentLeader;
    char isWesternStudent;
    int paperCount;
    int totalScholarship; // 用于存储每个学生的奖学金总数
};

// 计算学生奖学金的函数
int calculateScholarship(const Student& student) {
    int scholarship = 0;

    // 计算院士奖学金
    if (student.averageScore > 80 && student.paperCount >= 1) {
        scholarship += 8000;
    }

    // 计算五四奖学金
    if (student.averageScore > 85 && student.classEvaluation > 80) {
        scholarship += 4000;
    }

    // 计算成绩优秀奖
    if (student.averageScore > 90) {
        scholarship += 2000;
    }

    // 计算西部奖学金
    if (student.averageScore > 85 && student.isWesternStudent == 'Y') {
        scholarship += 1000;
    }

    // 计算班级贡献奖
    if (student.classEvaluation > 80 && student.isStudentLeader == 'Y') {
        scholarship += 850;
    }

    return scholarship;
}

int main() {
    int N;
    cin >> N;

    vector<Student> students(N);

    // 输入学生数据
    for (int i = 0; i < N; ++i) {
        cin >> students[i].name >> students[i].averageScore >> students[i].classEvaluation
            >> students[i].isStudentLeader >> students[i].isWesternStudent >> students[i].paperCount;
    }

    // 计算每个学生的奖学金总数
    for (int i = 0; i < N; ++i) {
        students[i].totalScholarship = calculateScholarship(students[i]);
    }

    // 找出获得最多奖学金的学生
    int maxScholarship = 0;
    string topStudent;

    for (int i = 0; i < N; ++i) {
        if (students[i].totalScholarship > maxScholarship) {
            maxScholarship = students[i].totalScholarship;
            topStudent = students[i].name;
        }
    }

    // 输出结果
    cout << topStudent << endl;
    cout << maxScholarship << endl;

    int totalScholarshipSum = 0;
    for (int i = 0; i < N; ++i) {
        totalScholarshipSum += students[i].totalScholarship;
    }
    cout << totalScholarshipSum << endl;

    return 0;
}
