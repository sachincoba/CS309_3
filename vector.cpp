#include<iostream>
#include<vector> 
#include<algorithm>//for begin and copy
#include<iterator>//for back insertor 
using namespace std;
  
int main()
{
	vector <int > g1;
	
	vector <int> :: iterator i;
	vector <int> :: reverse_iterator ir;
	for (int i = 0; i <= 5; ++i)
	{
		 g.push_back(i*i);//end elements in end
	}
	for ( i = g.begin(); i != g.end() ; ++i)
	{
		cout << *i << " ";
	}
	vector <int > g2(g1);// also copying array
	
	g1=g2;//copying complete array
	
	copy(g1.begin(),g1.end(),back_insertor(g2));
	//back insertor for adding from back
	
	g2.assign(g1.begin(),g1.end());//also copying 

	int n=A.size()
  	pair<int,int> p[n];
  	for (int i = 0; i < n; i++)  
    { 
        pairt[i].first = a[i]; 
        pairt[i].second = b[i]; 
    } 
    sort(pairt, pairt + n); 
    reverse(g1.begin(), g1.end());//reverse the whlole array
    
}