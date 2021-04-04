  static bool compp(Job a, Job b){
      return a.profit > b.profit;
  }
  
    vector<int> JobScheduling(Job arr[], int n) 
    { 
       sort(arr, arr+n, compp);
        int max_schedule_time = -1;
        int jobs=0, pft =0;
        for(int i=0; i<n; i++)
        {
            max_schedule_time = max(max_schedule_time,arr[i].dead);
        }
        vector<bool>latest_job(max_schedule_time);
        for(int i=0; i<n; i++)
        {
            
            int j = arr[i].dead-1;
            while(j>=0)
            {
                if(latest_job[j]==false)
                {
                    jobs++;
                    pft+=arr[i].profit;
                    latest_job[j]=true;
                    break;
                }
                j--;
            }
        }
        return vector<int>{jobs,pft};
    } 
