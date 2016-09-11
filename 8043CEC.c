int __fastcall sub_8043CEC(int a1)
{
  int v1; // r4@1
  int v2; // r5@1
  signed int v3; // r0@1
  char *v4; // r2@4
  int v5; // r3@4
  char *v6; // r1@4
  __int16 v7; // r0@4
  int v8; // r0@7
  int v10; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 56) & 0xFF;
  v3 = *(_WORD *)(a1 + 58);
  if ( v3 == 1 )
  {
    v4 = gSprites;
    v5 = 16 * v2;
    v6 = &gSprites[68 * v2];
    v7 = *((_WORD *)v6 + 16) + 16;
  }
  else if ( v3 > 1 || v3 )
  {
    v4 = gSprites;
    v5 = 16 * v2;
    v6 = &gSprites[68 * v2];
    v7 = *((_WORD *)v6 + 16) + 8;
  }
  else
  {
    v4 = gSprites;
    v5 = 16 * v2;
    v6 = &gSprites[68 * v2];
    v7 = *((_WORD *)v6 + 16) + 16;
  }
  *(_WORD *)(v1 + 32) = v7;
  *(_WORD *)(v1 + 34) = *((_WORD *)v6 + 17);
  v8 = (int)&v4[4 * (v5 + v2)];
  *(_WORD *)(v1 + 36) = *(_WORD *)(v8 + 36);
  *(_WORD *)(v1 + 38) = *(_WORD *)(v8 + 38);
  return v10;
}
