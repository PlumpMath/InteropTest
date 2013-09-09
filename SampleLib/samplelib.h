//
// http://www.cnblogs.com/HappyXie/archive/2011/01/07/1929369.html
//
#ifdef SAMPLELIB_EXPORTS
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT __declspec(dllimport)
#endif


#ifdef __cplusplus
extern "C" {  // only need to export C interface if
              // used by C++ source code
#endif

extern DLL_EXPORT int Add(int a, int b);
extern DLL_EXPORT int Sub(int a, int b);
extern DLL_EXPORT int Test();

#ifdef __cplusplus
}
#endif

