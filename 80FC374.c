int sub_80FC374()
{
  unsigned int v0; // r9@1
  int v1; // r7@3
  int v2; // r5@6
  __int16 v4; // [sp+4h] [bp-38h]@2
  __int16 v5; // [sp+6h] [bp-36h]@1
  int v6; // [sp+8h] [bp-34h]@1
  __int16 v7; // [sp+Ah] [bp-32h]@1
  int v8; // [sp+Ch] [bp-30h]@1
  int *v9; // [sp+10h] [bp-2Ch]@1
  __int16 *v10; // [sp+14h] [bp-28h]@1
  __int16 *v11; // [sp+18h] [bp-24h]@1
  int v12; // [sp+38h] [bp-4h]@12

  v8 = 2063;
  v0 = 0;
  v10 = &v5;
  v11 = &v7;
  v9 = &v6;
  do
  {
    sub_80FC04C(v0, &v4, &v5, v9, v11);
    v4 = 8 * (v4 + 1) + 4;
    v5 = 8 * (v5 + 2) + 4;
    if ( *(_WORD *)v9 == 2 )
    {
      v1 = 1;
    }
    else
    {
      v1 = 0;
      if ( *v11 == 2 )
        v1 = 2;
    }
    v2 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83E7A38, v4, *v10);
    if ( v2 != 64 )
    {
      gSprites[68 * v2 + 1] = gSprites[68 * v2 + 1] & 0x3F | ((_BYTE)v1 << 6);
      if ( FlagGet(v8) << 24 )
        dword_2020020[17 * v2] = (int)sub_80FC55C;
      else
        v1 = (v1 + 3) & 0xFFFF;
      StartSpriteAnim((int)&gSprites[68 * v2], v1);
      *(_WORD *)&gSprites[68 * v2 + 46] = v0;
    }
    v8 = (v8 + 1) & 0xFFFF;
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 0xF );
  return v12;
}
