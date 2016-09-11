int __fastcall sub_8142CC8(unsigned __int8 a1)
{
  int v1; // r4@1
  signed int v2; // r8@1
  int v3; // r3@1
  int v4; // r0@1
  unsigned int v5; // r3@3
  int v6; // r1@4
  int *v7; // r5@7
  char *v8; // r0@7
  unsigned int v9; // r1@7
  int v10; // r4@7
  int v12; // [sp+1Ch] [bp-4h]@0

  v1 = a1;
  v2 = 33677312;
  v3 = 0;
  v4 = LOWORD(dword_3004B20[10 * a1 + 2]);
  if ( v4 > 0 )
  {
    do
    {
      v2 += 120;
      v3 = (v3 + 1) & 0xFFFF;
    }
    while ( v3 < v4 );
  }
  v5 = 0;
  do
  {
    v6 = *((_WORD *)&byte_3004B28[40 * v1] + v5 + 5);
    if ( v6 != 255 )
      gSprites[68 * v6 + 5] = gSprites[68 * v6 + 5] & 0xF3 | 4;
    v5 = (v5 + 1) & 0xFFFF;
  }
  while ( v5 <= 5 );
  v7 = &dword_3004B20[10 * v1];
  v8 = &gSprites[68 * *((_WORD *)&byte_3004B28[40 * v1] + *((_WORD *)v7 + 6) + 5)];
  v9 = v8[5] & 0xF3;
  v8[5] = v9;
  v203931C = (0x10000 << (v9 >> 4)) ^ 0xFFFF0000;
  BlendPalettesUnfaded(v203931C, 0xCu, 29535);
  v10 = v2 + 20 * *((_WORD *)v7 + 6);
  if ( (*(_WORD *)(v10 + 8) & 0x1FF) != 412 )
  {
    sub_8075398();
    cry_related(*(_WORD *)(v10 + 8) & 0x1FF, 0);
  }
  sub_8143088(v10, 0, 14);
  *v7 = (int)sub_8142DF4;
  return v12;
}
