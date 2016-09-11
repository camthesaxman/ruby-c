int __fastcall sub_8086188(int a1)
{
  int v1; // r7@1
  int v2; // r0@1
  int v3; // r0@2
  int v4; // r4@4
  signed int v5; // r0@4
  int v6; // r4@4
  signed int v7; // r0@4
  int v8; // r4@4
  signed int v9; // r0@4
  int v10; // r4@4
  signed int v11; // r0@4
  unsigned __int8 v12; // r6@4
  unsigned __int8 v13; // r5@4
  signed int v14; // r0@4
  int v16; // [sp+1Ch] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 48) - 1;
  *(_WORD *)(v1 + 48) = v2;
  if ( !(v2 << 16) )
  {
    *(_WORD *)(v1 + 48) = 8;
    v3 = (*(_WORD *)(v1 + 50) + 1) & 3;
    *(_WORD *)(v1 + 50) = v3;
    if ( !v3 )
      ++*(_WORD *)(v1 + 52);
  }
  v4 = (*(_WORD *)(v1 + 50) + 3) & 3;
  v5 = IndexOfSpritePaletteTag(0x1007u);
  sub_8085C7C(
    (((v5 << 20) & 0xFFFFFFFu) + 17301504) >> 16,
    gUnknown_0839F2C0[v4],
    gUnknown_0839F2C4[v4],
    gUnknown_0839F2C8[v4]);
  v6 = (*(_WORD *)(v1 + 50) + 2) & 3;
  v7 = IndexOfSpritePaletteTag(0x1007u);
  sub_8085C7C(
    (((v7 << 20) & 0xFFFFFFFu) + 17170432) >> 16,
    gUnknown_0839F2C0[v6],
    gUnknown_0839F2C4[v6],
    gUnknown_0839F2C8[v6]);
  v8 = (*(_WORD *)(v1 + 50) + 1) & 3;
  v9 = IndexOfSpritePaletteTag(0x1007u);
  sub_8085C7C(
    (((v9 << 20) & 0xFFFFFFFu) + 16908288) >> 16,
    gUnknown_0839F2C0[v8],
    gUnknown_0839F2C4[v8],
    gUnknown_0839F2C8[v8]);
  v10 = *(_WORD *)(v1 + 50) & 0xFF;
  v11 = IndexOfSpritePaletteTag(0x1007u);
  v12 = gUnknown_0839F2C0[v10];
  v13 = gUnknown_0839F2C4[v10];
  LOBYTE(v10) = gUnknown_0839F2C8[v10];
  sub_8085C7C((((v11 << 20) & 0xFFFFFFFu) + 17104896) >> 16, v12, v13, v10);
  v14 = IndexOfSpritePaletteTag(0x1007u);
  sub_8085C7C((((v14 << 20) & 0xFFFFFFFu) + 16973824) >> 16, v12, v13, v10);
  if ( (signed int)*(_WORD *)(v1 + 52) > 2 )
  {
    ++*(_WORD *)(v1 + 46);
    *(_WORD *)(v1 + 48) = 8;
    *(_WORD *)(v1 + 50) = 0;
  }
  return v16;
}
