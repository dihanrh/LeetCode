// Source: https://usaco.guide/general/io
// https://leetcode.com/problems/valid-sudoku
// its 25/spet/2022 and I am feeling happy ...bcz a new member has joined in  the familly ... 
#include <bits/stdc++.h>
using namespace std;

int main() {



	
	vector<vector<int>> board {{8,2,7,1,5,4,3,9,6} ,{9,6,5,3,2,7,1,4,8} ,{3,4,1,6,8,9,7,5,2} ,{5,9,3,4,6,8,2,7,1} ,{4,7,2,5,1,3,6,8,9} ,{6,1,8,9,7,2,4,3,5} ,{7,8,6,2,3,5,9,1,4} ,{1,5,4,7,9,6,8,2,3} , {2,3,9,8,4,1,5,6,7}  } ;
	
    for ( int i = 0  ; i < board.size() ; i ++)
    {
        for ( int j = 0 ; j < board[i].size() ; j ++)
        {
            cout << board[i][j] << " "  ; 
        }
        cout << endl ;
    }
        
        for ( int i  = 0 ;  i < board.size() ; i ++)
        {
            int cntRow = 0 ;
            int cntCol = 0 ;
            set <int> stRow ; 
            set <int> stCol ;

            for ( int j = 0  ; j < board[i].size() ; j ++)
            {
                if(board[i][j] != '.')
                {
                    stRow.insert(board[i][j]) ; 
                    cntRow ++  ;
                    
                }
                if (board[j][i] !=  '.')
                {
                    stCol.insert(board[j][i]) ;
                    cntCol ++ ;
                    
                }
                
            }
            if (stRow.size() != cntRow )
            {
               
               //cout << "false" << endl ;
            }
            else 
            {
                //cout << "true" << endl ;
            }
            if (stCol.size() != cntCol)
            {
               // cout << "false" << endl ;
            }
             else 
            {
                //cout << "true" << endl ;
            }
        }

        
        

		for ( int  x = 0 ; x < 9 ; x += 3)
        {
            for ( int y  = 0 ; y < 9 ; y += 3)
            {
               
                set < int > inner_set  ;
                int inner_cnt = 0  ;

                for ( int i = x  ; i < x+3 ; i ++)
                {
                    
                    for ( int j = 0 ; j < y+3 ; j ++)
                    {
                        if ( board[i][j] != '.')
                        {
                            inner_set.insert(board[i][j]) ;
                            inner_cnt ++ ;
                            cout << board[i][j]  << " " ;
                            
                        }
                    }
                    cout  << endl ; 
   
                }
                 if (inner_set.size() != inner_cnt ) 
                    {
                        // false 
                    }
                
                
            }
        }
        
}
