#include <iostream>
using namespace std;
    /*pada tugas pertemuan 2 kita ditugaskan untuk membuat program dan juga menganalisanya
    Pada hasil screenshoot tersebut menurut saya pada hasil output program tersebut
    digunakan untuk mengehatui berapa umur kita pada tahun ini.
    pada program ini agar sesuai dengan output yang ada pada hasil screenshoot  maka agar sesuai dengan output dari program tersebut
    maka saya akan melakukanya dengan cara memasukan tahun pada saat ini dan juga tahun kelahiran agar digunakan secara berkelanjutan ataupun dengan tahun yang lain
    misal 1945-2021
    tapi pada proses inputnya saya akan memasukan tahun pada saat ini dan tahun kelahiran 2000
    */
    


int main (){  int tahun, tahun_kelahiran, umur; //deklarasi variabel tahun, umur, serta tahun kelahiran yang saya gabungkan menjadi 1

cout<<"Masukan Tahun               "; cin>>tahun; //pada line 16 akan muncul text dan menanyakan tahun ini tahun berapa, setelah itu tekan enter
cout<<"Masukan Tahun Kelahiran anda"; cin>>tahun_kelahiran; //pada line 17 sama seperti line 16 akan muncul  text dan menanyakan tahun kelahiran anda, setelah itu tekan enter
umur=tahun-tahun_kelahiran; /*pada line 18 bertujuan untuk menghitung berapa umur yang ditanyakan dengan cara mengurangi tahun pada saat ini serta tahun kelahiranya. pada line ini kedua inpu tersebut 
                                dikurangi agar menunjukan berapa umur kita  */
cout<<"Hasil Umur  yang anda tanyakan adalah :"   ;cout<< umur <<endl;

return 0; // end of the program 



}