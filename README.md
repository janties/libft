## ft_isalpha
Bu fonksiyon, verilen bir karakterin bir harf olup olmadığını kontrol eder. Eğer karakter bir harf ise, fonksiyon 1 döndürür; aksi halde 0 döndürür.
```c 
int ft_isalpha(int c);
```
## ft_isdigit
Bu fonksiyon, verilen bir karakterin bir rakam olup olmadığını kontrol eder. Eğer karakter bir rakam ise, fonksiyon 1 döndürür; aksi halde 0 döndürür.
```c 
int ft_isdigit(int c);
```

## ft_isalnum
Bu fonksiyon, verilen bir karakterin bir harf veya rakam olup olmadığını kontrol eder. Eğer karakter bir harf veya rakam ise, fonksiyon 1 döndürür; aksi halde 0 döndürür.
```c 
int ft_isalnum(int c);
```

## ft_isascii
Bu fonksiyon, verilen bir karakterin ASCII karakter setinde olup olmadığını kontrol eder. Eğer karakter bir ASCII karakter ise, fonksiyon 1 döndürür; aksi halde 0 döndürür.
```c 
int ft_isascii(int c);
```

## ft_isprint
Bu fonksiyon, verilen bir karakterin yazdırılabilir bir karakter olup olmadığını kontrol eder. Eğer karakter yazdırılabilir bir karakter ise, fonksiyon 1 döndürür; aksi halde 0 döndürür.
```c
int ft_isprint(int c);
```

## ft_strlen
Bu fonksiyon, verilen bir stringin uzunluğunu hesaplar ve sonuç olarak elde edilen uzunluğu size_t türünde döndürür. Fonksiyon, NULL bitişli bir stringin karakter sayısını hesaplar, NULL karakteri dahil edilmez.
```c
size_t ft_strlen(const char *s);
```

## ft_memset
Bu fonksiyon, verilen bellek bloğunu belirtilen bir değerle (c) doldurur. İlk parametre olarak bellek bloğunun başlangıç adresi, ikinci parametre olarak doldurulacak değer ve üçüncü parametre olarak da bellek bloğunun boyutu (n) alır. Doldurma işlemi tamamlandıktan sonra bellek bloğunun başlangıç adresini döndürür.
```c
void *ft_memset(void *s, int c, size_t n);
```

## ft_bzero
Bu fonksiyon, verilen bellek bloğunu sıfırlar. İlk parametre olarak bellek bloğunun başlangıç adresi, ikinci parametre olarak da bellek bloğunun boyutu (n) alır. Bellek bloğu sıfırlandıktan sonra herhangi bir değer döndürmez.
```c
void ft_bzero(void *s, size_t n);
```


## ft_memcpy
Bu fonksiyon, bir bellek bloğundan (src) başka bir bellek bloğuna (dest) kopyalama yapar. İlk parametre olarak hedef bellek bloğunun başlangıç adresi (dest), ikinci parametre olarak kaynak bellek bloğunun başlangıç adresi (src) ve üçüncü parametre olarak da kopyalanacak verinin boyutu (n) alır. Kopyalama işlemi tamamlandıktan sonra hedef bellek bloğunun başlangıç adresini döndürür.
```c
void *ft_memcpy(void *dest, const void *src, size_t n);
```

## ft_memmove
Bu fonksiyon, bellek blokları arasında kopyalama yapar. ft_memcpy fonksiyonuna benzer şekilde çalışır, ancak bellek blokları çakışıyorsa daha güvenli bir şekilde kopyalama yapar. İlk parametre olarak hedef bellek bloğunun başlangıç adresi (dest), ikinci parametre olarak kaynak bellek bloğunun başlangıç adresi (src) ve üçüncü parametre olarak da kopyalanacak verinin boyutu (n) alır. Kopyalama işlemi tamamlandıktan sonra hedef bellek bloğunun başlangıç adresini döndürür.
```c
void *ft_memmove(void *dest, const void *src, size_t n);
```

## ft_strlcpy
Bu fonksiyon, bir stringi (src) başka bir stringe (dest) belirtilen bir boyutta (size) kopyalar. Kopyalama işlemi, kaynak stringin NULL karakterine kadar devam eder veya belirtilen boyut (size) kadar yapılır. Hedef stringin sonuna her zaman NULL karakteri eklenir. İlk parametre olarak hedef stringin başlangıç adresi (dest), ikinci parametre olarak kaynak stringin başlangıç adresi (src) ve üçüncü parametre olarak da hedef stringin boyutu (size) alınır. Kopyalanan karakter sayısını döndürür (NULL karakteri dahil edilmez).
```c
size_t ft_strlcpy(char *dest, const char *src, size_t size);
```

