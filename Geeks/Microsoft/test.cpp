// C++ program for implementation of KMP pattern searching
// algorithm
#include<iostream>
#include<string>
using namespace std;



// Fills lps[] for given patttern pat[0..M-1]
void computeLPSArray(string pat, int M)
{
    int lps[M];
	// length of the previous longest prefix suffix
	int len = 0;

	lps[0] = 0; // lps[0] is always 0

	// the loop calculates lps[i] for i = 1 to M-1
	int i = 1;
	while (i < M)
	{
		if (pat[i] == pat[len])
		{
			len++;
			lps[i] = len;
			i++;
		}
		else // (pat[i] != pat[len])
		{
			// This is tricky. Consider the example.
			// AAACAAAA and i = 7. The idea is similar 
			// to search step.
			if (len != 0)
			{
				len = lps[len-1];

				// Also, note that we do not increment
				// i here
			}
			else // if (len == 0)
			{
				lps[i] = 0;
				i++;
			}
		}
	}
	
	for(int i = 0 ; i < M ; i ++)
	{
	    cout << lps[i] << endl;
	}
	
}

// Driver program to test above function
int main()
{
	string txt = "ABABDABACDABABCABAB";
	int len = txt.length();
// 	char *pat = "ABABCABAB";
// 	KMPSearch(pat, txt);
computeLPSArray(txt,len);
cout<<"DONE";
	return 0;
}
