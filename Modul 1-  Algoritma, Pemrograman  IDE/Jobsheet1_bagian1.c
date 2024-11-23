#include <stdio.h>

int main()
{
    printf("Hello World!\n");

    return 0;
}


### **Penjelasan Langkah-langkah**

1. **`#include <stdio.h>`**
   - Baris ini merupakan *preprocessor directive* yang menyertakan file header **`stdio.h`** (Standard Input/Output Header).
   - Header ini menyediakan fungsi untuk operasi input dan output, seperti `printf()`, `scanf()`, dll.

2. **`int main()`**
   - Fungsi `main()` adalah titik awal eksekusi program dalam bahasa C.
   - Tipe data `int` menandakan bahwa fungsi ini akan mengembalikan nilai berupa bilangan bulat.

3. **Blok `{}`**
   - Tanda kurung kurawal `{}` mendefinisikan batas awal dan akhir dari fungsi `main()`.

4. **`printf("Hello World!\n");`**
   - Fungsi `printf()` digunakan untuk mencetak teks ke layar.
   - `"Hello World!\n"` adalah string yang akan dicetak:
     - **`Hello World!`** adalah teks yang akan muncul di layar.
     - **`\n`** adalah karakter newline, yang memindahkan kursor ke baris berikutnya setelah teks dicetak.

5. **`return 0;`**
   - Baris ini menunjukkan bahwa fungsi `main()` mengembalikan nilai 0 ke sistem operasi.
   - Nilai 0 umumnya digunakan untuk menunjukkan bahwa program berjalan tanpa error.

### **Output Program**
Ketika program dijalankan, hasil yang ditampilkan pada layar adalah:
```
Hello World!
```
