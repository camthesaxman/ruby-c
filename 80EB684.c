int __fastcall unref_sub_80EB684(signed int a1, int a2)
{
  signed int v2; // r2@7
  int v3; // r0@7
  signed int v4; // r1@7
  _WORD *v5; // r1@10
  int i; // r2@10
  int v8; // [sp+4h] [bp-4h]@0

  a1 = (unsigned __int8)a1;
  a2 = (unsigned __int16)a2;
  if ( (unsigned __int8)a1 == 7 )
  {
    v2 = 2;
    v3 = 36 * a2;
    v4 = 33717896;
  }
  else if ( a1 > 7 )
  {
    if ( a1 != 8 )
      return v8;
    v2 = 1;
    v3 = 36 * a2;
    v4 = 33717870;
  }
  else
  {
    if ( a1 != 5 )
      return v8;
    v2 = 6;
    v3 = 36 * a2;
    v4 = 33717872;
  }
  v5 = (_WORD *)(v3 + v4);
  for ( i = (v2 - 1) & 0xFFFF; i != 0xFFFF; i = (i - 1) & 0xFFFF )
  {
    *v5 = -1;
    ++v5;
  }
  return v8;
}
