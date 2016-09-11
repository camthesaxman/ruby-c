int __fastcall sub_8010494(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  __int16 v3; // r0@2
  _BYTE *v4; // r2@4
  signed int v5; // r0@4
  int v7; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 54) - 1;
  *(_WORD *)(v1 + 54) = v2;
  if ( !(v2 << 16) )
  {
    *(_WORD *)(v1 + 54) = 2;
    *(_WORD *)(v1 + 38) += 8;
    v3 = *(_WORD *)(v1 + 52) - 1;
    *(_WORD *)(v1 + 52) = v3;
    if ( v3 & 0x8000 )
    {
      FreeSpriteOamMatrix(v1);
      DestroySprite(v1);
    }
    else
    {
      v4 = (_BYTE *)(*(int *)((char *)&gUnknown_081FAF4C
                            + (4 * battle_get_per_side_status(*(_WORD *)(v1 + 46) & 0xFF) & 0x3FF))
                   + (*(_BYTE *)(*(_WORD *)(v1 + 46) + 0x2024E84) << 11)
                   + (*(_WORD *)(v1 + 52) << 8));
      v5 = 255;
      do
      {
        *v4++ = 0;
        --v5;
      }
      while ( v5 >= 0 );
      StartSpriteAnim(v1, *(_BYTE *)(*(_WORD *)(v1 + 46) + 0x2024E84));
    }
  }
  return v7;
}
