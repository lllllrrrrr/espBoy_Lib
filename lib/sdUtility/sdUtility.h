#ifndef sdUtility_h
#define sdUtility_h

#include "Arduino.h"
#include <SPI.h>
#include <SD.h>
#include <LinkedList.h>

class MyFile {
private:
    String nomeFile;
    String path;
public:
  void setNome(String nome);
 void setPath(String p);
  String getPath();
  String getNome();
};

class SdUtility {
private:
    File root;
    LinkedList<MyFile*> fileList;
public:
  bool init(int cs);
  void loadFileList(File dir, String path);
  File getRoot(); 
  int fileNumber();
  char* getFileEext(const char *string);
};
#endif