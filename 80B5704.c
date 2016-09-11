signed int sp109_CreatePCMenu()
{
  signed int result; // r0@2

  if ( (unsigned __int8)FuncIsActiveTask((int)sub_80B52B4) == 1 )
  {
    result = 0;
  }
  else
  {
    v202E8DC = 255;
    CreatePCMenu();
    result = 1;
  }
  return result;
}
