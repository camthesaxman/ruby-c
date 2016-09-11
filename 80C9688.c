int __fastcall sub_80C9688(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r6@1
  int v6; // r3@1
  signed int v7; // r0@1
  int v8; // r1@8
  int v9; // r0@8
  int v10; // r0@9
  int v11; // r0@10

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = mapconnection_get_mapheader(a1);
  v7 = *(_BYTE *)v3;
  if ( v7 == 2 )
  {
    v8 = (v4 - (*(_DWORD *)(v3 + 4) + 7)) & 0xFFFF;
    v9 = *(_DWORD *)(*(_DWORD *)v6 + 4) - 7 + v5;
    return (unsigned __int8)sub_80C962C(*(_DWORD *)(v6 + 4), v8, v9);
  }
  if ( v7 > 2 )
  {
    if ( v7 == 3 )
    {
      v11 = **(_DWORD **)v6 - 7 + v4;
    }
    else
    {
      if ( v7 != 4 )
        return 0;
      v11 = v4 - (*v202E828 + 7);
    }
    LOWORD(v8) = v11;
    v10 = *(_DWORD *)(v3 + 4);
    goto _080C96F6;
  }
  if ( v7 == 1 )
  {
    v8 = (v4 - (*(_DWORD *)(v3 + 4) + 7)) & 0xFFFF;
    v10 = *(_DWORD *)(v202E828 + 4);
_080C96F6:
    v9 = v5 - (v10 + 7);
    return (unsigned __int8)sub_80C962C(*(_DWORD *)(v6 + 4), v8, v9);
  }
  return 0;
}
