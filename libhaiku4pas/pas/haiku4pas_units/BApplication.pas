unit BApplication;

{$linklib haiku4pas }

interface

uses HaikuObj, ctypes;

function BApplication_Create() : TCppObject; cdecl; external CppLibName name 'BApplication_Create_0';

{*function BApplication_Create(AObject : TObject) : TCPlusObject; cdecl; external CppLibName name 'BApplication_Create_1';
function BApplication_Create(AObject : TObject; Signature : PChar) : TCppObject; cdecl; external CppLibName name 'BApplication_Create_2';
function BApplication_Create(AObject : TObject; Signature : PChar; error : Pstatus_t) : TCppObject; cdecl; external CppLibName name 'BApplication_Create_3';
*}

procedure BApplication_Free(Application : TCppObject); cdecl; external CppLibName;
function BApplication_Run(Application : TCppObject) : thread_id; cdecl; external CppLibName;
procedure BApplication_Quit(Application : TCppObject); cdecl; external CppLibName;

function be_app_PostMessage_1(command: UInt32) : status_t; cdecl; external CppLibName;

implementation

//

end.
