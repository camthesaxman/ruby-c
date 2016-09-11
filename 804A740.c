int __fastcall sub_804A740(unsigned __int8 a1)
{
  signed int v1; // r7@1
  int v2; // r10@2
  char *v3; // r5@2
  char *v4; // r1@3
  int v5; // r3@3
  _BYTE *v6; // r2@3
  int v8; // [sp+1Ch] [bp-4h]@0

  v1 = 0;
  if ( (signed int)*(_BYTE *)(dword_3004824 + 66 + a1) > 0 )
  {
    v2 = 6 * a1;
    v3 = &gTradeMonSpriteCoords[12 * a1];
    do
    {
      v4 = &gSprites[68 * *(_BYTE *)(dword_3004824 + 52 + v1 + v2) + 62];
      *v4 &= 0xFBu;
      v5 = dword_3004824;
      v6 = (_BYTE *)(dword_3004824 + 52 + v1 + v2);
      *(_WORD *)&gSprites[68 * *v6 + 32] = 8 * (unsigned __int8)*v3 + 14;
      *(_WORD *)&gSprites[68 * *v6 + 34] = 8 * (unsigned __int8)v3[1] - 12;
      *(_WORD *)&gSprites[68 * *v6 + 36] = 0;
      *(_WORD *)&gSprites[68 * *v6 + 38] = 0;
      v3 += 2;
      ++v1;
    }
    while ( v1 < *(_BYTE *)(v5 + 66 + a1) );
  }
  return v8;
}
