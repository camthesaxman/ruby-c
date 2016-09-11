int __fastcall sub_80FF1B0(unsigned __int8 a1, int a2)
{
  int v2; // r2@1
  int result; // r0@1

  v2 = a1;
  a2 = (unsigned __int8)a2;
  result = 0xFFFF;
  if ( v2 == 34 )
  {
    result = (gUnknown_083EC984[a2] << 12) & 0xFFFF;
  }
  else if ( v2 == 38 )
  {
    result = (gUnknown_083EC97C[a2] << 12) & 0xFFFF;
  }
  return result;
}
