#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
void getInitials(const string& name)
{
    if(name.length() == 0)
    {
        return;
    }
    cout<<(char)toupper(name[0]); //Typecasting
    for(int i=1; i < name.length() - 1; i++)
    {
        if(name[i] == ' ')
        {
            cout<<" "<<(char)toupper(name[i+1]);
        }
    }
}
int main()
{
    string name = "Mohammad Hisham Mir";
    //cout<<"Enter your full name : \n";
    //gets(name);
    getInitials(name);
    return 0;
}
/*
// C++ program to print initials of a name
#include <bits/stdc++.h>
using namespace std;

void printInitials(const string& name)
{
	if (name.length() == 0)
		return;

	// Since touuper() returns int, we do typecasting
	cout << (char)toupper(name[0]);

	// Traverse rest of the string and print the
	// characters after spaces.
	for (int i = 1; i < name.length() - 1; i++)
		if (name[i] == ' ')
			cout << " " << (char)toupper(name[i + 1]);
}

// Driver code
int main()
{
	string name = "prabhat kumar singh";
	printInitials(name);
	return 0;
}
*/

