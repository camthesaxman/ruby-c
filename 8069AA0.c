int __fastcall sub_8069AA0(unsigned __int8 a1)
{
  char *v1; // r6@1
  signed int v2; // r5@1
  char v3; // r0@7
  __int16 v4; // r8@9
  __int16 v5; // r10@9
  int v6; // r7@9
  char v7; // r0@11
  char v8; // r0@11
  int v9; // r7@11
  char v10; // r0@11
  signed int v11; // r1@11
  __int16 v12; // r10@21
  __int16 v13; // r8@21
  int v14; // r0@21
  __int16 v16; // [sp+0h] [bp-28h]@1
  int v17; // [sp+2h] [bp-26h]@1
  int v18; // [sp+4h] [bp-24h]@11
  int v19; // [sp+24h] [bp-4h]@27

  v1 = (char *)&unk_3004B28 + 40 * a1;
  PlayerGetDestCoords(&v16, &v17);
  v2 = *((_WORD *)v1 + 1);
  if ( v2 == 1 )
  {
    v4 = *((_WORD *)v1 + 3);
    v5 = *((_WORD *)v1 + 2);
    v6 = *((_WORD *)v1 + 2);
    if ( v16 == v6 && (signed __int16)v17 == v4 )
      return v19;
    v7 = MapGridGetMetatileBehaviorAt(v16, (signed __int16)v17);
    LOBYTE(v18) = MetatileBehavior_IsFortreeBridge(v7);
    v18 = (unsigned __int8)v18;
    v8 = MapGridGetMetatileBehaviorAt(v6, v4);
    v9 = (unsigned __int8)MetatileBehavior_IsFortreeBridge(v8);
    v10 = PlayerGetZCoord();
    v11 = 0;
    if ( !((v10 & 1) << 24) )
      v11 = 1;
    if ( v11 && (v18 == 1 || v9 == 1) )
      audio_play(71);
    if ( v9 )
    {
      sub_8069A3C(v5, v4);
      CurrentMapDrawMetatileAt(v5, v4);
      sub_80699D8(v16, v17);
      CurrentMapDrawMetatileAt(v16, (signed __int16)v17);
    }
    *((_WORD *)v1 + 4) = v5;
    *((_WORD *)v1 + 5) = v4;
    *((_WORD *)v1 + 2) = v16;
    *((_WORD *)v1 + 3) = v17;
    if ( !v9 )
      return v19;
    *((_WORD *)v1 + 6) = 16;
    *((_WORD *)v1 + 1) = 2;
  }
  else
  {
    if ( v2 <= 1 )
    {
      if ( *((_WORD *)v1 + 1) )
        return v19;
      *((_WORD *)v1 + 2) = v16;
      *((_WORD *)v1 + 3) = v17;
      v3 = MapGridGetMetatileBehaviorAt(v16, (signed __int16)v17);
      if ( MetatileBehavior_IsFortreeBridge(v3) << 24 )
      {
        sub_80699D8(v16, v17);
        CurrentMapDrawMetatileAt(v16, (signed __int16)v17);
      }
      goto _08069CA2;
    }
    if ( v2 != 2 )
      return v19;
  }
  --*((_WORD *)v1 + 6);
  v12 = *((_WORD *)v1 + 4);
  v13 = *((_WORD *)v1 + 5);
  v14 = *((_WORD *)v1 + 6) % 7;
  if ( (unsigned int)(signed __int16)v14 <= 7 )
  {
    switch ( v14 )
    {
      case 0:
        CurrentMapDrawMetatileAt(v12, v13);
        break;
      case 4:
        sub_80699D8(v12, v13);
        CurrentMapDrawMetatileAt(v12, v13);
        sub_8069A3C(v12, v13);
        break;
      default:
        break;
    }
  }
  if ( !*((_WORD *)v1 + 6) )
_08069CA2:
    *((_WORD *)v1 + 1) = 1;
  return v19;
}
