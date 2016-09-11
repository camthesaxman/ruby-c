signed int __fastcall sub_8125D44(unsigned __int8 a1)
{
  int v1; // r4@1
  signed int result; // r0@2

  v1 = a1;
  if ( dword_3004820 == 1 )
  {
    sub_8125C3C(a1);
    if ( dword_3005EA8 )
    {
      fullscreen_save_activate(v1);
      result = 255;
    }
    else
    {
      result = 1;
    }
  }
  else
  {
    result = 255;
  }
  return result;
}
