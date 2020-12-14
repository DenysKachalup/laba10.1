#include<iostream>
#include<fstream>

using namespace std;
//void write( char* fname)
//{
//	ofstream t(fname,ios::binary);
//	if (t.fail())
//	{
//		cout << "Error writing to test.txt\n";
//		t.clear();
//	}
//	char a[3][5];
//	for (int i = 0; i < 3; i++)
//		for (int j = 0; j < 5; j++)
//		{
//			cout << i << "  " << j;
//			cin >> a[i][j];
//		}
//	t.write((char*)&a, sizeof(a));
//
//	t.close();
//}
void read( char* fname,int &k)
{
	char str[25];
	ifstream t(fname,ios::in);
	if (t.fail())
	{
		cout << "Error writing to test.txt\n";
		t.clear();
	}
	t.getline(str, sizeof(str));

	cout << "Zchutani elementu: " << str<<endl;
	for (int i = 1; i < strlen(str); i++)
		if (str[i - 1] == ',' && str[i + 1] == '-')
		 k++;
	t.close();


}
int main()
{
	char fname[10];
	cin >> fname;
	//write(fname);
	int k = 0;
	read(fname,k);
	cout<<"Kilkist za umov: " << k<<endl<<endl;
	

}