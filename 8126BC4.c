int __fastcall sub_8126BC4(unsigned __int8 a1, char a2, __int16 a3, __int16 a4)
{
  int v4; // r5@1
  char v5; // r8@1
  __int16 v6; // r7@1
  __int16 v7; // r6@1
  char *v8; // r2@1
  char *v9; // r2@4
  __int16 v11; // [sp+0h] [bp-1Ch]@4
  __int16 v12; // [sp+2h] [bp-1Ah]@4
  int v13; // [sp+18h] [bp-4h]@5

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = &gSprites[68 * a1];
  if ( v8[62] & 4 || *((_WORD *)v8 + 23) != v6 || *((_WORD *)v8 + 24) != a4 )
  {
    sub_80603CC(v6, a4, &v11, &v12);
    v9 = &gSprites[68 * v4];
    *((_WORD *)v9 + 16) = v11 + 8;
    *((_WORD *)v9 + 17) = v12 + 8;
    v9[62] &= 0xFBu;
    *((_WORD *)v9 + 23) = v6;
    *((_WORD *)v9 + 24) = v7;
    StartSpriteAnim((int)v9, v5 - 1);
  }
  return v13;
}
