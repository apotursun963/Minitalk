
# UNIX sinyalleri nedir ve nasıl çalışır ?  
-------------------------------------------
UNIX sinyalleri, bir UNIX işletim sistemi içinde süreçler (process) arasında iletişimi ve işlemleri kontrol etme mekanizmalarını sağlar. UNIX sinyalleri, genellikle sistemin veya kullanıcı tarafından bir işlem üzerinde gerçekleştirilen işlemleri iletmek veya kontrol etmek için kullanılır. 

## Signal (Sinyal):
Sinyal, işletim sisteminde çalışan bir sürecee (process'e) gönderilen bir mesajdır.
işletim sistemleri, sinyalleri süreçler arasında iletişim sağalmak veya bir süreci kontorl etmek için kullanır.
Sinyaller, bir sürece belirli bir olayın meydana geldiğini bildiren mekanizmalardır. Örneğin: 
Süreci durdurmak, sonlandırmak veya hata durumu oluştuğunda bir sinyal gönderilebilir.
özetle, Sinyal Süreçlere mesaj göndermek için kullanılan bir **iletişim yöntemidir**.

### Sinyal Türleri:
- **Sonlandırma Sinyalleri**:
    - SIGTERM: Süreci düzgün bir şekilde sonlandırır.
    - SIGKILL: Süreci anında sonlandırır (geri döndürülemez) ve süreç tarafından yakalanamaz.

- **Duraklatma ve Devam Ettirme Sinyalleri**:
    - SIGSTOP: Süreci duraklatır.
    - SIGCONT: Süreci devam ettirir.

- **Hata Bildirim Sinyalleri**:
    - SIGSEGV: Geçersiz bellek erişimi.
    - SIGILL: Geçersiz bir işlem kodu yürütme girişimi.

- **Özel Kullanıcı Sinyalleri**:
    - SIGUSR1, SIGUSR2: Kullanıcı tarafından tanımlanan özel amaçlar için kullanılır.

Daha fazla sinyal türleri için >> [Signal-Types](https://www.math.stonybrook.edu/~ccc/dfc/dfc/signals.html)
