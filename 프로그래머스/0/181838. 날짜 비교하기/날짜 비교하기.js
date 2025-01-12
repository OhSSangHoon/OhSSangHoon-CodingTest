function solution(date1, date2) {
    
    return new Date(...date1) < new Date(...date2) ? 1 : 0;
    
    
    // return date1.map(Number).join('') < date2.map(Number).join('') ? 1 : 0;
    //date1이 202511이고 date2가 20241231이라면 어떻게해야하나
}