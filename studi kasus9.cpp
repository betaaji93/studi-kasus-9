
#include<iostream>
using namespace std;

class Dua{
	public :
		void input();
		void tampil();
		void rubah();
	private :
		int baris,kolom,b,k,i,z,j,a,data,data1;
			string pertama[10][10];
			string pertama2[10][10];
			string pertama3[10][10];
			string satudi[20];
			string satudi2[20];
			string satudi3[20];
};

void Dua::input(){
	cout<<"masukkan bnyak data : ";
	cin>>data1;
	data=data1*2;
	cout<<"kesehatan\n";
	for(b=0;b<data;b++){
			if(b%2==0){
			cout<<"id karyawan ke "<<b+1<<" = ";
			cin>>satudi[b];
			}
			else{
			cout<<"nama karyawan ke "<<b<<" = ";
			cin>>satudi[b];
			}
		}
	cout<<"teknologi\n";
	for(b=0;b<data;b++){
			if(b%2==0){
			cout<<"id karyawan ke "<<b+1<<" = ";
			cin>>satudi2[b];
			}
			else{
			cout<<"nama karyawan ke "<<b<<" = ";
			cin>>satudi2[b];
			}
		}
	cout<<"pangan\n";
	for(b=0;b<data;b++){
			if(b%2==0){
			cout<<"id karyawan ke "<<b+1<<" = ";
			cin>>satudi3[b];
			}
			else{
			cout<<"nama karyawan ke "<<b<<" = ";
			cin>>satudi3[b];
			}
		}
}


	
void Dua::rubah(){
	cout<<"masukkan baris : ";
	cin>>baris;
	cout<<"masukkan kolom : ";
	cin>>kolom;
	

	int z =0;
	cout<<"\nkesehatan :\n";
	for(b=0;b<baris;b++){
		for(k=0;k<kolom;k++){
			pertama[b][k]=satudi[z];	
			cout<<"\t\t|\t"<<pertama[b][k]<<"\t";
			z++;
		}
		
		cout<<endl;
	}
	int x=0;
	cout<<"\nkesehatan :\n";
	for(b=0;b<baris;b++){
		for(k=0;k<kolom;k++){
			pertama2[b][k]=satudi2[x];
			cout<<pertama2[b][k]<<" ";
			x++;
		}
		cout<<endl;
	}
	int c=0;
	cout<<"\nkesehatan :\n";
	for(b=0;b<baris;b++){
		for(k=0;k<kolom;k++){
			pertama3[b][k]=satudi3[c];
			cout<<pertama3[b][k]<<" ";
			c++;
		}
		cout<<endl;
	}
}
void Dua::tampil()
{
	int z =0;
	int x=0;
	int c=0;
	
	cout << "Departemen\t\tId Karyawan\t\tNama" << endl;
	cout << "Kesehatan " << endl;
	for(b=0;b<baris;b++){
		for(k=0;k<kolom;k++){
			cout<<"\t\t"<<pertama[b][k]<<"\t\t"<<" ";
			z++;
		}
		cout<<endl;
	}
	cout << "Teknologi ";
	for(b=0;b<baris;b++){
		for(k=0;k<kolom;k++){
			cout<<"\t\t"<<pertama2[b][k]<<"\t\t"<<" ";
			x++;
		}
		cout<<endl;
	}
	cout << "Pangan ";
	for(b=0;b<baris;b++){
		for(k=0;k<kolom;k++){
			cout<<pertama3[b][k]<<" ";
			c++;
		}
		cout<<endl;
	}
}
int main(){
	Dua x;
	x.input();
	x.rubah();
	x.tampil();
}