## ft_strlcat
Bu fonksiyon, bir stringi (src) başka bir stringe (dest) belirtilen bir boyutta (size) ekler. Kopyalama işlemi, hedef stringin mevcut uzunluğuyla birlikte gerçekleştirilir ve sonuçta elde edilen stringin uzunluğu döndürülür. İlk parametre olarak hedef stringin başlangıç adresi (dest), ikinci parametre olarak eklenecek stringin başlangıç adresi (src) ve üçüncü parametre olarak da hedef stringin boyutu (size) alınır.
```c
size_t ft_strlcat(char *dest, const char *src, size_t size);
```

## ft_toupper
Bu fonksiyon, verilen bir karakteri küçük harften büyük harfe dönüştürür. Eğer karakter küçük harf ise, büyük harf karşılığı döndürülür. Eğer karakter zaten büyük harf veya başka bir karakter ise, aynı karakter döndürülür.
```c
int ft_toupper(int c);
```

## ft_tolower
Bu fonksiyon, verilen bir karakteri büyük harften küçük harfe dönüştürür. Eğer karakter büyük harf ise, küçük harf karşılığı döndürülür. Eğer karakter zaten küçük harf veya başka bir karakter ise, aynı karakter döndürülür.
```c
int ft_tolower(int c);
```

## ft_strchr
Bu fonksiyon, bir string içinde belirtilen bir karakteri arar ve ilk bulduğu konumun adresini döndürür. İlk parametre olarak arama yapılacak stringin başlangıç adresi (s) ve ikinci parametre olarak aranan karakter (c) alınır. Aranan karakter bulunursa, karakterin adresi döndürülür; bulunamazsa NULL döndürülür.
```c
char *ft_strchr(const char *s, int c);
```

## ft_strrchr
Bu fonksiyon, bir string içinde belirtilen bir karakteri sondan başlayarak arar ve ilk bulduğu konumun adresini döndürür. İlk parametre olarak arama yapılacak stringin başlangıç adresi (s) ve ikinci parametre olarak aranan karakter (c) alınır. Aranan karakter bulunursa, karakterin adresi döndürülür; bulunamazsa NULL döndürülür.
```c
char *ft_strrchr(const char *s, int c);
```

## ft_strncmp
Bu fonksiyon, iki stringi belirtilen bir boyutta (n) karşılaştırır. Karşılaştırma işlemi, s1 ve s2 stringlerindeki karakterlerin ASCII değerlerini kullanarak yapılır. İlk parametre olarak birinci stringin başlangıç adresi (s1), ikinci parametre olarak ikinci stringin başlangıç adresi (s2) ve üçüncü parametre olarak da karşılaştırmanın yapılacağı karakter sayısı (n) alınır. Karşılaştırma sonucu, s1 ve s2 stringlerinin ilişkisine göre bir değer döndürülür: s1 > s2 ise pozitif bir değer, s1 < s2 ise negatif bir değer, s1 = s2 ise 0.
```c
int ft_strncmp(const char *s1, const char *s2, size_t n);
```

## ft_memchr
Bu fonksiyon, bir bellek bloğu içinde belirtilen bir karakteri arar ve ilk bulduğu konumun adresini döndürür. İlk parametre olarak arama yapılacak bellek bloğunun başlangıç adresi (s), ikinci parametre olarak aranan karakter (c) ve üçüncü parametre olarak da bellek bloğunun boyutu (n) alınır. Aranan karakter bulunursa, karakterin adresi döndürülür; bulunamazsa NULL döndürülür.
```c
void *ft_memchr(const void *s, int c, size_t n);
```

## ft_memcmp
Bu fonksiyon, iki bellek bloğunu belirtilen bir boyutta (n) karşılaştırır. Karşılaştırma işlemi, s1 ve s2 bellek bloklarındaki verilerin değerlerini kullanarak yapılır. İlk parametre olarak birinci bellek bloğunun başlangıç adresi (s1), ikinci parametre olarak ikinci bellek bloğunun başlangıç adresi (s2) ve üçüncü parametre olarak da karşılaştırmanın yapılacağı veri sayısı (n) alınır. Karşılaştırma sonucu, s1 ve s2 bellek bloklarının ilişkisine göre bir değer döndürülür: s1 > s2 ise pozitif bir değer, s1 < s2 ise negatif bir değer, s1 = s2 ise 0.
```c
int ft_memcmp(const void *s1, const void *s2, size_t n);
```

