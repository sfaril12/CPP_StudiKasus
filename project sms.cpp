#include <iostream>

using namespace std;

int main (){
   //ini adalah halaman pembuka untuk operator saaat ini
    cout<< "==========================================="<<endl;
        cout<< "operator SMS with terminal(project ujicoba)"<<endl;
            cout<< "==========================================="<<endl;
        cout<<endl;

//pembuka operator
    cout<< "operator SMS(short message service): "<<endl;
        cout<< " 1. beli pulsa"<<endl;
            cout<< " 2. beli data"<<endl;
                cout<< " 3. cek promo"<<endl;
            cout<< " 4. cek pulsa"<<endl;
        cout<< " 5. cek data"<<endl;
        cout << "6. kata-kata motivasi"<<endl;

    cout<<endl;
    int x;
    cout<< "tekan untuk memilih : "; cin>> x;

//jika tekan 1 maka ingin beli pulsa
        if (x == 1){

            cout<<endl;
    cout<< "==========================================="<<endl;
        cout<< "pilih nominal pulsa yang anda inginkan!\n";
            cout<< "==========================================="<<endl;

        cout<< "   1. 10.000/bulan/12rb"<<endl;
            cout<< "   2. 20.000/bulan/22rb"<<endl;
                cout<< "   3. 50.000/bulan/52rb"<<endl;
            cout<< "   4. 100.000/bulan/102rb"<<endl;
        cout<< "   5. 200.000/bulan/202rb"<<endl;
            cout<<endl;

//untuk pilih nominal pulsa yang di inginkan
            int y;
        cout<< "masukkan nominal yang anda inginkan :";cin>> y;

            if(y == 1){
                string a;
                cout<<endl;
                cout<< "masukkan nomor anda :"; cin>> a;
                cout<<endl;
                   cout<< "==========================================="<<endl;
                        cout<< "menunggu konfirmasi !"<<endl;
                            cout<< "==========================================="<<endl;
                            cout<< endl;
                cout<< "apakah anda ingin membeli pulsa 10.000/bulan/12rb dengan\n";
                cout<< "nomor "<<a<< " silakan konfirmasi ulang!"<<endl;
                int konfirmasi1;
                cout<< "   1. ya"<<endl;
                    cout<< "   2. tidak"<<endl;
                        cout<< "masukkan konfirmasi: "; cin>> konfirmasi1;
                    
                    // konfirmasi pembelian

                    if(konfirmasi1 == 1){
                        cout<<endl;
                        cout<< "selamat anda mendapatkan pulsa 10.000 dengan nomor"<<endl;
                        cout<<a << ". Selamat menikmati pulsa anda!"<<endl;
                    }
                    else if (konfirmasi1 == 2){
                        cout<<endl;
                        cout<< "==========================================="<<endl;
                        cout<< "anda membatalkan pembelian!"<<endl;
                        cout<< "==========================================="<<endl;
                    }
                    else {
                        cout<<endl;
                        cout<< "==========================================="<<endl;
                        cout<< "Inputan Anda tidak valid!"<<endl;
                        cout<< "==========================================="<<endl;
                    }
            }

            //jika tekan dua makan akana beli data

            else if(y == 2){
                string a;
                cout<<endl;
                cout<< "masukkan nomor anda :"; cin>> a;
                cout<<endl;
                   cout<< "==========================================="<<endl;
                        cout<< "menunggu konfirmasi !"<<endl;
                            cout<< "==========================================="<<endl;
                            cout<< endl;
                cout<< "apakah anda ingin membeli pulsa 20.000/bulan/22rb dengan\n";
                cout<< "nomor "<<a<< " silakan konfirmasi ulang!"<<endl;
                int konfirmasi1;
                cout<< "   1. ya"<<endl;
                    cout<< "   2. tidak"<<endl;
                        cout<< "masukkan konfirmasi: "; cin>> konfirmasi1;
                    if(konfirmasi1 == 1){
                        cout<<endl;
                        cout<< "selamat anda mendapatkan pulsa 20.000 dengan nomor"<<endl;
                        cout<<a << ". Selamat menikmati pulsa anda!"<<endl;
                    }
                    else if (konfirmasi1 == 2){
                        cout<<endl;
                        cout<< "==========================================="<<endl;
                        cout<< "anda membatalkan pembelian!"<<endl;
                        cout<< "==========================================="<<endl;
                    }
                    else {
                        cout<<endl;
                        cout<< "==========================================="<<endl;
                        cout<< "Inputan Anda tidak valid!"<<endl;
                        cout<< "==========================================="<<endl;
                    }
            }
            else if(y == 3){
                string a;
                cout<<endl;
                cout<< "masukkan nomor anda :"; cin>> a;
                cout<<endl;
                   cout<< "==========================================="<<endl;
                        cout<< "menunggu konfirmasi !"<<endl;
                            cout<< "==========================================="<<endl;
                            cout<< endl;
                cout<< "apakah anda ingin membeli pulsa 50.000/bulan/52rb dengan\n";
                cout<< "nomor "<<a<< " silakan konfirmasi ulang!"<<endl;
                int konfirmasi1;
                cout<< "   1. ya"<<endl;
                    cout<< "   2. tidak"<<endl;
                        cout<< "masukkan konfirmasi: "; cin>> konfirmasi1;
                    if(konfirmasi1 == 1){
                        cout<<endl;
                        cout<< "selamat anda mendapatkan pulsa 50.000 dengan nomor"<<endl;
                        cout<<a << ". Selamat menikmati pulsa anda!"<<endl;
                    }
                    else if (konfirmasi1 == 2){
                        cout<<endl;
                        cout<< "==========================================="<<endl;
                        cout<< "anda membatalkan pembelian!"<<endl;
                        cout<< "==========================================="<<endl;
                    }
                    else {
                        cout<<endl;
                        cout<< "==========================================="<<endl;
                        cout<< "Inputan Anda tidak valid!"<<endl;
                        cout<< "==========================================="<<endl;
                    }
            }
            else if(y == 4){
                string a;
                cout<<endl;
                cout<< "masukkan nomor anda :"; cin>> a;
                cout<<endl;
                   cout<< "==========================================="<<endl;
                        cout<< "menunggu konfirmasi !"<<endl;
                            cout<< "==========================================="<<endl;
                            cout<< endl;
                cout<< "apakah anda ingin membeli pulsa 100.000/bulan/102rb dengan\n";
                cout<< "nomor "<<a<< " silakan konfirmasi ulang!"<<endl;
                int konfirmasi1;
                cout<< "   1. ya"<<endl;
                    cout<< "   2. tidak"<<endl;
                        cout<< "masukkan konfirmasi: "; cin>> konfirmasi1;
                    if(konfirmasi1 == 1){
                        cout<<endl;
                        cout<< "selamat anda mendapatkan pulsa 100.000 dengan nomor"<<endl;
                        cout<<a << ". Selamat menikmati pulsa anda!"<<endl;
                    }
                    else if (konfirmasi1 == 2){
                        cout<<endl;
                        cout<< "==========================================="<<endl;
                        cout<< "anda membatalkan pembelian!"<<endl;
                        cout<< "==========================================="<<endl;
                    }
                    else {
                        cout<<endl;
                        cout<< "==========================================="<<endl;
                        cout<< "Inputan Anda tidak valid!"<<endl;
                        cout<< "==========================================="<<endl;
                    }
            }
            else if(y == 5){
                string a;
                cout<<endl;
                cout<< "masukkan nomor anda :"; cin>> a;
                cout<<endl;
                   cout<< "==========================================="<<endl;
                        cout<< "menunggu konfirmasi !"<<endl;
                            cout<< "==========================================="<<endl;
                            cout<< endl;
                cout<< "apakah anda ingin membeli pulsa 200.000/bulan/202rb dengan\n";
                cout<< "nomor "<<a<< " silakan konfirmasi ulang!"<<endl;
                int konfirmasi1;
                cout<< "   1. ya"<<endl;
                    cout<< "   2. tidak"<<endl;
                        cout<< "masukkan konfirmasi: "; cin>> konfirmasi1;
                    if(konfirmasi1 == 1){
                        cout<<endl;
                        cout<< "selamat anda mendapatkan pulsa 200.000 dengan nomor"<<endl;
                        cout<<a << ". Selamat menikmati pulsa anda!"<<endl;
                    }
                    else if (konfirmasi1 == 2){
                        cout<<endl;
                        cout<< "==========================================="<<endl;
                        cout<< "anda membatalkan pembelian!"<<endl;
                        cout<< "==========================================="<<endl;
                    }
                    else {
                        cout<<endl;
                        cout<< "==========================================="<<endl;
                        cout<< "Inputan Anda tidak valid!"<<endl;
                        cout<< "==========================================="<<endl;
                    }
            }
            else {
                cout<<endl;
                cout<< "==========================================="<<endl;
                cout<< "imputan anda tidak valid!"<<endl;
                cout<< "==========================================="<<endl;
            }
        }


//jika tekan 2 maka akan membeli paket data

        else if (x == 2){

            int y;
            cout<<endl;
    cout<< "==========================================="<<endl;
        cout<< "pilih nominal paket data yang anda inginkan!\n";
            cout<< "==========================================="<<endl;

        cout<< "   1. 4GB/1 bulan/15rb"<<endl;
            cout<< "   2. 7GB/1 bulan/23rb"<<endl;
                cout<< "   3. 11GB/1 bulan/33rb"<<endl;
            cout<< "   4. 18GB/1 bulan/51rb"<<endl;
        cout<< "   5. 23GB/1 bulan/73rb"<<endl;

            cout<<endl;

//untuk pilih nominal pulsa yang di inginkan

        cout<< "masukkan nominal yang anda inginkan :";cin>> y;

        if(y == 1){
                string a;
                cout<<endl;
                cout<< "masukkan nomor anda :"; cin>> a;
                cout<<endl;
                   cout<< "==========================================="<<endl;
                        cout<< "menunggu konfirmasi !"<<endl;
                            cout<< "==========================================="<<endl;
                            cout<< endl;
                cout<< "apakah anda ingin membeli pulsa 4GB/1 bulan/15rb dengan\n";
                cout<< "nomor "<<a<< " silakan konfirmasi ulang!"<<endl;
                int konfirmasi1;
                cout<< "   1. ya"<<endl;
                    cout<< "   2. tidak"<<endl;
                        cout<< "masukkan konfirmasi: "; cin>> konfirmasi1;

                    //konfirmasi pembelian 

                    if(konfirmasi1 == 1){
                        cout<<endl;
                        cout<< "selamat anda mendapatkan paket data 4GB/bulan dengan nomor"<<endl;
                        cout<<a << ". Selamat menikmati pulsa anda!"<<endl;
                    }
                    else if (konfirmasi1 == 2){
                        cout<<endl;
                        cout<< "==========================================="<<endl;
                        cout<< "anda membatalkan pembelian!"<<endl;
                        cout<< "==========================================="<<endl;
                    }
                    else {
                        cout<<endl;
                        cout<< "==========================================="<<endl;
                        cout<< "imputan anda tidak valid!"<<endl;
                        cout<< "==========================================="<<endl;
                    }

            }
        else if(y == 2){
                string a;
                cout<<endl;
                cout<< "masukkan nomor anda :"; cin>> a;
                cout<<endl;
                   cout<< "==========================================="<<endl;
                        cout<< "menunggu konfirmasi !"<<endl;
                            cout<< "==========================================="<<endl;
                            cout<< endl;
                cout<< "apakah anda ingin membeli pulsa 7GB/1 bulan/23rb dengan\n";
                cout<< "nomor "<<a<< " silakan konfirmasi ulang!"<<endl;
                int konfirmasi1;
                cout<< "   1. ya"<<endl;
                    cout<< "   2. tidak"<<endl;
                        cout<< "masukkan konfirmasi: "; cin>> konfirmasi1;
                    if(konfirmasi1 == 1){
                        cout<<endl;
                        cout<< "selamat anda mendapatkan paket data 7GB/bulan dengan nomor"<<endl;
                        cout<<a << ". Selamat menikmati pulsa anda!"<<endl;
                    }
                    else if (konfirmasi1 == 2){
                        cout<<endl;
                        cout<< "==========================================="<<endl;
                        cout<< "anda membatalkan pembelian!"<<endl;
                        cout<< "==========================================="<<endl;
                    }
                    else {
                        cout<<endl;
                        cout<< "==========================================="<<endl;
                        cout<< "imputan anda tidak valid!"<<endl;
                        cout<< "==========================================="<<endl;
                    }
            }
        else if(y == 3){
                string a;
                cout<<endl;
                cout<< "masukkan nomor anda :"; cin>> a;
                cout<<endl;
                   cout<< "==========================================="<<endl;
                        cout<< "menunggu konfirmasi !"<<endl;
                            cout<< "==========================================="<<endl;
                            cout<< endl;
                cout<< "apakah anda ingin membeli pulsa 11GB/1 bulan/33rb dengan\n";
                cout<< "nomor "<<a<< " silakan konfirmasi ulang!"<<endl;
                int konfirmasi1;
                cout<< "   1. ya"<<endl;
                    cout<< "   2. tidak"<<endl;
                        cout<< "masukkan konfirmasi: "; cin>> konfirmasi1;
                    if(konfirmasi1 == 1){
                        cout<<endl;
                        cout<< "selamat anda mendapatkan paket data 11GB/bulan dengan nomor"<<endl;
                        cout<<a << ". Selamat menikmati pulsa anda!"<<endl;
                    }
                    else if (konfirmasi1 == 2){
                        cout<<endl;
                        cout<< "==========================================="<<endl;
                        cout<< "anda membatalkan pembelian!"<<endl;
                        cout<< "==========================================="<<endl;
                    }
                    else {
                        cout<<endl;
                        cout<< "==========================================="<<endl;
                        cout<< "imputan anda tidak valid!"<<endl;
                        cout<< "==========================================="<<endl;
                    }
            }
        else if(y == 4){
                string a;
                cout<<endl;
                cout<< "masukkan nomor anda :"; cin>> a;
                cout<<endl;
                   cout<< "==========================================="<<endl;
                        cout<< "menunggu konfirmasi !"<<endl;
                            cout<< "==========================================="<<endl;
                            cout<< endl;
                cout<< "apakah anda ingin membeli pulsa 18GB/1 bulan/51rb dengan\n";
                cout<< "nomor "<<a<< " silakan konfirmasi ulang!"<<endl;
                int konfirmasi1;
                cout<< "   1. ya"<<endl;
                    cout<< "   2. tidak"<<endl;
                        cout<< "masukkan konfirmasi: "; cin>> konfirmasi1;
                    if(konfirmasi1 == 1){
                        cout<<endl;
                        cout<< "selamat anda mendapatkan paket data 18GB/bulan dengan nomor"<<endl;
                        cout<<a << ". Selamat menikmati pulsa anda!"<<endl;
                    }
                    else if (konfirmasi1 == 2){
                        cout<<endl;
                        cout<< "==========================================="<<endl;
                        cout<< "anda membatalkan pembelian!"<<endl;
                        cout<< "==========================================="<<endl;
                    }
                    else {
                        cout<<endl;
                        cout<< "==========================================="<<endl;
                        cout<< "imputan anda tidak valid!"<<endl;
                        cout<< "==========================================="<<endl;
                    }
            }
        else if(y == 5){
                string a;
                cout<<endl;
                cout<< "masukkan nomor anda :"; cin>> a;
                cout<<endl;
                   cout<< "==========================================="<<endl;
                        cout<< "menunggu konfirmasi !"<<endl;
                            cout<< "==========================================="<<endl;
                                cout<< endl;
                cout<< "apakah anda ingin membeli pulsa 23GB/1 bulan/73rb dengan\n";
                cout<< "nomor "<<a<< " silakan konfirmasi ulang!"<<endl;
                int konfirmasi1;
                cout<< "   1. ya"<<endl;
                    cout<< "   2. tidak"<<endl;
                        cout<< "masukkan konfirmasi: "; cin>> konfirmasi1;
                    if(konfirmasi1 == 1){
                        cout<<endl;
                        cout<< "selamat anda mendapatkan paket data 23GB/bulan dengan nomor"<<endl;
                        cout<<a << ". Selamat menikmati pulsa anda!"<<endl;
                    }
                    else if (konfirmasi1 == 2){
                        cout<<endl;
                        cout<< "==========================================="<<endl;
                        cout<< "anda membatalkan pembelian!"<<endl;
                        cout<< "==========================================="<<endl;
                    }
                    else {
                        cout<<endl;
                        cout<< "==========================================="<<endl;
                        cout<< "imputan anda tidak valid!"<<endl;
                        cout<< "==========================================="<<endl;
                    }
            }
            else {
                cout<<endl;
                cout<< "==========================================="<<endl;
                cout<< "imputan anda tidak valid!"<<endl;
                cout<< "==========================================="<<endl;
            }
        }
        else if (x == 3){
            cout<< "=================================================================================================================="<<endl;
            cout<< "promo terbesar yang tersedia saat ini!"<<endl;
            cout<< "=================================================================================================================="<<endl;
            cout<<endl;
            cout<< "1. pulsa 100.000/bulan/Rp 53rb promo terbatas(20-25 april)"<<endl;
            cout<< "2. paket nelpon 1 minggu/Rp 10rb promo khusus di bulan april"<<endl;
            cout<< "3. paket data 30GB/bulan/Rp 75rb promo terbatas(april-juli)"<<endl;

//untuk pilih promo yang anda inginkan yang di inginkan
            cout<<endl;
            int y;
        cout<< "pilih promo yang anda inginkan : ";cin>> y;

        if(y == 1){
                string a;
                cout<<endl;
                cout<< "masukkan nomor anda :"; cin>> a;
                cout<<endl;
                   cout<< "==========================================="<<endl;
                        cout<< "menunggu konfirmasi !"<<endl;
                            cout<< "==========================================="<<endl;
                            cout<< endl;
                cout<< "apakah anda yakin ingin membeli promo pulsa 100.000/bulan/53rb dengan\n";
                cout<< "nomor "<<a<< " silakan konfirmasi ulang!"<<endl;
                int konfirmasi1;
                cout<< "   1. ya"<<endl;
                    cout<< "   2. tidak"<<endl;
                        cout<< "masukkan konfirmasi: "; cin>> konfirmasi1;
                    if(konfirmasi1 == 1){
                        cout<<endl;
                        cout<< "selamat anda mendapatkan pulsa 100.000 dengan nomor"<<endl;
                        cout<<a << ". Selamat menikmati pulsa anda!"<<endl;
                    }
                    else if (konfirmasi1 == 2){
                        cout<<endl;
                        cout<< "==========================================="<<endl;
                        cout<< "anda membatalkan pembelian!"<<endl;
                        cout<< "==========================================="<<endl;
                    }
                    else {
                        cout<<endl;
                        cout<< "==========================================="<<endl;
                        cout<< "imputan anda tidak valid!"<<endl;
                        cout<< "==========================================="<<endl;
                    }
            }
        else if(y == 2){
                string a;
                cout<<endl;
                cout<< "masukkan nomor anda :"; cin>> a;
                cout<<endl;
                   cout<< "==========================================="<<endl;
                        cout<< "menunggu konfirmasi !"<<endl;
                            cout<< "==========================================="<<endl;
                            cout<< endl;
                cout<< "apakah anda yakin ingin membeli promo paket nelpon 1 minggu/10rb dengan\n";
                cout<< "nomor "<<a<< " silakan konfirmasi ulang!"<<endl;
                int konfirmasi1;
                cout<< "   1. ya"<<endl;
                    cout<< "   2. tidak"<<endl;
                        cout<< "masukkan konfirmasi: "; cin>> konfirmasi1;
                    if(konfirmasi1 == 1){
                        cout<<endl;
                        cout<< "selamat anda mendapatkan paket nelpon 1 minggu dengan nomor"<<endl;
                        cout<<a << ". Selamat menikmati pulsa anda!"<<endl;
                    }
                    else if (konfirmasi1 == 2){
                        cout<<endl;
                        cout<< "==========================================="<<endl;
                        cout<< "anda membatalkan pembelian!"<<endl;
                        cout<< "==========================================="<<endl;
                    }
                    else {
                        cout<<endl;
                        cout<< "==========================================="<<endl;
                        cout<< "imputan anda tidak valid!"<<endl;
                        cout<< "==========================================="<<endl;
                    }
            }
            else if(y == 3){
                string a;
                cout<<endl;
                cout<< "masukkan nomor anda :"; cin>> a;
                cout<<endl;
                   cout<< "==========================================="<<endl;
                        cout<< "menunggu konfirmasi !"<<endl;
                            cout<< "==========================================="<<endl;
                            cout<< endl;
                cout<< "apakah anda yakin ingin membeli promo paket data 30GB/bulan/75rb dengan\n";
                cout<< "nomor "<<a<< " silakan konfirmasi ulang!"<<endl;
                int konfirmasi1;
                cout<< "   1. ya"<<endl;
                    cout<< "   2. tidak"<<endl;
                        cout<< "masukkan konfirmasi: "; cin>> konfirmasi1;
                    if(konfirmasi1 == 1){
                        cout<<endl;
                        cout<< "selamat anda mendapatkan paket data 30GB/bulan dengan nomor"<<endl;
                        cout<<a << ". Selamat menikmati pulsa anda!"<<endl;
                    }
                    else if (konfirmasi1 == 2){
                        cout<<endl;
                        cout<< "==========================================="<<endl;
                        cout<< "anda membatalkan pembelian!"<<endl;
                        cout<< "==========================================="<<endl;
                    }
                    else {
                        cout<<endl;
                        cout<< "==========================================="<<endl;
                        cout<< "imputan anda tidak valid!"<<endl;
                        cout<< "==========================================="<<endl;
                    }
            }
             else {
                cout<<endl;
                cout<< "==========================================="<<endl;
                cout<< "imputan anda tidak valid!"<<endl;
                cout<< "==========================================="<<endl;
            }
        }
        else if (x == 4){
            cout<<endl;
            cout<< "pelanggan yang terhormat sisa pulsa anda Rp.0 rupiah berlaku"<<endl;
            cout<< "dari 31 oktober s.d 1 desember, silakan melakukan pengisian ulang!"<<endl;
        }
        else if (x == 5){
            cout<<endl;
            cout<< "pelanggan yang terhormat, paket data nasional anda Rp.0 rupiah "<<endl;
            cout<< "berlaku dari 31 oktober s.d 1 desember"<<endl;
            cout<<endl;
            cout<< "adapun paket kuota belajar anda Rp.0 rupiah berlaku"<<endl;
            cout<< "dari 31 oktober s.d 1 desember, silakan lakukan pengisian ulang"<<endl;
        }
        else if (x == 6){
            cout << "jangan patah semangat. kamu pasti bisa cuman kamu kurang semangat aja"<<endl;
            
        }
        else {
            cout<<endl;
            cout<< "==========================================="<<endl;
            cout<< "imputan anda tidak valid!"<<endl;
            cout<< "==========================================="<<endl;
        }
        

}
