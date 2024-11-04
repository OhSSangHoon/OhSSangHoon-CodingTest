function solution(my_string) {
    var answer = [];
    
    //my_string의 접미사를 찾아 answer에 push
    for(let i = 0; i < my_string.length; i++){
        answer.push(my_string.substring(i));
    }
    
    // 정렬
    return answer.sort();
}