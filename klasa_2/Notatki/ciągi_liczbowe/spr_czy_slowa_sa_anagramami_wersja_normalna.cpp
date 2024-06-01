#include <iostream>
#include <cmath>
#include <algorithm>
//Micha³ Kossakowski 2E
using namespace std;
int tab1[27];
int tab2[27];
int tab3[27];
int tab4[27];
int tab5[27];
bool anagram(string s1, string s2, string s3, string s4, string s5){

	if( s1.size()!=s2.size() && s1.size()!=s3.size() && s1.size()!=s4.size() && s1.size()!=s5.size() ) {
	return false;
	return 0;
}
for(int i=0;i<s1.size();i++){
	tab1[s1[i]-64]++;
	tab2[s2[i]-64]++;
	tab3[s3[i]-64]++;
	tab4[s4[i]-64]++;
	tab5[s5[i]-64]++;
}
for(int i=0;i<27;i++){
	if(tab1[i]!=tab2[i] && tab1[i]!=tab3[i] && tab1[i]!=tab4[i] && tab1[i]!=tab5[i] ){
	return false;
	}
}
return true;

}
int main(){
string s1="",s2="",s3="",s4="",s5="";
while(cin>>s1>>s2>>s3>>s4>>s5){

if(anagram(s1,s2,s3,s4,s5)==true){
		cout<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<" "<<s5<<endl;
}

}



return 0;
}

