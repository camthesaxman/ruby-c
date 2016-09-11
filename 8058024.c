int __fastcall MapPosToBgTilemapOffset(int a1, int a2, int a3)
{
  unsigned int v3; // r1@1
  int v4; // r1@2
  unsigned int v5; // r2@4
  int result; // r0@5
  int v7; // r2@6

  v3 = 2 * (a2 - v2025734);
  if ( v3 > 0x1F )
    goto LABEL_11;
  v4 = v3 + *(_BYTE *)(a1 + 2);
  if ( v4 > 31 )
    v4 -= 32;
  v5 = 2 * (a3 - v2025736);
  if ( v5 <= 0x1F )
  {
    v7 = v5 + *(_BYTE *)(a1 + 3);
    if ( v7 > 31 )
      v7 -= 32;
    result = 32 * v7 + v4;
  }
  else
  {
LABEL_11:
    result = -1;
  }
  return result;
}
