while True :
      print("pilih program\n 1. penjumlahan\n 2. pengurangan\n 3. perkalian\n 4. penjumlahan\n 5. exit\n") 
      opsi =int(input("Masukkan Pilihan : "))
      if opsi > 5 :
          print("Input anda salah, silahkan coba lagi")
          continue
      elif opsi == 5 :
            print("Terimakasih, telah menggunakan kalkulator Ikhsan Gymnastiar")
            break
      else :
          b1 =float(input("masukkan nilai Pertama : "))
          b2 =float(input("masukkan nilai Kedua : "))   
          if opsi == 1 :
                    print("Hasil penjumlahan antara {:.2f} dengan {:.2f} adalah {:.2f}".format(b1, b2, b1+b2))
          elif opsi == 2 :
                     print("Hasil pengurangan antara  {:.2f} dengan {:.2f} adalah {:.2f}".format(b1, b2, b1-b2))
          elif opsi == 3 :
                     print("Hasil perkalian antara  {:.2f} dengan {:.2f} adalah {:.2f}".format(b1, b2, b1*b2))
          elif opsi == 4 :
                     print("Hasil pembagian antara  {:.2f} dengan {:.2f} adalah {:.2f}".format(b1, b2, b1/b2))