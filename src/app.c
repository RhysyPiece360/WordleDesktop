#include "ui/main.h"
#include "wordles.h"
#ifdef _WIN32
#include <windows.h>
#endif

#ifdef _WIN32
int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPTSTR lpCmdLine, int nCmdShow)
#else
int main(int argc, char **argv)
#endif 
{
  updateWordle();
  #ifdef _WIN32
  SetEnvironmentVariableA("GTK_CSD", "0");
  #endif
  startWindow(
  #ifndef _WIN32
  argc, argv
  #endif
  );
  return 0;
}