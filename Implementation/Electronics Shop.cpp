

//function alone

long int getMoneySpent(vector<long int> keyboards, vector<long int> drives,long  int b) {
    
    sort(keyboards.begin(), keyboards.end());
     sort(drives.begin(), drives.end());
    
    int klen = keyboards.size();
    int dlen = drives.size();
    long int max = -1 ;
    
    for(int j = klen -1, i = 0 ; j>=0 ;j-- ){
        for(;i<dlen && drives[i] + keyboards[j] <= b ; i++){
            if(drives[i]+keyboards[j] > max){
                max = drives[i] + keyboards[j];
                  // if(max == b){
                  //        return max;
                  // }
            }
        }
      
    }
    if(max > b)
        return -1;
    else
        return max;
    

}

