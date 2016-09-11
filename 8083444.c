signed int __fastcall sub_8083444(unsigned __int8 a1)
{
  int *v1; // r2@1
  int v2; // r0@1
  signed int result; // r0@2

  v1 = &dword_3004B20[10 * a1];
  v2 = *((_WORD *)v1 + 8) + 1;
  *((_WORD *)v1 + 8) = v2;
  if ( v2 << 16 > 39321600 )
  {
    *v1 = (int)sub_8083418;
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
