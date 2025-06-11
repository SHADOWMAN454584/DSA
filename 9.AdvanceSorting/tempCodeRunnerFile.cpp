void merge(vector<int>& a,vector<int>& b,vector<int>& res){
    int i=0,j=0,k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]) res[k++]=a[i++];
        else res[k++] = b[j++];
    }
    if(i==a.size()){
        while(j<b.size()){
            res[k++]=b[j++];;
        }
    }
    if(i==b.size()){
        while(j<a.size()){
            res[k++]=a[i++];;
        }
    }
}