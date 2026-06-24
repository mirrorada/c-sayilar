# Sayı İşlemleri (Çift / Tek Kontrolü)

Bu proje, kullanıcıdan alınan bir tam sayı üzerinde basit matematiksel işlemler yapan bir C programıdır.

## Amaç

Kullanıcının girdiği sayının **çift mi tek mi olduğunu kontrol ederek** farklı işlemler gerçekleştirmek:

* Çift sayı ise: sayının karesi hesaplanır
* Tek sayı ise: sayının küpü hesaplanır

---

## Programın Çalışma Mantığı

1. Kullanıcıdan bir tam sayı alınır (`scanf` ile)
2. Sayının 2’ye bölümünden kalan kontrol edilir:

   * `a % 2 == 0` → sayı çifttir
   * değilse → sayı tektir
3. Koşula göre işlem yapılır:

   * Çiftse → `a * a`
   * Tekse → `a * a * a`
4. Sonuç ekrana yazdırılır (`printf` ile)

---

## Kullanılan C Yapıları

* `if - else` koşul yapısı
* `%` (mod alma operatörü)
* `printf()` → ekrana yazdırma
* `scanf()` → kullanıcıdan veri alma

---

## Örnek Çalışma

**Girdi:**

```
4
```

**Çıktı:**

```
16
```

---

**Girdi:**

```
5
```

**Çıktı:**

```
125
```

---

## Derleme ve Çalıştırma

GCC ile derlemek için:

```
gcc 1.c -o program
```

Çalıştırmak için:

```
./program
```

---

## Not

Bu proje, temel C dili koşul yapıları ve giriş/çıkış işlemlerini öğrenmek amacıyla hazırlanmıştır.
