//문자열 탐색하면서 i보다 작은 알파벳은 i로 변환한 뒤 대문자로 변환

function solution(myString) {
    return [...myString].map(char => (char < 'l' ? 'l' : char)).join('');
}