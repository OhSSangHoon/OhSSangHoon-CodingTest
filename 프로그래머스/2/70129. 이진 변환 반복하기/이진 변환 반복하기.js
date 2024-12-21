// 문자열 s에서 0제외 1의 개수 > 이진변환 횟수
// 제외한 0의 누적합 > sum

function solution(s) {
    let sum = 0;
    let convert = 0;
    
    // 문자열 s가 1이 될때까지 반복
    while(s !== "1"){
        // 현재 문자열에서 0의 개수 세기
        const zeros = s.split('').filter(c => c === '0').length;
        sum += zeros;
        
        // 0을 제거하고 남은 1의 개수 계산
        const ones = s.length - zeros;
        
        // 남은 1의 개수를 2진수로 변환
        s = ones.toString(2);
        
        // 변환 횟수 증가
        convert++;
    }
    
    return [convert, sum];
}