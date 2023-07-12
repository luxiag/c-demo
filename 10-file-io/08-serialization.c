
#include "include/io_utils.h"


#define OK 1
#define ERROR 0
typedef struct {
  int visibility;
  int allow_notification;
  int refresh_rate;
  int region;
  int font_size;
} Settings;

void PrintSettings(Settings *settings) {
  PRINT_INT(settings->visibility);
  PRINT_INT(settings->allow_notification);
  PRINT_INT(settings->refresh_rate);
  PRINT_INT(settings->region);
  PRINT_INT(settings->font_size);

}

int SaveSettings(Settings *settings, char *settings_file) {
  FILE *file = fopen(settings_file, "wb");
  if(file) {
    fwrite(&settings->visibility, sizeof(settings->visibility),1,file);
    fwrite(&settings->allow_notification, sizeof(settings->allow_notification),1,file);
    fwrite(&settings->refresh_rate, sizeof(settings->refresh_rate),1,file);
    fwrite(&settings->region, sizeof(settings->region),1,file);
    fwrite(&settings->font_size, sizeof(settings->font_size),1,file);
    fclose(file);
    return OK;
  }
}

void LoadingSettings(Settings *settings,char *settings_file) {
  FILE *file = fopen(settings_file, "rb");
  if(file) {

     fwrite(&settings->visibility, sizeof(settings->visibility),1,file);
     fwrite(&settings->allow_notification, sizeof(settings->allow_notification),1,file);
     fwrite(&settings->refresh_rate, sizeof(settings->refresh_rate),1,file);
     fwrite(&settings->region, sizeof(settings->region),1,file);
     fwrite(&settings->font_size, sizeof(settings->font_size),1,file);
     fclose(file);
  }else {
     settings->visibility =1;
     settings->allow_notification =1;
     settings->refresh_rate = 30;
     settings->region=86;
     settings->font_size = 18;
  }
}

int main(){
  Settings settings;
  LoadingSettings(&settings,"settings.bin");
  PrintSettings(&settings);
  settings.font_size = 30;
  settings.allow_notification = 0;
  SaveSettings(&settings,"settings.bin");
  return 0;
}