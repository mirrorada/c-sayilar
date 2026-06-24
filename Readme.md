# Çift ve Tek Sayı İşlemleri

Bu proje, kullanıcıdan bir tam sayı alan ve sayının tek veya çift olmasına göre farklı işlemler gerçekleştiren basit bir C programıdır.

## Özellikler

### Çift Sayılar

Girilen sayı çift ise sayının karesi hesaplanır ve ekrana yazdırılır.

Örnek:

Girdi:
4

Çıktı:
16

### Tek Sayılar

İlk sürümde tek sayılar için herhangi bir işlem yapılmaz.

## Kullanılan Yapılar

* `if` koşulu ile sayının çift olup olmadığı kontrol edilir.
* `%` (mod) operatörü kullanılarak sayının 2'ye bölümünden kalan hesaplanır.
* `printf()` ile sonuç ekrana yazdırılır.
* `scanf()` ile kullanıcıdan veri alınır.

## Derleme

GCC kullanıyorsanız:

gcc 1.c -o program

Çalıştırmak için:

./program
