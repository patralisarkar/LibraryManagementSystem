#include<iostream>
#include<vector>
#include"admin_database.h"

using namespace std;

int main()
{
    char a[100];
    strcpy(a,"pratyay");

    admin_database db;
    vector<admin> info=db.searchbyName(a);
    for(int i=0;i<info.size();i++)
    {
        info[i].display();
    }

}