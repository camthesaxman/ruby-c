int DoTVShowTodaysSmartShopper()
{
  int v0; // r5@1
  int v1; // r6@1
  char *v2; // r0@6
  char *v3; // r0@13
  char *v4; // r0@15
  int v5; // r0@20
  char *v6; // r0@24
  int v7; // r0@27
  int v9; // [sp+Ch] [bp-4h]@0

  v0 = 36 * v202E8CC + 33717868;
  v202E8DC = 0;
  v1 = v20387E8;
  if ( v20387E8 <= 0xCu )
  {
    switch ( v20387E8 )
    {
      case 0u:
        sub_80C08FC(&gStringVar1, (_BYTE *)(36 * v202E8CC + 33717887), *(_BYTE *)(36 * v202E8CC + 0x2027E6F));
        sub_80FBFB4(&gStringVar2, *(_BYTE *)(v0 + 18), 0);
        if ( (unsigned int)*(_WORD *)(v0 + 12) <= 0xFE )
          v20387E8 = 1;
        else
          v20387E8 = 11;
        break;
      case 1u:
        sub_80C08FC(&gStringVar1, (_BYTE *)(36 * v202E8CC + 33717887), *(_BYTE *)(36 * v202E8CC + 0x2027E6F));
        v2 = itemid_get_item(*(_WORD *)(v0 + 6));
        StringCopy(&gStringVar2, v2);
        sub_80BF088(2u, *(_WORD *)(v0 + 12));
        v20387E8 += (Random() & 3) + 1;
        break;
      case 2u:
      case 4u:
      case 5u:
        if ( *(_WORD *)(36 * v202E8CC + 0x2027E74) )
          v20387E8 = 6;
        else
          v20387E8 = 10;
        break;
      case 3u:
        sub_80BF088(2u, *(_WORD *)(36 * v202E8CC + 0x2027E78) + 1);
        if ( *(_WORD *)(v0 + 8) )
          v20387E8 = 6;
        else
          v20387E8 = 10;
        break;
      case 6u:
        v3 = itemid_get_item(*(_WORD *)(36 * v202E8CC + 0x2027E74));
        StringCopy(&gStringVar2, v3);
        sub_80BF088(2u, *(_WORD *)(v0 + 14));
        if ( !*(_WORD *)(v0 + 10) )
          goto _080C0F7C;
        v20387E8 = 7;
        break;
      case 7u:
        v4 = itemid_get_item(*(_WORD *)(36 * v202E8CC + 0x2027E76));
        StringCopy(&gStringVar2, v4);
        sub_80BF088(2u, *(_WORD *)(v0 + 16));
_080C0F7C:
        if ( *(_BYTE *)(v0 + 2) == 1 )
          goto _080C0FE2;
        v20387E8 = 9;
        break;
      case 8u:
        if ( (unsigned int)*(_WORD *)(36 * v202E8CC + 0x2027E78) <= 0xFE )
          goto _080C0FBA;
        v20387E8 = 12;
        break;
      case 9u:
        v5 = sub_80BF154(1u, 36 * v202E8CC + 33717868);
        TVShowDone(v5);
        break;
      case 0xAu:
        if ( *(_BYTE *)(36 * v202E8CC + 0x2027E6E) == 1 )
          v20387E8 = 8;
        else
_080C0FBA:
          v20387E8 = 9;
        break;
      case 0xBu:
        sub_80C08FC(&gStringVar1, (_BYTE *)(36 * v202E8CC + 33717887), *(_BYTE *)(36 * v202E8CC + 0x2027E6F));
        v6 = itemid_get_item(*(_WORD *)(v0 + 6));
        StringCopy(&gStringVar2, v6);
        if ( *(_BYTE *)(v0 + 2) == 1 )
_080C0FE2:
          v20387E8 = 8;
        else
          v20387E8 = 12;
        break;
      case 0xCu:
        v7 = sub_80C08FC(&gStringVar1, (_BYTE *)(36 * v202E8CC + 33717887), *(_BYTE *)(36 * v202E8CC + 0x2027E6F));
        TVShowDone(v7);
        break;
      default:
        break;
    }
  }
  box_related_two__2((int)*(&gUnknown_083D14F0 + v1));
  return v9;
}
