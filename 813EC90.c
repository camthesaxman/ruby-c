int __fastcall sub_813EC90(int a1)
{
  int v1; // r5@1
  char *v2; // r3@3
  int v3; // r8@5
  __int16 v4; // r1@5
  int v5; // r7@5
  __int16 v6; // r2@5
  int v7; // r3@5
  int v8; // r0@5
  char *v9; // r4@6
  signed int v10; // kr00_4@9
  int v12; // [sp+1Ch] [bp-4h]@0

  v1 = a1;
  if ( v203931A )
  {
    DestroySprite(a1);
  }
  else
  {
    ++*(_WORD *)(a1 + 60);
    *(_BYTE *)(a1 + 62) |= 4u;
    v2 = &gSprites[68 * *(_WORD *)(a1 + 46)];
    if ( *((_WORD *)v2 + 23) == 1 )
    {
      if ( !(*(_WORD *)(a1 + 60) & 1) )
      {
        v3 = (*((_WORD *)v2 + 16) + *(_WORD *)(a1 + 48)) & 0xFFFF;
        v4 = *((_WORD *)v2 + 16) + *(_WORD *)(a1 + 48);
        v5 = (*((_WORD *)v2 + 17) + *(_WORD *)(a1 + 50)) & 0xFFFF;
        v6 = *((_WORD *)v2 + 17) + *(_WORD *)(a1 + 50);
        v7 = (unsigned __int8)v2[67];
        v8 = (unsigned __int8)CreateSprite((int)"”\a‘\aú±@\b¨±@\b", v4, v6);
        if ( v8 != 64 )
        {
          v9 = &gSprites[68 * v8];
          v9[1] |= 3u;
          v9[3] = v9[3] & 0xC1 | 0x22;
          CalcCenterToCornerVec((int)v9, 0, 1, 3);
          *((_WORD *)v9 + 23) = *(_WORD *)(v1 + 46);
          *((_WORD *)v9 + 24) = 32 * ((*(_WORD *)(v1 + 60) << 16 >> 18) & 7);
          *((_WORD *)v9 + 25) = *(_WORD *)(v1 + 52);
          *((_WORD *)v9 + 26) = 232;
          *((_WORD *)v9 + 27) = v3;
          *((_WORD *)v9 + 28) = v5;
          *((_WORD *)v9 + 29) = 0;
        }
      }
      if ( (signed int)*(_WORD *)(v1 + 58) <= 111 )
        *(_WORD *)(v1 + 58) += 4;
    }
    v10 = *(_WORD *)((char *)gSineTable + (2 * *(_WORD *)(v1 + 58) & 0x1FF));
    SetOamMatrix(17, 256 - v10 / 2, 0, 0, 256 - v10 / 2);
  }
  return v12;
}
