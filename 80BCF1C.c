int __fastcall sub_80BCF1C(unsigned __int8 a1)
{
  _BYTE *v1; // r4@1
  signed int v2; // r0@1
  unsigned int v3; // r0@10
  unsigned int v4; // r4@10
  __int16 v5; // r0@13
  __int16 v6; // r0@17
  __int16 v8; // [sp+0h] [bp-10h]@8
  int v9; // [sp+2h] [bp-Eh]@8
  int v10; // [sp+Ch] [bp-4h]@20

  v1 = &byte_3004B28[40 * a1];
  v2 = *((_WORD *)v1 + 1);
  if ( v2 == 1 )
  {
    PlayerGetDestCoords(&v8, &v9);
    if ( v8 != *((_WORD *)v1 + 2) || (signed __int16)v9 != *((_WORD *)v1 + 3) )
    {
      *((_WORD *)v1 + 2) = v8;
      *((_WORD *)v1 + 3) = v9;
      v3 = MapGridGetMetatileBehaviorAt(v8, (signed __int16)v9) << 24;
      v4 = v3 >> 24;
      if ( (unsigned __int8)sub_8057350(BYTE3(v3)) == 1 )
      {
        sub_80C6C90();
      }
      else if ( (unsigned __int8)sub_8057314(v4) == 1 )
      {
        v5 = MapGridGetMetatileIdAt(v8, (signed __int16)v9);
        sub_80C68A4(v5, v8, (signed __int16)v9);
      }
      else if ( (unsigned __int8)sub_8057328(v4) == 1 )
      {
        sub_80C6A54(v8, (signed __int16)v9);
      }
      else if ( (unsigned __int8)sub_805733C(v4) == 1 )
      {
        v6 = MapGridGetMetatileIdAt(v8, (signed __int16)v9);
        sub_80C6C30(v6);
      }
    }
  }
  else
  {
    if ( v2 <= 1 )
    {
      if ( *((_WORD *)v1 + 1) )
        return v10;
      PlayerGetDestCoords((_WORD *)v1 + 2, (_WORD *)v1 + 3);
      goto _080BD028;
    }
    if ( v2 == 2 && !(FieldEffectActiveListContains(v1[8]) << 24) )
    {
_080BD028:
      *((_WORD *)v1 + 1) = 1;
      return v10;
    }
  }
  return v10;
}
