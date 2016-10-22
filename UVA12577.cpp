#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
	int i,j,n;
	string A="Hajj-e-Akbar";
	string B="Hajj-e-Asghar";
	string C;

    for(i=1; i>0; i++){

	cin>>C;
     	if (C[0] == 'H'){
		cout<<"Case "<<i<<": "<<A<<endl;
        }

	if (C[0] == 'U'){
		cout<<"Case "<<i<<": "<<B<<endl;

        }
	if (C[0] == '*')
		break;
    }
	return 0;
}
