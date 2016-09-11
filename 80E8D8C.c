int __fastcall sub_80E8D8C(char a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  if ( v200AC74 )
  {
    if ( a1 )
    {
      if ( v2001026 )
        StartSpriteAnim(v200AC74, 4);
      else
        StartSpriteAnim(v200AC74, 3);
    }
    else
    {
      StartSpriteAnim(v200AC74, 5);
    }
  }
  return v2;
}
