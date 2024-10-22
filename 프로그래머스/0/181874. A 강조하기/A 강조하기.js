function solution(myString) {
    var answer = '';
    
    answer = myString.replaceAll(myString, myString.toLowerCase()).replaceAll("a", "A");
    
    return answer;
}