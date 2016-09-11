int __fastcall sub_811A534(int a1)
{
  int v1; // r7@1
  char *v2; // r4@8
  char v3; // r3@11
  unsigned int v4; // r2@11
  char v5; // r3@18
  int v6; // r0@24
  __int16 v7; // r2@24
  unsigned int v9; // [sp+4h] [bp-24h]@24
  unsigned int v10; // [sp+8h] [bp-20h]@24
  char v11; // [sp+Ch] [bp-1Ch]@8
  int v12; // [sp+24h] [bp-4h]@24

  v1 = a1;
  gSprites[68 * v201C804 + 1] = gSprites[68 * v201C804 + 1] & 0xFC | 1;
  *(_WORD *)&gSprites[68 * v201C804 + 6] = 0;
  if ( v201C010 == 2 )
  {
    v3 = 0;
    v4 = 0;
    v2 = &v11;
    do
    {
      if ( v3 < (signed int)*(_BYTE *)(v4 + 33669120) )
        v3 = *(_BYTE *)(v4 + 33669120);
      v4 = (v4 + 1) & 0xFFFF;
    }
    while ( v4 <= 0xF );
    sub_811A6D8((208 * v3 + (208 * v3 < 0 ? 0xFF : 0)) << 16 >> 24);
  }
  else
  {
    if ( (signed int)v201C010 > 2 )
    {
      if ( v201C010 == 6 )
        sub_811A6D8(13631488 * v201C00A >> 24);
      goto _0811A5F4;
    }
    if ( v201C010 )
    {
_0811A5F4:
      v2 = &v11;
      goto _0811A5F6;
    }
    v201C801 = 32;
    if ( v201C800 <= 0 )
    {
      v201C802 = 5;
      goto _0811A5F4;
    }
    v2 = &v11;
    if ( v201C802 != 1 )
      --v201C802;
  }
_0811A5F6:
  v5 = v201C800;
  if ( v201C800 != v201C801 )
  {
    if ( v201C800 >= v201C801 )
    {
      v201C800 -= v201C802;
      if ( (char)(v5 - v201C802) < v201C801 )
      {
_0811A636:
        v201C800 = v201C801;
        v201C801 = 0;
        goto _0811A63C;
      }
    }
    else
    {
      v201C800 += v201C802;
      if ( (char)(v5 + v201C802) > v201C801 )
        goto _0811A636;
    }
  }
_0811A63C:
  v9 = (v9 & 0xFFFF0000 | 0x100) & 0xFFFF | 0x1000000;
  v10 = v10 & 0xFFFF0000 | (v201C800 << 8) & 0xFFFF;
  ObjAffineSet(&v9, v2, 1, 2);
  SetOamMatrix(0, *(__int16 *)&v11, *((_WORD *)v2 + 1), *((_WORD *)v2 + 2), *((_WORD *)v2 + 3));
  v6 = (v201C800 + 127) & 0xFF;
  v7 = gSineTable[v6 + 64];
  *(_WORD *)(v1 + 36) = 24 * gSineTable[v6] / 256;
  *(_WORD *)(v1 + 38) = 24 * v7 / 256;
  return v12;
}
