int __fastcall sub_813E6C0(int a1)
{
  int v1; // r4@1
  char *v2; // r2@3
  int v3; // r0@5
  int v4; // r1@5
  int v5; // r6@5
  unsigned int v6; // r5@5
  int v7; // r10@5
  int v8; // r9@5
  int v9; // r3@6
  int v10; // r0@6
  char *v11; // r3@7
  int v13; // [sp+0h] [bp-24h]@5
  int v14; // [sp+20h] [bp-4h]@0

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
    if ( *((_WORD *)v2 + 23) == 1 && !(*(_WORD *)(a1 + 60) & 3) )
    {
      v13 = (*((_WORD *)v2 + 16) + *(_WORD *)(a1 + 48)) & 0xFFFF;
      v3 = *((_WORD *)v2 + 17);
      v4 = *(_WORD *)(v1 + 50);
      v5 = (v3 + v4) & 0xFFFF;
      v6 = 0;
      v7 = (*((_WORD *)v2 + 16) + *(_WORD *)(v1 + 48)) << 16;
      v8 = (v3 + v4) << 16;
      do
      {
        v9 = (unsigned __int8)gSprites[68 * *(_WORD *)(v1 + 46) + 67];
        v10 = (unsigned __int8)CreateSprite((int)"Ó\aÔ\aÈ°@\bØ°@\b", SHIWORD(v7), SHIWORD(v8));
        if ( v10 != 64 )
        {
          v11 = &gSprites[68 * v10];
          *((_WORD *)v11 + 23) = *(_WORD *)(v1 + 46);
          *((_WORD *)v11 + 24) = 32 * ((*(_WORD *)(v1 + 60) << 16 >> 18) & 7) + 85 * v6;
          *((_WORD *)v11 + 25) = *(_WORD *)(v1 + 52);
          *((_WORD *)v11 + 26) = 104;
          *((_WORD *)v11 + 27) = v13;
          *((_WORD *)v11 + 28) = v5;
          *((_WORD *)v11 + 29) = 0;
        }
        v6 = (v6 + 1) & 0xFF;
      }
      while ( v6 <= 2 );
    }
  }
  return v14;
}
