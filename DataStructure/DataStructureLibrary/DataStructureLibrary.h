#ifdef DATASTRUCTURELIBRARY_EXPORTS
#define DATASTRUCTURELIBRARY_API __declspec(dllexport)
#else
#define DATASTRUCTURELIBRARY_API __declspec(dllimport)
#endif

// This class is exported from the dll
class DATASTRUCTURELIBRARY_API CDataStructureLibrary {
public:
	CDataStructureLibrary(void);
	void test(void);
	// TODO: add your methods here.
};

extern DATASTRUCTURELIBRARY_API int nDataStructureLibrary;

DATASTRUCTURELIBRARY_API int fnDataStructureLibrary(void);
