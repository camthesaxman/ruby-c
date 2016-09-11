int __fastcall sub_80AABF0(int a1, int a2)
{
  int v2; // r5@1
  char v3; // r0@1
  int v4; // r0@3
  signed int v5; // r4@3
  signed int v6; // r0@3
  unsigned int v7; // r4@7
  int v9; // [sp+8h] [bp-4h]@0

  v2 = a1;
  v3 = -1;
  if ( a2 << 24 > 0 )
    v3 = 1;
  v4 = (v3 + *(_WORD *)(v2 + 52)) << 24;
  v5 = (unsigned int)v4 >> 24;
  v6 = v4 >> 24;
  if ( v6 >= 0 )
  {
    if ( v6 > 4 )
      v5 = 4;
  }
  else
  {
    v5 = 0;
  }
  v7 = v5 << 24;
  sub_80AA5BC(v7 >> 24);
  v7 = (signed int)v7 >> 24;
  *(_WORD *)(v2 + 52) = v7;
  v203869C = v7;
  sub_80AE398((unsigned __int8)v7, v203869E);
  sub_80AA280(*(_BYTE *)(v2 + 50));
  sub_80AA658(*(_BYTE *)(v2 + 50));
  return v9;
}
