//You are given an array (which will have a length of at least 3, 
//but could be very large) containing integers.
//The array is either entirely comprised of odd 
//integers or entirely comprised of even integers
//except for a single integer N. Write a method
//that takes the array as an argument and returns
//this "outlier" N.
int FindOutlier(std::vector<int> arr)
{
    std::vector <int> res_ev;
    std::vector <int> res_odd;
    for(auto i:arr){
      if(i%2==0){
        res_ev.push_back(i);
      }
      else{
        res_odd.push_back(i);
      }
    }
    if(res_ev.size()==1){
      return *res_ev.begin();
    }
  else{
    return *res_odd.begin();
  }
}