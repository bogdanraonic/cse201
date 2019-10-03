#include <iostream>
#include <string>

int main()
{
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    if (s.length() == n)
    {
        bool b = true;
	for(int i=0;i<n/2;i++)
	    {
		b = b && (s[i]==s[n-1-i]);
            }
	if (b)
	{
	    std::cout << "True" << std::endl;
	}
	else
	{
	    std::cout << "False" << std::endl;	
	}
        return b;
    }
    else
    {	
	std::cout << "False" << std::endl;
        return false;
    }

    std::cout << " I CHANGED THIS => Second time " <<std::endl;
	
    return 0;
}

