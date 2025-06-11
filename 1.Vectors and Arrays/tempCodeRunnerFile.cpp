    vector <double> v3;
    v3.insert(v3.end(), v1.begin(), v1.end());
    sort(v3.begin(), v3.end());
    if(v3.size()%2==0){
        return (v3[v3.size()/2]+v3[v3.size()/2-1])/2.0;
    }
    else{
        return v3[v3.size()/2];
    }