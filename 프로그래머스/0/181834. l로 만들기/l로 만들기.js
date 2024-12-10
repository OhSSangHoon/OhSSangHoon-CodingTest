//문자열 탐색하면서 l보다 작은 알파벳은 l로 출력 l보다 크면 그대로 출력

function solution(myString) {
    //myString은 문자열이라서 map을 사용하지못함 그래서 배열로 변경한 뒤 map함수 사용
    return [...myString].map(char => (char < 'l' ? 'l' : char)).join('');
}

