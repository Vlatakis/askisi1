
#include "std_lib_facilities.h"

int recursiveLinearSearch(int key_word,vector<int> a, int position)
{
    int key;
    for (int i = position; i < a.size(); ++i)
    {
        
        if (a.at(i) == key_word)
            //cout << i; 
            key = i;  
             
    }
    /*if (count(a.begin(), a.end(), key_word)) {
		cout << "Element found";
	}
	else {
		cout << "Element not found";
	}
    cout << a.at(key) << endl << key;
     if (key == key)
        cout << key << endl;
    else    
        cout << "-1";
    */
   //cout << key << a[key];

    return 0;
}

int main()

{
    int keyword;
    cout<< "Give the keyword " ;
    cin >> keyword;
    int position;
    cout<< "Give the position " ;
    cin >> position;

    vector<int> zygos;

    int i, g;

    for( i = 0; i <= 150; i = i + 2)
        zygos.push_back(i);
    

    g = recursiveLinearSearch(keyword,zygos,position);
    //cout << g;
    //if (g != 1)
        //cout << "-1";
    
    return 0;

}


