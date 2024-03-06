	
	int print2largest(int arr[], int n) {
	    if(n==1)
	    return -1;
	    
	    
	    
	    sort(arr,arr+n);// this loop is for ascending order
	    int large = arr[n-1];
	    for(int i =n-1;i>=0;i--){
	        if(arr[i]!= large)
	            return arr[i];
	        
	    }
	
	    
	    return -1;
	}
};
