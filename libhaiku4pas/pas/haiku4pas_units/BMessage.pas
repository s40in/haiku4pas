unit BMessage;


interface

uses HaikuObj, ctypes;



function BMessage_Create(): TCppObject; cdecl; external CppLibName name 'BMessage_Create_1';
function BMessage_Create(what: cardinal): TCppObject; cdecl; external CppLibName name 'BMessage_Create_2';
procedure BMessage_Free(rect:TCppObject); cdecl; external CppLibName name 'BMessage_Free';

function BMessage_GetWhat(msg: TCppObject): cardinal; cdecl; external CppLibName name 'BMessage_GetWhat';





implementation

//

end.
