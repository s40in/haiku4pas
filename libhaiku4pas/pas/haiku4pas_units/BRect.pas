unit BRect;


interface

uses HaikuObj, ctypes;


function BRect_Create(left,  top, right, bottom: Single): TCppObject; cdecl; external CppLibName name 'BRect_Create_1';
procedure BRect_Free(rect:TCppObject); cdecl; external CppLibName name 'BRect_Free';
function BRect_left(rect:TCppObject): Single; cdecl; external CppLibName name 'BRect_left';
function BRect_top(rect:TCppObject): Single; cdecl; external CppLibName name 'BRect_top';
function BRect_right(rect:TCppObject): Single; cdecl; external CppLibName name 'BRect_right';
function BRect_bottom(rect:TCppObject): Single; cdecl; external CppLibName name 'BRect_bottom';

implementation

//

end.
