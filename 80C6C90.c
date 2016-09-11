int sub_80C6C90()
{
  int v0; // r0@1
  char *v1; // r4@2
  __int16 v3; // [sp+0h] [bp-Ch]@1
  __int16 v4; // [sp+2h] [bp-Ah]@1
  int v5; // [sp+8h] [bp-4h]@3

  v3 = dword_30048A0[9 * v202E85D + 4];
  v4 = HIWORD(dword_30048A0[9 * v202E85D + 4]);
  sub_8060470(&v3, &v4, 8, 4);
  v0 = (unsigned __int8)CreateSpriteAtEnd(137842320, v3, v4);
  if ( v0 != 64 )
  {
    v1 = &gSprites[68 * v0];
    v1[62] |= 2u;
    v1[5] = (v1[5] & 0xF3 | 4) & 0xF | 0x50;
    dword_2020020[17 * v0] = (int)sub_80C6C64;
    *((_WORD *)v1 + 23) = 0;
  }
  return v5;
}
