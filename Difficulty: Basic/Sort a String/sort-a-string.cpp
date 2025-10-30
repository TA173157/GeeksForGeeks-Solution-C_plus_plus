string sort(string s) {
    vector <int> number;
    for(int i=0;i<s.size();i++){
        number.push_back(s[i]-'a');
    }
    s ="";
    sort(number.begin(),number.end());
    for(int i=0;i<number.size();i++){
        
        s.push_back('a'+number[i]);
    }
    return s;
}