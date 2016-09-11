int __fastcall sub_806A07C(unsigned __int8 a1)
{
  char *v1; // r5@1
  char v2; // r6@1
  int v3; // r1@1
  int v4; // r1@4
  __int16 v6; // [sp+0h] [bp-18h]@1
  int v7; // [sp+2h] [bp-16h]@1
  int v8; // [sp+14h] [bp-4h]@18

  v1 = (char *)&unk_3004B28 + 40 * a1;
  PlayerGetDestCoords(&v6, &v7);
  v2 = MapGridGetMetatileBehaviorAt(v6, (signed __int16)v7);
  v3 = *((_WORD *)v1 + 4);
  if ( *((_WORD *)v1 + 4) )
  {
    *((_WORD *)v1 + 4) = v3 - 1;
    if ( !((v3 - 1) << 16) )
      sub_806A040(*((_WORD *)v1 + 5), *((_WORD *)v1 + 6));
  }
  v4 = *((_WORD *)v1 + 7);
  if ( *((_WORD *)v1 + 7) )
  {
    *((_WORD *)v1 + 7) = v4 - 1;
    if ( !((v4 - 1) << 16) )
      sub_806A040(*((_WORD *)v1 + 8), *((_WORD *)v1 + 9));
  }
  if ( sub_8057818(v2) << 24 )
    VarSet(0x4022u, 0);
  if ( v6 != *((_WORD *)v1 + 2) || (signed __int16)v7 != *((_WORD *)v1 + 3) )
  {
    *((_WORD *)v1 + 2) = v6;
    *((_WORD *)v1 + 3) = v7;
    if ( sub_805782C(v2) << 24 )
    {
      if ( (signed __int16)sub_80E6034() != 4 )
        VarSet(0x4022u, 0);
      if ( *((_WORD *)v1 + 4) )
      {
        if ( !*((_WORD *)v1 + 7) )
        {
          *((_WORD *)v1 + 7) = 3;
          *((_WORD *)v1 + 8) = v6;
          *((_WORD *)v1 + 9) = v7;
        }
      }
      else
      {
        *((_WORD *)v1 + 4) = 3;
        *((_WORD *)v1 + 5) = v6;
        *((_WORD *)v1 + 6) = v7;
      }
    }
  }
  return v8;
}
