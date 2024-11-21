function solution(my_strings, parts) {
    // 첫 번째 배열에서 0에서 4번째 문자 추출
    // 두 번째 배열에서 1에서 2번째 문자 추출
    // 세 번째 배열에서 3에서 5번째 문자 추출
    // 네 번째 배열에서 7에서 7번째 문자 추출
    var answer = '';
    
    for(let i = 0; i < my_strings.length; i++){
        answer += my_strings[i].split('').slice(parts[i][0], parts[i][1]+1).join('')
    }
    
    
    return answer;
}