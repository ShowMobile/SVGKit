/**
 SVGLog.h
  
 Configurable log messages

 */

#if NO_SVG_LOGS
    #define SVGLog(format,...) do {} while(0)
#else
    #define SVGLog(format,...) NSLog(format,##__VA_ARGS__)
#endif

// SMDLog, only show in debug mode
#if DEBUG
    #define SVGDLog(format,...) SVGLog(format,##__VA_ARGS__)
#else
    #define SVGDLog(format,...) do {} while (0)
#endif