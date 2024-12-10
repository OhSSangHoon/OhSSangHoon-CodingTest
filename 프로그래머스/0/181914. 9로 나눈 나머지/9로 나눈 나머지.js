function solution(number) {
    var answer = 0;
    
    //문자열 number의 길이만큼 반복문 실행
    //각 자리 수 정수로 변환한 뒤 answer에 누적 저장
    for(let i = 0; i < number.length; i++){
        answer += parseInt(number[i]);
    }
    
    //answer % 9값 반환
    return answer % 9;
}