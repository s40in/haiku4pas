unit HaikuObj;

//{$linklib haiku4pas }

interface

//uses HaikuMsgDefs;


const
	CppLibName = 'haiku4pas';

type
  TCppObject = Pointer;
  
  thread_id = Longint;

  status_t = Longint;
  Pstatus_t = ^status_t;

//---------------------  
  rgb_color = record
    red,
    green,
    blue,
    alpha : Byte;
  end;
//---------------------

implementation



end.
