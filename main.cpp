#include <iostream>
using namespace std;

class studikasus
{
private:
 string jurusan[20];
 int n,a[20][20],total,rata,max,min, barisMin=0,kolomMin=0, barisMax=0, kolomMax=0;

public:
  void input();
  void proses();
  void output();
};

void studikasus::input()
{
  cout << "= = = = = PROGRAM MENCETAK BANYAK LULUSAN = = = = =" << endl << endl;
  cout<<"MASUKKAN 3 JURUSAN :"<<endl<<endl;
  for(int k = 1; k <=3; k++){
    			cout <<"masukkan jurusan ke-"<<k<<" : ";
    			cin >> jurusan[k];
			}
  cout<<"\nmasukan banyak angkatan lulusan : ";
  cin>>n;
  for (int i=1; i<=n; i++){
    cout<<"Angkatan ke-"<<i<<endl;
    for (int j=1; j<=3; j++){
      cout <<jurusan[j]<<" : ";
    	cin >>a[i][j];
    }
    cout<<endl;
  }
  cout<<endl;
}

void studikasus:: proses(){
  total=0;
	for(int i = 1; i <=n ; i++){
    	for(int j = 1; j <=3; j++){
    		total += a[i][j];
	}
	rata=total/(n*3);
	}
  
	max=a[0][0];
	for(int i = 1; i <=n ; i++){
    	for(int j = 1; j <=3; j++){
    		if(a[i][j] > max){
    			max=a[i][j];
          barisMax=i;
          kolomMax=j;
			  }else if(a[i][j] < min){
    			min=a[i][j];
          barisMin=i;
          kolomMin=j;
		  }
		}
	}
}

void studikasus::output(){
  cout << "Tampil Data Lulus" <<endl<<endl;
  cout<<"\t\t "<<jurusan[1]<<" "<<jurusan[2]<<" "<<jurusan[3]<<" "<<endl;
  for(int i=1; i<=n; i++){
    cout<<"Th ke-"<<i<<"  ";
    for(int j=1; j<=3; j++){
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<"\nJumlah yang lulus    = "<<total<<endl;
  cout<<"Lulus terbesar       = "<<max<<" (pada baris "<<barisMax<<" kolom "<<kolomMax<<")"<<endl;
  cout<<"Lulus terkecil       = "<<min<<" (pada baris "<<barisMin<<" kolom "<<kolomMin<<")"<<endl;
  cout<<"Rata-rata yang lulus = "<<rata<<endl;
}

int main(){
  studikasus data;
  data.input();
  data.proses();
  data.output();
}