## ft_strnstr
Bu fonksiyon, bir string içinde belirtilen bir alt stringi belirtilen bir boyutta arar. Arama işlemi, ilk stringdeki karakterlerin alt stringle eşleşip eşleşmediğini kontrol ederek yapılır. İlk parametre olarak arama yapılacak stringin başlangıç adresi (haystack), ikinci parametre olarak aranacak alt stringin başlangıç adresi (needle) ve üçüncü parametre olarak da arama işleminin yapılacağı karakter sayısı (len) alınır. Aranan alt string bulunursa, alt stringin başlangıç adresi döndürülür; bulunamazsa NULL döndürülür.
```c
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
```

## ft_atoi
Bu fonksiyon, bir stringi integer türüne dönüştürür. Stringin başındaki boşluk karakterleri atlar ve ardından gelen karakterlerin ardışık olarak bir tam sayı temsil ettiği kabul edilir. Dönüştürme işlemi, stringdeki karakterlerin ASCII değerlerini kullanarak yapılır. İlk parametre olarak dönüştürülecek stringin başlangıç adresi (str) alınır. Stringin integer değeri döndürülür.
```c
int ft_atoi(const char *str);
```

## ft_calloc
Bu fonksiyon, bellekte belirtilen boyutta bir alan ayırır ve bu alanı sıfırlar. İlk parametre olarak ayrılacak alanın eleman sayısı (count) ve ikinci parametre olarak elemanların boyutu (size) alınır. Ayırma işlemi başarılı olursa, ayrılan bellek bloğunun başlangıç adresi döndürülür; aksi halde NULL döndürülür.
```c
void *ft_calloc(size_t count, size_t size);
```

## ft_strdup
Bu fonksiyon, bir stringin kopyasını oluşturur. İlk parametre olarak kopyalanacak stringin başlangıç adresi (s) alınır. Bellekte yeni bir alan ayrılır, kopyalanan string bu alana yerleştirilir ve son olarak oluşan stringin başlangıç adresi döndürülür. Bellek ayrılma veya kopyalama işlemi başarısız olursa NULL döndürülür.
```c
char *ft_strdup(const char *s);
```

## ft_substr
Bu fonksiyon, bir stringin belirtilen bir konumdan başlayarak belirtilen bir boyutta alt stringini oluşturur. İlk parametre olarak ana stringin başlangıç adresi (s), ikinci parametre olarak alt stringin başlayacağı konum (start) ve üçüncü parametre olarak da alt stringin boyutu (len) alınır. Oluşturulan alt stringin başlangıç adresi döndürülür. Bellek ayrılma veya kopyalama işlemi başarısız olursa NULL döndürülür.
```c
char *ft_substr(char const *s, unsigned int start, size_t len);
```

## ft_strjoin
Bu fonksiyon, iki stringi birleştirir. İlk parametre olarak birinci stringin başlangıç adresi (s1), ikinci parametre olarak ikinci stringin başlangıç adresi (s2) alınır. Bellekte yeni bir alan ayrılır, birleştirilen string bu alana yerleştirilir ve son olarak oluşan stringin başlangıç adresi döndürülür. Bellek ayrılma veya kopyalama işlemi başarısız olursa NULL döndürülür.
```c
char *ft_strjoin(char const *s1, char const *s2);
```

## ft_strtrim
Bu fonksiyon, bir stringin başındaki ve sonundaki belirtilen karakterleri kırpar. İlk parametre olarak düzenlenecek stringin başlangıç adresi (s) ve ikinci parametre olarak kırpmada kullanılacak karakter setinin başlangıç adresi (set) alınır. Bellekte yeni bir alan ayrılır, düzenlenen string bu alana yerleştirilir ve son olarak düzenlenen stringin başlangıç adresi döndürülür. Bellek ayrılma veya kopyalama işlemi başarısız olursa NULL döndürülür.
```c
char *ft_strtrim(char const *s, char const *set);
```

