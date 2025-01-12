function solution(myString) {
    var answer = [];
    
    answer = myString.split('x').filter(str => str !== '').sort();
    
    return answer;
}