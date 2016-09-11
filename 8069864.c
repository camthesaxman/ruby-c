int __fastcall sub_8069864(unsigned __int8 a1)
{
  char *v1; // r4@1
  signed int v2; // r0@1
  unsigned __int8 v3; // r0@15
  int v4; // r0@17
  __int16 v6; // [sp+0h] [bp-18h]@1
  int v7; // [sp+2h] [bp-16h]@1
  int v8; // [sp+14h] [bp-4h]@22

  v1 = (char *)&unk_3004B28 + 40 * a1;
  PlayerGetDestCoords(&v6, &v7);
  v2 = *((_WORD *)v1 + 1);
  if ( v2 == 1 )
  {
    if ( v6 != *((_WORD *)v1 + 2) || (signed __int16)v7 != *((_WORD *)v1 + 3) )
    {
      if ( sub_806972C(v6, v7, *((_WORD *)v1 + 2), *((_WORD *)v1 + 3)) )
      {
        sub_80696C0(*((_WORD *)v1 + 2), *((_WORD *)v1 + 3), 1);
        sub_8069708(*((_WORD *)v1 + 2), *((_WORD *)v1 + 3), 0);
        *((_WORD *)v1 + 4) = *((_WORD *)v1 + 2);
        *((_WORD *)v1 + 5) = *((_WORD *)v1 + 3);
        *((_WORD *)v1 + 1) = 2;
        *((_WORD *)v1 + 6) = 8;
      }
      else
      {
        *((_WORD *)v1 + 4) = -1;
        *((_WORD *)v1 + 5) = -1;
      }
      if ( sub_80697C8(v6, v7, *((_WORD *)v1 + 2), *((_WORD *)v1 + 3)) )
      {
        sub_80696C0(v6, v7, 1);
        *((_WORD *)v1 + 1) = 2;
        *((_WORD *)v1 + 6) = 8;
      }
      *((_WORD *)v1 + 2) = v6;
      *((_WORD *)v1 + 3) = v7;
      v3 = MapGridGetMetatileBehaviorAt(v6, (signed __int16)v7);
      if ( MetatileBehavior_IsPacifidlogLog(v3) << 24 )
        audio_play(70);
    }
  }
  else
  {
    if ( v2 <= 1 )
    {
      if ( *((_WORD *)v1 + 1) )
        return v8;
      *((_WORD *)v1 + 2) = v6;
      *((_WORD *)v1 + 3) = v7;
      sub_80696E4(v6, v7, 1);
      goto _080699CA;
    }
    if ( v2 == 2 )
    {
      v4 = *((_WORD *)v1 + 6) - 1;
      *((_WORD *)v1 + 6) = v4;
      if ( !(v4 << 16) )
      {
        sub_80696E4(v6, v7, 1);
        if ( *((_WORD *)v1 + 4) != -1 && *((_WORD *)v1 + 5) != -1 )
          sub_8069708(*((_WORD *)v1 + 4), *((_WORD *)v1 + 5), 1);
_080699CA:
        *((_WORD *)v1 + 1) = 1;
        return v8;
      }
    }
  }
  return v8;
}
