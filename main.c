/*
 Given an input string (s) and a pattern (p), implement wildcard pattern matching with support for '?' and '*' where:

    '?' Matches any single character.
    '*' Matches any sequence of characters (including the empty sequence).

The matching should cover the entire input string (not partial).

Example 1:

Input: s = "aa", p = "a"
Output: false
Explanation: "a" does not match the entire string "aa".

Example 2:

Input: s = "aa", p = "*"
Output: true
Explanation: '*' matches any sequence.

Example 3:

Input: s = "cb", p = "?a"
Output: false
Explanation: '?' matches 'c', but the second letter is 'a', which does not match 'b'.

 * */


#include <stdio.h>
#include <stdbool.h>

bool is_match(char* s, char* p){
    int count = 0;
    for(int i = 0; i < 2; i++){
	if(p[i] == '*'){
	    return true;
	}
	if(s[i] == p[i] || p[i] == '?'){
	    count++;
	}
    }
    if(count == 2){
	return true;
    }
    else{
	return false;
    }
}


int main(){
    char* s = "aa";
    char* p;

    printf("guess: ");
    fgets(p, 5, stdin);

    if(is_match(s, p) == true){
	printf("true");
    }
    else{
	printf("false");
    }

    return 0;
}
