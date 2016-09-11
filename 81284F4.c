signed int __fastcall ShowDisguiseFieldEffect(unsigned __int8 a1, unsigned __int8 a2, char a3)
{
  unsigned __int8 v3; // r4@1
  __int16 v4; // r8@1
  int v5; // r6@1
  char v6; // r7@1
  signed int result; // r0@2
  char *v8; // r2@4
  unsigned __int8 v9; // [sp+0h] [bp-1Ch]@1

  v3 = a1;
  v4 = a1;
  v5 = a2;
  v6 = a3;
  if ( TryGetFieldObjectIdByLocalIdAndMap(v202FF84, v202FF88, v202FF8C, &v9) << 24 )
  {
    FieldEffectActiveListRemove(v3);
    result = 64;
  }
  else
  {
    v9 = CreateSpriteAtEnd((int)*(&gFieldEffectObjectTemplatePointers + v5), 0, 0);
    if ( v9 != 64 )
    {
      v8 = &gSprites[68 * v9];
      v8[62] = v8[62] & 0xFD | 2 * ((((unsigned int)(unsigned __int8)v8[62] << 30 >> 31) + 1) & 1);
      v8[5] = v8[5] & 0xF | 16 * v6;
      *((_WORD *)v8 + 24) = v4;
      *((_WORD *)v8 + 25) = v202FF84;
      *((_WORD *)v8 + 26) = v202FF88;
      *((_WORD *)v8 + 27) = v202FF8C;
    }
    result = v9;
  }
  return result;
}
