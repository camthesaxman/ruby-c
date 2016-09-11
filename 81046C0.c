int __fastcall sub_81046C0(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@1
  signed int v3; // r0@2
  int v4; // r0@2
  int v6; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 16) + 1;
  *(_WORD *)(v1 + 16) = v2;
  if ( v2 > 59 )
  {
    v3 = sub_8074D08();
    v4 = sub_81056C0(v3);
    sub_8105804(v4);
    ++*(_WORD *)(v1 + 8);
    if ( v2000005 )
    {
      *(_WORD *)(v1 + 16) = 192;
      StartSpriteAnimIfDifferent((int)&gSprites[68 * v200003F], 4);
      gSprites[68 * v200003F + 43] = 0;
      if ( v2000002 )
      {
        sub_8104098();
        v2000002 = 0;
      }
      fanfare_play(0x186u);
    }
    else
    {
      *(_WORD *)(v1 + 16) = 160;
      StartSpriteAnimIfDifferent((int)&gSprites[68 * v200003F], 5);
      fanfare_play(0x187u);
    }
  }
  return v6;
}
