    
    static bool comp(Item a1, Item a2){
        return (double(a1.value) / double(a1.weight)) > (double(a2.value) / double(a2.weight));
    }
    
    
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr, arr + n, comp);
        double sum = 0.0;
        int i = 0;
        while(W > 0 && i < n){
            if(arr[i].weight <= W){
                sum += arr[i].value;
                W -= arr[i].weight;
            }
            else{
                sum += (double(arr[i].value) / double(arr[i].weight) * double(W));
                W = 0;
            }
            i++;
        }
        return sum;
    }
     
