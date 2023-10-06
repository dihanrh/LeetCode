//https://leetcode.com/problems/next-greater-element-iii/description/
//Next Greater Element III

class Solution {
public:
    int nextGreaterElement(int n) {

     string s = to_string(n);
     int num = stoi(s);
     bool flag = false;
     int ns = s.size();
     int pos = 0;
     
     for(int i = ns - 1 ; i > 0; i--)
     {
        if(s[i] > s[i-1])
        {
           pos = i-1;
           flag = true;
           break ;
        }
       
     }
     
  if (flag)
  {
   char posIdx = s[pos];
   char nextToPos;
   int nextToPosIdx;
   sort (s.begin()+pos, s.end());
   
   for(int i =  pos; i < ns; i++)
   {
   	if(s[i] > posIdx)
   	{
   		nextToPos = s[i];
   		nextToPosIdx = i;
   		break;
   	}
   }
   
   swap(s[pos],s[nextToPosIdx]);
  	
   sort(s.begin()+pos+1, s.end());
    
    try
    {
       num = stoi(s);
    }
    catch(const std::out_of_range& e)
    {
       num = -1;
    }
  }
else 
{
	num = -1;
}

 return num;
   
 }
};