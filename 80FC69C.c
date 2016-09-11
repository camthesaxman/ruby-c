int sub_80FC69C()
{
  unsigned __int8 v0; // r1@15
  _BOOL4 v1; // r0@17
  int v2; // r2@21
  int v4; // [sp+8h] [bp-4h]@0

  if ( v2000004 )
  {
    if ( v2000004 == 1 && !(UpdatePaletteFade() << 24) )
    {
      sub_80FAB10();
      if ( !v2000A6E )
      {
        SetMainCallback2((int)sub_808AD58);
        return v4;
      }
      if ( v200001C == 15 )
      {
        v1 = FlagGet(0x854u);
        v0 = 11;
        if ( v1 << 24 && !v200001F )
          v0 = 20;
      }
      else
      {
        if ( (signed int)v200001C > 15 )
        {
          if ( v200001C == 58 )
          {
            sub_8053538(0x15u);
          }
          else
          {
            if ( v200001C != 73 )
              goto _080FC748;
            sub_8053538(0x16u);
          }
_080FC786:
          sub_80865BC();
          return v4;
        }
        if ( v200001C )
        {
_080FC748:
          v2 = 3 * v200001C;
          if ( gUnknown_083E7920[v2 + 2] )
            sub_8053538(gUnknown_083E7920[v2 + 2]);
          else
            warp1_set_2(gUnknown_083E7920[v2], gUnknown_083E7920[v2 + 1], -1);
          goto _080FC786;
        }
        v0 = 13;
        if ( !v2024EAC )
          v0 = 12;
      }
      sub_8053538(v0);
      goto _080FC786;
    }
  }
  else
  {
    BeginNormalPaletteFade(-1, 0, 0, 0x10u, v2000004);
    ++v2000004;
  }
  return v4;
}
