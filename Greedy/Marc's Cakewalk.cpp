
// https://www.hackerrank.com/challenges/marcs-cakewalk/problem


//function alone...

long marcsCakewalk(vector<int> calorie) {
    
    sort(calorie.begin() , calorie.end(), greater<int>());
    int len = calorie.size();
    long int sum = 0;
    for(int i = 0; i< len ;i++){
        sum += calorie[i] * (pow(2,i));
    }
    return sum;

}