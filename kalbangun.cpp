#include <iostream>
#include <cstdlib>
using namespace std;

class bangundatar
{
	public:
		bangundatar(){cout<<"penghitungan luas,keliling dan volume bangun"<<endl;}
		~bangundatar(){cout<<"class hancur"<<endl;}
		void input()
		{
			int input, input_2, input_3;
			cout<<endl<<"PERSEGI"<<endl;
			cout<<"masukan nilai persegi: "<<endl;
			cin>>input;
			s = input;
			
			cout<<endl<<"BOLA"<<endl;
			cout<<"masukan nilai jari jari bola: "<<endl;
			cin>>input_3;
			r = input_3;
			phi=22/7;
			
			cout<<endl<<"KUBUS"<<endl;
			cout<<"masukan nilai sisi kubus: "<<endl;
			cin>>input_2;
			s2 = input_2;
			
		}
		void proses()
		{
			kel_kub=12*s2;
			vol_kub=s2*s2*s2;
			vol_bol=(4*3.14*r*r*r)/3;
			luas_per= s*s;
			luas_kub=s2*s2*6;
			luas_bol=4*phi*r*r;
			kel_per=4*s;
	
		}
		void output()
		{
			system("cls");
			cout<<"hasil dari perhitunganya"<<endl<<endl;
			
			cout<<"PERSEGI"<<endl<<"Luas="<<luas_per<<endl;
			cout<<"keliling= "<<kel_per<<endl<<endl;
			
			cout<<"BOLA"<<endl<<"Luas="<<luas_bol<<endl;
			cout<<"volume= "<<vol_bol<<endl<<endl;
			
			cout<<"KUBUS"<<endl<<"Luas="<<luas_kub<<endl;
			cout<<"keliling= "<<kel_kub<<endl<<"volume"<<vol_kub<<endl<<endl;
		}
		private :
			
				float phi;
				float luas_per,luas_kub,luas_bol,kel_per,kel_kub,vol_kub,vol_bol;
				int s,s2,r;
			};
		int main()
		{
			bangundatar a;
			a.input();
			a.proses();
			a.output();
			
			system("pause");
			return 0;
		}
