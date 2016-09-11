int __fastcall sub_810E490(int a1)
{
  int v1; // r4@1
  char v2; // r6@1
  char v3; // r5@1
  signed int v4; // r0@2
  __int16 v5; // r0@12
  int v7; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  v3 = 0;
  if ( *(_WORD *)(a1 + 14) != 6 )
    goto _0810E4FC;
  *(_WORD *)(a1 + 14) = 0;
  v4 = (unsigned __int8)player_get_direction_lower_nybble();
  if ( v4 == 3 )
  {
    v2 = -1;
    goto _0810E4CA;
  }
  if ( v4 <= 3 )
  {
    if ( v4 != 2 )
      goto _0810E4CC;
    v2 = 0;
_0810E4CA:
    v3 = -1;
    goto _0810E4CC;
  }
  if ( v4 == 4 )
  {
    v2 = 1;
    goto _0810E4CA;
  }
_0810E4CC:
  sub_810E508(*(_WORD *)(v1 + 16), v2, v3);
  DrawWholeMapView();
  *(_WORD *)(v1 + 16) ^= 1u;
  v5 = *(_WORD *)(v1 + 12) + 1;
  *(_WORD *)(v1 + 12) = v5;
  if ( v5 == 5 )
    DestroyTask(*(_BYTE *)(v1 + 10));
_0810E4FC:
  ++*(_WORD *)(v1 + 14);
  return v7;
}
