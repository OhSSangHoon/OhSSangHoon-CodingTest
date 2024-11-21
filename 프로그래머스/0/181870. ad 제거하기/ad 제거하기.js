function solution(strArr) {
    var answer = [];
    
    answer = strArr.filter(a => !a.includes('ad'));
    
    return answer;
}