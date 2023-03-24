#include <iostream>
using namespace std;

int arr[20];             //Membuat array dengan panjang data 20
int n;                   //Membuat variable inputan n

void input() {           //Procedure input
    while (true) 
    {
        cout << "Masukan Jumlah Data pada Array : ";      //Membuat inputan jumlah element array
        cin >> n;                                         //Memanggil variable inputan n

        if (n <= 20) {    //Membuat kondisi n tidak lebih dari 20
            break;
        }
        else
        {
            cout << "\nArray yang anda masukkan maksimal 20 elemen.\n";     //Menampilkan pesan jika data lebih dari 20
        }
    }
    cout << endl;                             //Membuat jarak per baris program
    cout << "======================" << endl; //Membuat tampilan susunan data element array
    cout << "Masukkan Element Array" << endl;
    cout << "======================" << endl;


    for (int i = 0; i < n; i++)                   //Menggunakan perulangan for untuk menyimpan data pada array
    {
        cout << "Data ke-" << (i + 1) << ": ";    //Memasukkan atau menginputkan nilai data n
        cin >> arr[i];                            //Memasukkan nilai data n kedalam Array arr
    }
}

void insertionsort() {                  //Procedure insertionsort

    int temp;                           //Membuat variable data temporer atau penyimpanan sementara
    int j;                              //Membuat variable j sebagai penanda

    
}
int main()
{
    
}


