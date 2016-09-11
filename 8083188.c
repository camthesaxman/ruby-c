int __fastcall sub_8083188(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r5@1
  unsigned __int8 v3; // r7@1
  unsigned __int8 v4; // r6@1
  unsigned int v5; // r4@3
  int (*v6)(); // r0@4
  signed int v7; // r0@5
  int v9; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_BYTE *)v2 + 10);
  v4 = *((_BYTE *)v2 + 12);
  if ( sub_8082DF4(a1) != 1 && (sub_8083444(v1) & 0xFF) != 1 )
  {
    v5 = GetLinkPlayerCount_2();
    if ( v5 << 24 != sub_800820C() << 24 )
    {
      v6 = sub_8083418;
_080831E8:
      *v2 = (int)v6;
      return v9;
    }
    v7 = sub_8082D9C(v3, v4);
    v202E8DC = v7;
    if ( v7 << 16 )
    {
      v6 = sub_8083288;
      goto _080831E8;
    }
  }
  return v9;
}
