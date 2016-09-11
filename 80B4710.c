int __fastcall sub_80B4710(unsigned __int8 a1)
{
  unsigned __int8 v1; // r3@1
  _BYTE *v2; // r4@1
  unsigned int v3; // r0@1
  void *v4; // r1@3
  void *v5; // r1@5
  int v6; // r0@12
  __int16 v7; // r5@12
  int v9; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &byte_3004B28[40 * a1];
  *((_WORD *)v2 + 3) = 1;
  v3 = *(_WORD *)v2;
  if ( v3 <= 6 )
  {
    switch ( v3 )
    {
      case 0u:
        v4 = &gUnknown_083CC714;
        goto _080B4792;
      case 1u:
        v4 = &gUnknown_083CC71A;
        goto _080B4792;
      case 2u:
        v5 = &gUnknown_083CC720;
        goto _080B477E;
      case 3u:
        v4 = &gUnknown_083CC726;
        goto _080B4792;
      case 4u:
        v5 = &gUnknown_083CC72C;
_080B477E:
        sub_80B45B4(v1, (int)v5, 3072);
        break;
      case 5u:
        v4 = &gUnknown_083CC732;
_080B4792:
        sub_80B45B4(v1, (int)v4, 0);
        break;
      case 6u:
        sub_80B45B4(v1, (int)&gUnknown_083CC738, 0);
        break;
      default:
        break;
    }
  }
  v6 = (*(_WORD *)v2 + 1) & 7;
  *(_WORD *)v2 = v6;
  v7 = v6;
  if ( !v6 )
  {
    DrawWholeMapView();
    *((_WORD *)v2 + 1) = (*((_WORD *)v2 + 1) + 1) % 3;
    *((_WORD *)v2 + 3) = v7;
  }
  return v9;
}
