function solution(a, d, included) {
    var answer = 0;
    
    // included의 크기만큼 반복
    // a 첫째항, d 공차
    // included[i]가 true일 때만 계산
    
    for(let i = 0; i < included.length; i++){
        const sum = a + (d * i);
        
        // included가 true이면
        if(included[i]){
            // 합
            answer += sum;
        }
    }
    
    return answer;
}