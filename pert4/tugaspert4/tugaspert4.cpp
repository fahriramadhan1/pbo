 #include <iostream>
 using namespace std;

 class umur{
     private :
     int a , b;
     public :
     void assign(int tahun_lahir_anda, int tahun_saat_ini){
         a = tahun_lahir_anda;
         b = tahun_saat_ini;
     }
     int usia(){
         return a-b;
     }
 };

int main (){
    umur obj;
    obj.assign ( 2021,1990 );
    cout<<"berarti usia kalian sekarang adalah   = " <<obj.usia ()<<"tahun"<<endl;
    return 0;
}