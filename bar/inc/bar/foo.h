#ifndef BAR_FOO_H_
#define BAR_FOO_H_

// TODO: If you wish to change DLLTEMPLATE_EXPORTS
// to something else, make sure you update the
// Preprocessor Definitions (Under C/C++ >> Preprocessor)
#ifdef DLLTEMPLATE_EXPORTS
#define DLLTEMPLATE_API __declspec(dllexport)
#else
#define DLLTEMPLATE_API __declspec(dllimport)
#endif


// Some shared library
namespace bar
{
	// Some public function
	DLLTEMPLATE_API void Foo();
}


#endif //BAR_FOO_H_

