int __fastcall sub_80862C8(int a1)
{
  int v1; // r2@1
  int v2; // r0@1
  int v3; // r0@2
  int v4; // r4@4
  signed int v5; // r0@4
  unsigned __int8 v6; // r6@4
  unsigned __int8 v7; // r5@4
  signed int v8; // r0@4
  signed int v9; // r0@4
  signed int v10; // r0@4
  signed int v11; // r0@4
  int v13; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 48) - 1;
  *(_WORD *)(v1 + 48) = v2;
  if ( !(v2 << 16) )
  {
    *(_WORD *)(v1 + 48) = 8;
    v3 = (*(_WORD *)(v1 + 50) + 1) & 3;
    *(_WORD *)(v1 + 50) = v3;
    if ( v3 == 3 )
    {
      ++*(_WORD *)(v1 + 46);
      *(_WORD *)(v1 + 48) = 30;
    }
  }
  v4 = *(_WORD *)(v1 + 50) & 0xFF;
  v5 = IndexOfSpritePaletteTag(0x1007u);
  v6 = gUnknown_0839F2C0[v4];
  v7 = gUnknown_0839F2C4[v4];
  LOBYTE(v4) = gUnknown_0839F2C8[v4];
  sub_8085C7C((((v5 << 20) & 0xFFFFFFFu) + 17301504) >> 16, v6, v7, v4);
  v8 = IndexOfSpritePaletteTag(0x1007u);
  sub_8085C7C((((v8 << 20) & 0xFFFFFFFu) + 17170432) >> 16, v6, v7, v4);
  v9 = IndexOfSpritePaletteTag(0x1007u);
  sub_8085C7C((((v9 << 20) & 0xFFFFFFFu) + 16908288) >> 16, v6, v7, v4);
  v10 = IndexOfSpritePaletteTag(0x1007u);
  sub_8085C7C((((v10 << 20) & 0xFFFFFFFu) + 17104896) >> 16, v6, v7, v4);
  v11 = IndexOfSpritePaletteTag(0x1007u);
  sub_8085C7C((((v11 << 20) & 0xFFFFFFFu) + 16973824) >> 16, v6, v7, v4);
  return v13;
}
