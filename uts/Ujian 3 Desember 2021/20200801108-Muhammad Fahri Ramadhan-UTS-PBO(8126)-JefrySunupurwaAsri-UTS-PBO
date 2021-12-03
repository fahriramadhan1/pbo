 //Muhammad Fahri Ramadhan - 20200801108
//PBO 3-DESEMBER-2021
//Membuat Program : Polindrom adalah sebuah kata atau angka maupun susunan lainnya yang dapat dibaca dengan sama baik dari depan maupun belakang
//buatlah
// A. Menu 1 Penentuan Angka Polindrom atau tidak
// B. Menu 2 penentuan kata polindrom atau tidak
// C. Menu 3 FizzBuzz

#include <iostream>


using namespace std;

int main (){
	bool palindrome = true;
	string kata;
    int x, i, y, xy, bilangan,rev=0,angka;
    cout<<"============================================================================================="<<endl;
	cout<<"Menu"<<endl;
	cout<<"1. Penentuan Angka Polindrom atau tidak"<<endl<<"2. Penentuan kata polindrom atau tidak"<<endl;
	cout<<"3. Fizbuzz"<<endl;
	cout<<"============================================================================================="<<endl;

	int pilih;
	
	cout<<"Masukan Input anda (Ketik Pilihan dengan memilih angka sesuai pada urutan)"<<endl;
	cin>>pilih;
	
	switch(pilih){
		case 1: 
		cout<<"Masukan Nomor anda ";
		cin>>angka;
		xy=angka;
		do{
			bilangan=angka%10;
			rev=(rev*10)+bilangan;
			angka=angka/10;
			
		}while (angka !=0 );
		cout<<"Angka yang telah dinput dan sudah dibalik : "<<rev<<endl;
		if(xy==rev)
		cout<<"angka tersebut polindrom "<<endl;
		else
		cout<<"angka tersebut bukanlah polindrom "<<endl;
		break;
		case 2:
cout << "Input Kata : ";
   cin>>kata;
    x = kata.length();

    for(i = 0; i < x; i++){
        if(kata[i] != kata[x-i-1])
        {
            palindrome = false;
            break;
        }
    }

    cout << "Result : ";
    if(palindrome == true)
        cout << "kata tersebut adalah Palindrom";
    else
        cout << "kata tersebut bukanlah Palindrom";

    cin.ignore();
    break;
    case 3: 
     for(int i = 1; i <= 50; i++){
 	if(i % 3 == 0 && i % 5 == 0) {
 	cout << "FizzBuzz" << endl;
	 } else if(i % 3 == 0) {
 	cout << "Fizz" << endl;
 	} else if(i % 5 == 0) {
 	cout << "Buzz" << endl;
 	} else {
 	cout << i << endl;
 }
 }
  
    return 0;
}
}
	
	