## ft_split
Bu fonksiyon, bir stringi belirtilen bir karaktere göre böler ve parçaları bir diziye yerleştirir. İlk parametre olarak bölünecek stringin başlangıç adresi (s) ve ikinci parametre olarak bölme işleminde kullanılacak karakter (c) alınır. Bellekte yeni bir alan ayrılır ve parçalar bu alana yerleştirilir. Parçaları tutan bir dizi oluşturulur ve son olarak bu diziye işaret eden bir pointer döndürülür. Bellek ayrılma veya kopyalama işlemi başarısız olursa NULL döndürülür.
```c
char **ft_split(char const *s, char c);
```

## ft_itoa
Bu fonksiyon, bir integer değerini stringe dönüştürür. İlk parametre olarak dönüştürülecek integer değeri (n) alınır. Bellekte yeni bir alan ayrılır, dönüştürülen string bu alana yerleştirilir ve son olarak dönüştürülen stringin başlangıç adresi döndürülür. Bellek ayrılma veya kopyalama işlemi başarısız olursa NULL döndürülür.
```c
char *ft_itoa(int n);
```

## ft_strmapi
Bu fonksiyon, bir stringin her bir karakterini belirtilen bir fonksiyonla dönüştürür. İlk parametre olarak dönüştürülecek stringin başlangıç adresi (s) ve ikinci parametre olarak dönüştürme işleminin yapılacağı fonksiyonun başlangıç adresi (f) alınır. Bellekte yeni bir alan ayrılır, dönüştürülen string bu alana yerleştirilir ve son olarak dönüştürülen stringin başlangıç adresi döndürülür. Bellek ayrılma veya kopyalama işlemi başarısız olursa NULL döndürülür.
```c
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
```

## ft_striteri
Bu fonksiyon, bir stringin her bir karakterini belirtilen bir fonksiyonla işler. İlk parametre olarak işlenecek stringin başlangıç adresi (s) ve ikinci parametre olarak işlemin yapılacağı fonksiyonun başlangıç adresi (f) alınır. İşlemin sonucunda string üzerinde değişiklik yapılır.
```c
void ft_striteri(char *s, void (*f)(unsigned int, char *));
```

## ft_putchar_fd
Bu fonksiyon, bir karakteri belirtilen bir dosyaya yazar. İlk parametre olarak yazılacak karakter (c) ve ikinci parametre olarak da hedef dosyanın dosya tanıtıcısı (fd) alınır.
```c
void ft_putchar_fd(char c, int fd);
```

## ft_putstr_fd
Bu fonksiyon, bir stringi belirtilen bir dosyaya yazar. İlk parametre olarak yazılacak stringin başlangıç adresi (s) ve ikinci parametre olarak da hedef dosyanın dosya tanıtıcısı (fd) alınır.
```c
void ft_putstr_fd(char *s, int fd);
```

## ft_putendl_fd
Bu fonksiyon, bir stringi belirtilen bir dosyaya yazar ve yeni satıra geçer. İlk parametre olarak yazılacak stringin başlangıç adresi (s) ve ikinci parametre olarak da hedef dosyanın dosya tanıtıcısı (fd) alınır.
```c
void ft_putendl_fd(char *s, int fd);
```

## ft_putnbr_fd
Bu fonksiyon, bir integer değerini belirtilen bir dosyaya yazar. İlk parametre olarak yazılacak integer değeri (n) ve ikinci parametre olarak da hedef dosyanın dosya tanıtıcısı (fd) alınır.
```c
void ft_putnbr_fd(int n, int fd);
```

## function as a parameter
#include <stdio.h>
```c
void ft_print_of_power(int (*f)(int, int), int nbr, int pwr) // return-type (*func name) (args...)
{
	int res = f(nbr, pwr);
	printf("Cevap -> %d\n", res);
}

int ft_power(int num, int pwr)
{
	if(!pwr)
		return 1;
	return num * ft_power(num, pwr-1);
}

int	main(void)

{
	int nbr = 2;
	int	power = 3;
	ft_print_of_power(ft_power, 2, 0);
	ft_print_of_power(ft_power, 2, 1);
	ft_print_of_power(ft_power, 2, 2);
	ft_print_of_power(ft_power, 2, 3);
	ft_print_of_power(ft_power, 2, 4);
	ft_print_of_power(ft_power, 2, 5);
	ft_print_of_power(ft_power, 2, 6);
	return (0);
}
```

