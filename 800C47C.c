int __fastcall sub_800C47C(int a1)
{
  int v1; // r8@1
  int *v2; // r3@1
  int v3; // r2@1
  int v4; // r0@1
  int *v5; // r6@5
  int v6; // r3@5
  int v7; // r4@5
  int v8; // r7@5
  signed int v9; // r0@5
  int v11; // [sp+18h] [bp-4h]@0

  a1 = (unsigned __int8)a1;
  v1 = a1;
  v2 = &dword_3004B20[10 * (unsigned __int8)a1];
  v3 = *((_WORD *)v2 + 19);
  v4 = *((_WORD *)v2 + 18);
  if ( v3 != v4 )
  {
    if ( v3 > v4 && v3 == *((_WORD *)v2 + 16) )
    {
      *((_WORD *)v2 + 16) = 0;
      *((_WORD *)v2 + 19) = 0;
    }
    v5 = &dword_3004B20[10 * v1];
    v6 = *((_WORD *)v5 + 19);
    v7 = *(_BYTE *)(v6 + 0x2015001);
    v8 = *(_BYTE *)(v6 + 0x2015004) | (*(_BYTE *)(v6 + 0x2015005) << 8);
    v9 = *(_BYTE *)(v6 + 0x2015000);
    if ( v9 == 1 )
    {
      memcpy(
        (*(_BYTE *)(v6 + 0x2015001) << 9) + 33702496,
        v6 + 33640456,
        *(_BYTE *)(*((_WORD *)v5 + 19) + 0x2015004) | (*(_BYTE *)(*((_WORD *)v5 + 19) + 0x2015005) << 8));
      goto _0800C5E8;
    }
    if ( v9 > 1 )
    {
      if ( v9 == 2 )
        v2024A64 &= ~(gBitTable[v7] << 4 * *(_BYTE *)(*((_WORD *)v5 + 19) + 0x2015008));
      goto _0800C5E8;
    }
    if ( *(_BYTE *)(*((_WORD *)v5 + 19) + 0x2015000) )
    {
_0800C5E8:
      HIWORD(dword_3004B20[10 * v1 + 9]) += v8 + 8;
      return v11;
    }
    if ( !(v2024A64 & gBitTable[v7]) )
    {
      memcpy(
        (v7 << 9) + 33700448,
        v6 + 33640456,
        *(_BYTE *)(*((_WORD *)v5 + 19) + 0x2015004) | (*(_BYTE *)(*((_WORD *)v5 + 19) + 0x2015005) << 8));
      sub_80155A4(v7);
      if ( !(v20239F8 & 4) )
      {
        v2024C07 = *(_BYTE *)(*((_WORD *)v5 + 19) + 0x2015002);
        v2024C08 = *(_BYTE *)(*((_WORD *)v5 + 19) + 0x2015003);
        v2024C0C = *(_BYTE *)(*((_WORD *)v5 + 19) + 0x2015006);
        v2024C0A = *(_BYTE *)(*((_WORD *)v5 + 19) + 0x2015007);
      }
      goto _0800C5E8;
    }
  }
  return v11;
}
