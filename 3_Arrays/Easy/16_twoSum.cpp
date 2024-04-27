/*
string read(int n, vector<int> book, int target){
    sort(book.begin(),book.end());
    int start = 0;
    int end = n-1;

    while(start < end){
        if(book[start] + book[end] == target)
            return "YES";

        else if(book[start] + book[end] > target)
            end--;

        else
            start++;
    }

    return "NO";
}

*/