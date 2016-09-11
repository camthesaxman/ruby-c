int __fastcall sub_805BD90(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3, __int16 a4, __int16 a5)
{
  __int16 v5; // r5@1
  char *v6; // r0@2
  unsigned __int8 v8; // [sp+0h] [bp-10h]@1
  int v9; // [sp+Ch] [bp-4h]@3

  v5 = a4;
  if ( !(TryGetFieldObjectIdByLocalIdAndMap(a1, a2, a3, &v8) << 24) )
  {
    v6 = &gSprites[68 * LOBYTE(dword_30048A0[9 * v8 + 1])];
    *((_WORD *)v6 + 18) = v5;
    *((_WORD *)v6 + 19) = a5;
  }
  return v9;
}
