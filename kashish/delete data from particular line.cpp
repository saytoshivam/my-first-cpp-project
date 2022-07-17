#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() 
{
    int counter = 0;
    string my_string;
    int change = 000;
    ifstream file ( "points.txt" );

    while(!file.eof())
    {
        counter = counter + 1;
        getline(file, my_string, '\n');
        if (my_string == "ghi") 
        {
            ofstream ofile ( "points.txt" );
            for (int i = 0; i < counter + 1; i++)
            {
                //reached line required i.e. 789
                //how to process here?
            }
            ofile.close();
            break;
        }
    }
    cout << counter << endl;
    file.close();
    return 0;
}
