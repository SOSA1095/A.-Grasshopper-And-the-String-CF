#include <iostream>

using namespace std;

int main()
{
    string s;
    int minaux=0,cont=1;
    cin >> s;
    for(int iA=0; iA<s.length();iA++){
        if(s[iA]=='A'||s[iA]=='E'||s[iA]=='I'||s[iA]=='O'||s[iA]=='U'||s[iA]=='Y'){
            if(cont>minaux){
                minaux=cont;
                cont = 1;
            }else{
                cont = 1;
            }
        }else{
            cont++;
        }
    }
    if(minaux<cont){
        minaux = cont;
    }
    cout << minaux << endl;
    return 0;
}
