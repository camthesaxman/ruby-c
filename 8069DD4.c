int __fastcall sub_8069DD4(unsigned __int8 a1)
{
  char *v1; // r5@1
  signed int v2; // r0@1
  char v3; // r4@11
  _WORD *v4; // r6@11
  signed __int16 v5; // r0@12
  __int16 v6; // r1@16
  __int16 v8; // [sp+0h] [bp-18h]@8
  int v9; // [sp+2h] [bp-16h]@8
  int v10; // [sp+14h] [bp-4h]@22

  v1 = (char *)&unk_3004B28 + 40 * a1;
  v2 = *((_WORD *)v1 + 1);
  if ( v2 != 1 )
  {
    if ( v2 <= 1 )
    {
      if ( *((_WORD *)v1 + 1) )
        return v10;
      PlayerGetDestCoords(&v8, &v9);
      *((_WORD *)v1 + 2) = v8;
      *((_WORD *)v1 + 3) = v9;
      goto _08069F52;
    }
    if ( v2 == 2 )
    {
      v6 = *((_WORD *)v1 + 6);
      if ( *((_WORD *)v1 + 6) )
      {
_08069F1A:
        *((_WORD *)v1 + 6) = v6 - 1;
        return v10;
      }
      v8 = *((_WORD *)v1 + 4);
      LOWORD(v9) = *((_WORD *)v1 + 5);
      audio_play(42);
      MapGridSetMetatileIdAt(v8, (signed __int16)v9, 526);
      CurrentMapDrawMetatileAt(v8, (signed __int16)v9);
      sub_8069CFC(v8 - 7, v9 - 7);
    }
    else
    {
      if ( v2 != 3 )
        return v10;
      v6 = *((_WORD *)v1 + 6);
      if ( *((_WORD *)v1 + 6) )
        goto _08069F1A;
      v8 = *((_WORD *)v1 + 4);
      LOWORD(v9) = *((_WORD *)v1 + 5);
      audio_play(41);
      MapGridSetMetatileIdAt(v8, (signed __int16)v9, 518);
      CurrentMapDrawMetatileAt(v8, (signed __int16)v9);
    }
_08069F52:
    *((_WORD *)v1 + 1) = 1;
    return v10;
  }
  PlayerGetDestCoords(&v8, &v9);
  if ( v8 != *((_WORD *)v1 + 2) || (signed __int16)v9 != *((_WORD *)v1 + 3) )
  {
    *((_WORD *)v1 + 2) = v8;
    *((_WORD *)v1 + 3) = v9;
    v3 = MapGridGetMetatileBehaviorAt(v8, (signed __int16)v9);
    v4 = (_WORD *)GetVarPointer(0x4022u);
    if ( (unsigned __int8)sub_8057540(v3) == 1 )
    {
      ++*v4;
      *((_WORD *)v1 + 6) = 4;
      v5 = 2;
_08069EA8:
      *((_WORD *)v1 + 1) = v5;
      *((_WORD *)v1 + 4) = v8;
      *((_WORD *)v1 + 5) = v9;
      return v10;
    }
    if ( (unsigned __int8)sub_8057554(v3) == 1 )
    {
      *v4 = 0;
      *((_WORD *)v1 + 6) = 4;
      v5 = 3;
      goto _08069EA8;
    }
  }
  return v10;
}
