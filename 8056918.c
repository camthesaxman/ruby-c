int __fastcall sub_8056918(int a1, signed int a2, __int16 a3, int a4)
{
  int v4; // r5@1
  signed int v5; // r4@1
  __int16 v6; // r6@1
  int v7; // r7@1
  int v8; // r0@1
  int v10; // [sp+10h] [bp-4h]@0

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = mapconnection_get_mapheader(a1);
  if ( v5 == 2 )
  {
    v2025734 -= *(_DWORD *)(v4 + 4);
    v8 = *(_DWORD *)(*(_DWORD *)v8 + 4);
    goto _08056986;
  }
  if ( v5 <= 2 )
  {
    if ( v5 != 1 )
      return v10;
    v2025734 -= *(_DWORD *)(v4 + 4);
    v8 = -v7;
    goto _08056986;
  }
  if ( v5 == 3 )
  {
    v2025734 = **(_DWORD **)v8;
    LOWORD(v8) = v2025736 - *(_DWORD *)(v4 + 4);
    goto _08056986;
  }
  if ( v5 == 4 )
  {
    v2025734 = -v6;
    LOWORD(v8) = v2025736 - *(_DWORD *)(v4 + 4);
_08056986:
    v2025736 = v8;
  }
  return v10;
}
