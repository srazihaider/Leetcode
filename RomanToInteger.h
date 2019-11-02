#include<iostream>
#include<string>
#define one 'I'
#define five 'V'
#define ten 'X'
#define fifty 'L'
#define hundred 'C'
#define five_hundred 'D'
#define thousand 'M'



class Solution {
public:
    int romanToInt(std::string s) {
        
         int sum =0;
        for(int i =0; i<s.size()-1;i++)
        {
        
        if(oneOnoneTranslator(s[i])>=oneOnoneTranslator(s[i+1]))
        sum = sum + oneOnoneTranslator(s[i]);
        else
        {
           sum = sum - oneOnoneTranslator(s[i]);
        }
        
        }
        sum= sum+oneOnoneTranslator(s[s.size()-1]);
        return sum;
        
    }
    
    
    int oneOnoneTranslator(char mychar)
    {
        switch (mychar)
        {
        case one:
            return 1;
            break;
        case five: 
            return 5;
            break;
         case ten:
            return 10;
            break;
        case fifty: 
            return 50;
            break;
        case hundred:
            return 100;
            break;
        case five_hundred:
            return 500;
            break;
        case thousand:
            return 1000;
            break;
        default:
            std::cout<< "no roman equilent found"<<std::endl;
            std::exit (EXIT_FAILURE);
            break;

        }
    }
};
