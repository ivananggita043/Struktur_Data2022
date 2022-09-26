#include<iostream>
#include<conio.h>

using namespace std;

struct paket
{
    char jenis_brg[30];
    int berat;
    char kota[30];
};

struct paket kirim[100];

/*******************************************/


void tambahdata(int x)
{
    cout<<"Inputkan Jenis Barang    : ";
    cin>>kirim[x].jenis_brg;
    cout<<"Inputkan Berat           : ";
    cin>>kirim[x].berat;
    cout<<"Inputkan Kota Tujuan     : ";
    cin>>kirim[x].kota;

    cout<<"Press Any Key...";
    getch();
    cout<<endl<<endl;
}

void hapusdata(int x)
{
    cout<<"Data Terakhir yang anda Hapus Adalah :"<<endl;
    cout<<kirim[x].jenis_brg<<" ";
    cout<<kirim[x].berat<<"Kg ";
    cout<<kirim[x].kota<<endl<<endl;

    cout<<"Press Any Key...";
    getch();
    cout<<endl<<endl;

}

void tampildata(int x)
{
    cout<<"Daftar Kiriman Paket"<<endl;
    if(x==1){
        cout << "Data kosong" << endl;
    }
    else if(x>1)
    {
        for(int a=1; a<x; a++)
            {
                cout<<a<<" ";
                cout<<kirim[a].jenis_brg<<" ";
                cout<<kirim[a].berat<<"Kg ";
                cout<<kirim[a].kota<<endl;
            }
    }

    cout<<"Press Any Key...";
    getch();
    cout<<endl<<endl;
    /*harus Ijin --> #include<conio.h>*/
}

void maxBrt(int x)
{
    int maxBerat = 0;
    string namaPkt,tujuan;
    for(int i=0;i<x;i++){
        if(maxBerat < kirim[i].berat)
            maxBerat = kirim[i].berat;
            namaPkt = kirim[i].jenis_brg;
            tujuan = kirim[i].kota;
    }
    cout << "Paket Terberat Seberat "
        <<maxBerat<<"Kg Berupa "
        <<namaPkt<<" Menuju ke "
        <<tujuan<<endl;

    cout<<"Press Any Key...";
    getch();
    cout<<endl<<endl;
}

void cariBrg(int x)
{
    string
    dicari,
    barang,
    ketemu,
    tujuan;
    int ket = 0,berat = 0;

    cout << "Cari Barang ";
    cin>>dicari;
    for(int i=0;i<x;i++){
        barang = kirim[i].jenis_brg;
        if(dicari == barang){
            ketemu = dicari;
            tujuan = kirim[i].kota;
            berat = berat + kirim[i].berat;
            ket++;
            break;
        }
    }

    if(ket > 0)
    {
        cout<<ket << " Paket "<<ketemu<<" ketemu dengan berat "
        << berat << "Kg Dengan Tujuan "
        << tujuan<<endl;
    }
    else
        cout << "Barang Tidak Ketemu"<<endl;


    cout<<"Press Any Key...";
    getch();
    cout<<endl<<endl;
}

int main()
{
    int pilih;
    int datake=1;
    do
    {
        cout<<"MENU UTAMA" << endl;
        cout<<"1. Tambah Data"<< endl;;
        cout<<"2. Hapus Data Terakhir"<<endl;
        cout<<"3. Tampil Data"<<endl;
        cout<<"4. Kosongkan Data"<<endl;
        cout<<"5. Max Berat"<<endl;
        cout<<"6. Cari Barang(Nama)"<<endl;

        cout<<"9. Keluar"<<endl;

        cout<<"Pilihan Anda [1-9] : ";
        cin>>pilih;
        if(pilih==1)//Menambah data baru diletakan di datake
            {
                tambahdata(datake);
                datake++;
            }
        if(pilih==2)//Menghapus Data Terakhir (datake-1)
            {
                hapusdata(datake-1);
                datake--;
            }
        if(pilih==3) //Menampilkan Semua Data yang Ada
            {

                tampildata(datake);
            }
        if(pilih==4) //Menghapus Seluruh Data
            {
                datake= 1;
                cout << "Data berhasil dikosongkan " << endl;
            }
        if(pilih==5)
            {
               maxBrt(datake);
            }
        if(pilih==6)
            {
                cariBrg(datake);
            }

    }
    while(pilih!=9);
    return 0;
}
