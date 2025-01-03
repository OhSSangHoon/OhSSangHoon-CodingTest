//my_string을 순회하면서 indices의 인덱스에 해당하는 글자를 지우기

function solution(my_string, indices) {
    var answer = '';
    
    for(let i = 0; i < my_string.length; i++){
        //includes함수를 사용해 indices에 포함되지 않은 인덱스의 문자만 가져오기
        if(!indices.includes(i)){
            answer += my_string[i];
        }
    }
    
    return answer;
}