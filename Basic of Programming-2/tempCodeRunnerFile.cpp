
    nextTerm=firstTerm+secondTerm;

    for(int i=1;nextTerm<=n;i++){
       cout<<nextTerm<<" ";
       firstTerm=secondTerm;
       secondTerm=nextTerm;
       nextTerm=firstTerm+secondTerm;
    }