# ExiroEasy_Pin Library

![ExiroEasy_Pin Logo](link_to_your_logo_image) <!-- Ganti dengan URL logo jika ada -->

## Deskripsi
ExiroEasy_Pin adalah library Arduino yang dirancang untuk memudahkan pengendalian pin dengan cara yang dinamis dan fleksibel. Library ini cocok untuk berbagai proyek IoT dan elektronik, memungkinkan kamu untuk menghidupkan dan mematikan pin dengan opsi tambahan.

## Fitur
- **Pengendalian Pin Mudah**: Menghidupkan dan mematikan pin dengan satu baris kode.
- **Dukungan Durasi**: Menghidupkan pin untuk waktu tertentu.
- **Aksi Tambahan**: Menambahkan fungsi tambahan dengan parameter opsional.

## Instalasi
1. **Unduh Library**: Salin folder `ExiroEasy_Pin` ke dalam direktori `libraries` Arduino.
2. **Restart IDE**: Tutup dan buka kembali Arduino IDE agar library dapat terdeteksi.
3. **Sertakan Library**: Dalam sketch, tambahkan:
   ```cpp
   #include <ExiroEasy_Pin.h>
   ```

## Contoh Penggunaan
Berikut adalah contoh cara menggunakan library ini dalam sketch Arduino:

```cpp
#include <ExiroEasy_Pin.h>

ExiroEasy_Pin myPin;

void setup() {
  myPin.on(13, 5);        // Menghidupkan pin 13 selama 5 detik
}

void loop() {
  // Logika tambahan
}
```

## Dokumentasi
Untuk informasi lebih lanjut, silakan lihat dokumentasi di [Wiki](link_to_your_wiki) atau berkunjung ke [Website](link_to_your_website).

## Lisensi
Library ini dilisensikan di bawah [MIT License](LICENSE).

## Kontak
Jika ada pertanyaan atau saran, silakan hubungi kami:
- **Email**: [contact@exirostudio.com](mailto:contact@exirostudio.com)
- **Website**: [www.exirostudio.com](http://www.exirostudio.com)

## Terima Kasih!
Kami berharap library ini bermanfaat untuk proyek Anda. Selamat berkoding!
```
