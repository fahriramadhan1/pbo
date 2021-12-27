#include <iostream>

using namespace std;

int main()

{
	cout<<"Muhammad Fahri Ramadhan 20200801108"<<endl;
	cout<<"PBO 12"<<endl;
	cout<<"\n"<<endl;
     long harga_barang=0;
     char KodeBaju, size;
     string Brand_Pakaian;

     cout<<"Program Untuk mengecek  data data baju"<<endl;

     cout<<"Masukkan Kode Baju   : ";
     cin>>KodeBaju;

     cout<<"Masukkan size Baju : ";
     cin>>size;

     if(KodeBaju=='1'){
          Brand_Pakaian="IMP";
          if(size=='s'){
               harga_barang=200000;
          }
          else if(size=='m'){
               harga_barang=220000;
          }
          else{
               harga_barang=250000;
          }
     }
     else if(KodeBaju=='2'){
          Brand_Pakaian="Prada";
          if(size=='s'  ){
               harga_barang=150000;
          }
          else if(size=='m'  ){
               harga_barang=160000;
          }
          else{
               harga_barang=170000;
          }
     }
     else if(KodeBaju=='3'){
          Brand_Pakaian="Gucci";
          if(size=='s'  ){
               harga_barang=200000;
          }
          else if(size=='m'  ){
               harga_barang=200000;
          }
          else{
               harga_barang=200000;
          }
     }
     else if(KodeBaju=='4'){
          Brand_Pakaian="Louis Vuitton";
          if(size=='s'  ){
               harga_barang=300000;
          }
          else if(size=='m'  ){
               harga_barang=300000;
          }
          else{
               harga_barang=350000;
          }
     }
     else if(KodeBaju=='5'){
          Brand_Pakaian="Kick Denim";
          if(size=='s' ){
               harga_barang=100000;
          }
          else if(size=='m'  ){
               harga_barang=120000;
          }
          else{
               harga_barang=130000;
          }
     }
     else{
          Brand_Pakaian="Error";
          cout<<"\nKode yang anda masukan salah silahkan coba lagi";
     }

     cout<<"\n\nBrand  = "<<Brand_Pakaian;
     cout<<"\nUkuran Baju = "<<size;
     cout<<"\nHarga Baju  = "<<harga_barang;
     
    
     return 0;
}
