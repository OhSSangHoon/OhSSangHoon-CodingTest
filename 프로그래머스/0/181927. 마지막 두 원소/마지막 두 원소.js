function solution(num_list) {
    
    // 배열의 마지막 값과 이전 값 비교
    let last = num_list[num_list.length - 1];
    let before = num_list[num_list.length - 2];
    
    // 크면 뺀 값을 추가, 작으면 두 배한 값을 추가
    return[...num_list, last > before ? last - before : last * 2];
    
    
}