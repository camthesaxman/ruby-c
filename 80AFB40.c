int __fastcall sub_80AFB40(int a1)
{
  signed int v1; // r1@1

  a1 = (unsigned __int8)a1;
  v1 = 20497;
  if ( (_BYTE)a1 )
  {
    v1 = 24593;
    if ( a1 != 1 )
    {
      v1 = 32785;
      if ( a1 == 2 )
        v1 = 28689;
    }
  }
  return (v1 + 1) & 0xFFFF;
}
