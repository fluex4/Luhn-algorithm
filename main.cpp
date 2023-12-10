#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool checkLuhn(const string& num){
	int sum = 0, SndNum = false;
	for (int i = num.length() - 1; i >= 0; i--){
		int d = num[i] - '0';
		if (SndNum == true)
			d = d * 2;
		sum += d / 10;
		sum += d % 10;
		SndNum = !SndNum;
	}
	return (sum % 10 == 0);
}

int main()
{
    string num;
    cout<<"enter card number: ";
    cin>>num;
	if (checkLuhn(num))
		printf("This is a valid card");
	else
		printf("This is not a valid card");
	return 0;
}
