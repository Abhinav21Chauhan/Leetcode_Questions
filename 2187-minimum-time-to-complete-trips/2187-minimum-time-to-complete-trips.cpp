class Solution {
public:
bool check(long long mid,vector<int>&time,int totalTrips){
    long long c=0;
    for(int i=0;i<time.size();i++){
        c=c+(mid/time[i]);
        if(c>=totalTrips) return true;
    }
    return false;
}
    long long minimumTime(vector<int>& time, int totalTrips) {
        int n=time.size();
        long long mn=*min_element(time.begin(),time.end());
        long long lo=mn;
        long long hi=mn*totalTrips,mintime=hi;
        while(lo<=hi){
            long long mid=lo+(hi-lo)/2;
            if(check(mid,time,totalTrips)){
                mintime=mid;
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        return mintime;
    }
};