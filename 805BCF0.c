int __fastcall sub_805BCF0(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3, char a4)
{
  char v4; // r4@1
  int *v5; // r2@2
  char *v6; // r0@2
  unsigned __int8 v8; // [sp+0h] [bp-Ch]@1
  int v9; // [sp+8h] [bp-4h]@3

  v4 = a4;
  if ( !(TryGetFieldObjectIdByLocalIdAndMap(a1, a2, a3, &v8) << 24) )
  {
    v5 = &dword_30048A0[9 * v8];
    v6 = &gSprites[68 * *((_BYTE *)v5 + 4)];
    *((_BYTE *)v5 + 3) |= 4u;
    v6[67] = v4;
  }
  return v9;
}
