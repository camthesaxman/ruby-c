int __fastcall sub_81180F4(unsigned __int16 a1)
{
  unsigned int v1; // r7@1
  unsigned int v2; // r8@1
  signed int v3; // r4@1
  unsigned int v4; // r6@1
  int v5; // r5@2
  char *v6; // r0@2
  char *v7; // r0@5
  int v8; // r0@5
  int v10; // [sp+1Ch] [bp-4h]@0

  v1 = a1;
  v2 = 1000;
  v3 = 0;
  v4 = 0;
  do
  {
    v5 = v1 / v2 & 0xFF;
    v6 = &gSprites[68 * *(_BYTE *)(v4 + 33656913) + 62];
    *v6 |= 4u;
    if ( v5 || v3 || v4 == 3 )
    {
      v7 = &gSprites[68 * *(_BYTE *)(v4 + 33656913) + 62];
      *v7 &= 0xFBu;
      v8 = 68 * *(_BYTE *)(v4 + 33656913);
      *(_WORD *)&gSprites[v8 + 4] = *(_WORD *)&gSprites[v8 + 4] & 0xFC00 | (*(_WORD *)(4 * v5
                                                                                     + **(_DWORD **)((char *)&unk_202000C + v8))
                                                                          + *(_WORD *)&gSprites[v8 + 64]) & 0x3FF;
      v3 = 1;
    }
    v1 = v1 % v2 & 0xFFFF;
    v2 = v2 / 0xA & 0xFFFF;
    v4 = (v4 + 1) & 0xFF;
  }
  while ( v4 <= 3 );
  return v10;
}
