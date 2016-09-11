int __fastcall sub_8089414(int a1)
{
  int v1; // r6@1
  int *v2; // r5@2
  char *v3; // r4@2
  int v5; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( sub_8088FA4(*(_BYTE *)(a1 + 10)) << 24 )
  {
    v2 = &dword_30048A0[9 * v202E85D];
    v3 = &gSprites[68 * *((_BYTE *)v2 + 4)];
    *((_BYTE *)v2 + 1) &= 0xEFu;
    sub_805C058((int)v2, *((_WORD *)v2 + 8), *((_WORD *)v2 + 9));
    *((_WORD *)v3 + 18) = 0;
    *((_WORD *)v3 + 19) = 0;
    v3[62] |= 2u;
    sub_8059BF4();
    FieldObjectSetSpecialAnim(v2, 57);
    ++*(_WORD *)(v1 + 8);
  }
  return v5;
}
