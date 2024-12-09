function solution(arr, intervals) {
    
    //intervals배열에서 값을 추출해 각각의 배열에 할당
    //a1 = 1, b1 = 3, a2 = 0, b2 = 4
    const [[a1, b1], [a2, b2]] = intervals;

    //각 구간의 값을 추출하고 spread 연산자로 두 배열을 합침
    //첫 번째 구간 arr[1] arr[3]
    //뒷 부분에 +1을 하는 이유는 slice는 end인덱스 직전까지만 자르기때문
    return [...arr.slice(a1, b1 + 1), ...arr.slice(a2, b2 + 1)];
    
}

//arr[1]부터 arr[3]까지 234
//arr[0]부터 arr[4]까지 12345