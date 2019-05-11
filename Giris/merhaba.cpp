#include <iostream>
// Bu bir ön işlemci yönergesi olarak bilinir. derleyiciye iostream olarak bilinen bir kütüphane için kod içeren dosyayı bulması talimatını verir. 
// Bu kütüphane, giriş ve çıkışın konsol penceresi gibi akışlara izin veren bir kod içerir.

int main() // Her C programının main () olarak bilinen bir metodu olmalıdır. Programın bilgisayarınızda yürütülmesine başladığınızda uygulamanın giriş noktası olarak adlandırılır. 
//int kısmı, yöntemin dönüş türüdür. Yöntem adından sonraki parantezler (), bunun bir yöntemin olduğunu ve argüman almadığını, başka bir deyişle, değerleri aktarmak için parametre olmadığını belirtir.
{ // C ++ 'daki metod gövdeleri açık bir küme ayracı ile başlar.
   std::cout << "Hello World!";  // Bu kod, Merhaba Dünya! Metnini göndermek için cout ('see out' olarak telaffuz edilir) olarak bilinen bir yöntem kullanır çıkış olarak konsola görüntüleme için kullanılır. 
   // Bu komutun std :: öneki, cout'un std olarak bilinen bir ad alanının parçası olduğunu göstermenin bir yoludur.
   // ::, cout öğesinin std ad alanının bir parçası olduğunu belirtmek için kullanılır.
   //Ayrıca satırın noktalı virgülle bittiğine dikkat edin. C ++ ifadeleri (statements) noktalı virgüllerle sonlandırılır.
   return 0;
   // Return ifadesi, bir arayana geri değer gönderilmesi beklendiğinde bir işlevi veya yöntemi sonlandırmak için kullanılır.
   // Bu durumda, arayan kişi işletim sistemidir ve döndürülen değer 0 tamsayıdır.
   // Program bu ifadeye ulaşırsa, 0 değerinin döndürülmesi, işletim sistemine kodun başarıyla çalıştırıldığının bir göstergesidir.
   // Geçmişte, programcılar başarılı bir uygulama olduğunu belirtmek için 0 değerini ve programda bir yerde bir hata olduğunu göstermek için sıfır olmayan değerleri gösterirdi.
}

// Bu çizgi main () fonksiyonunun gövdesini kapatır ve zorunludur, böylece derleyici, işlevin veya yöntemin nerede bittiğini bilir, fakat aynı zamanda dersin ilerleyen bölümlerinde 
// değişken kapsam ve görünürlükle ele alınacak başka amaçlar için de kullanılır.