#include <iostream>
#include <vector> //배열 동적할당을 사용하기 위해 vector 사용

using namespace std;

//구조체 Person 생성
struct Person{
    int weight; //몸무게
    int height; //키
    int rank; //덩치 순위
};

int main(){
    int n;

    cin >> n;

    vector<Person> people(n);

    for(int i = 0; i < n; i++){
        cin >> people[i].weight >> people[i].height; //배열에 키 몸무게 입력
        people[i].rank = 1; //초기 순위는 1로 설정
    }

    //순위 계산
    for(int i =0; i < n; i++){
        for(int j = 0; j < n; j++){
            //i번째의 몸무게와 키를 j번쨰 배열들과 비교
            if(people[i].weight < people[j].weight && people[i].height < people[j].height){
                people[i].rank++;
            }
        }
    }

    //출력
    for(int i =0; i < n; i++){
        cout << people[i].rank << " ";
    }

    return 0;
}