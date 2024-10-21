function solution(str_list, ex) {
    var answer = '';
    
    for(let i = 0; i < str_list.length; i++){
        // includes 함수를 사용해 문자열 ex가 문자열 리스트 str_list에 포함되어있는지 확인
        // 만약 포함되어있지않다면 문자열 answer에
        if(!str_list[i].includes(ex)){
            answer += str_list[i];
        }
    }
    
    return answer;
}