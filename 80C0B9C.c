int sub_80C0B9C()
{
  int v0; // r4@1
  int v1; // r5@1
  char *v2; // r0@16
  _BYTE *v3; // r1@16
  _BYTE *v4; // r0@25
  int v6; // [sp+8h] [bp-4h]@0

  v0 = 36 * v202E8CC + 33717868;
  v202E8DC = 0;
  v1 = v20387E8;
  if ( v20387E8 <= 0xEu )
  {
    switch ( v20387E8 )
    {
      case 0u:
        sub_80C08FC(&gStringVar1, (_BYTE *)(36 * v202E8CC + 33717870), *(_BYTE *)(36 * v202E8CC + 0x2027E89));
        StringCopy(&gStringVar2, &gSpeciesNames[11 * *(_WORD *)(v0 + 10)]);
        if ( (unsigned int)*(_WORD *)(v0 + 22) <= 6 )
          v20387E8 = 2;
        else
          v20387E8 = 1;
        break;
      case 1u:
        sub_80BF088(0, *(_BYTE *)(36 * v202E8CC + 0x2027E86));
        sub_80BF088(1u, *(_WORD *)(v0 + 22));
        if ( *(_BYTE *)(v0 + 28) == 1 )
          v20387E8 = 3;
        else
          v20387E8 = 4;
        break;
      case 2u:
        sub_80C08FC(&gStringVar1, (_BYTE *)(36 * v202E8CC + 33717880), *(_BYTE *)(36 * v202E8CC + 0x2027E89));
        sub_80BF088(1u, *(_WORD *)(v0 + 22) + 1);
        goto _080C0CA2;
      case 3u:
        sub_80C08FC(&gStringVar1, (_BYTE *)(36 * v202E8CC + 33717880), *(_BYTE *)(36 * v202E8CC + 0x2027E89));
        StringCopy(&gStringVar2, &gSpeciesNames[11 * *(_WORD *)(v0 + 20)]);
_080C0CA2:
        if ( *(_BYTE *)(v0 + 27) )
          goto _080C0D18;
        goto _080C0CFE;
      case 4u:
        sub_80C08FC(&gStringVar1, (_BYTE *)(36 * v202E8CC + 33717880), *(_BYTE *)(36 * v202E8CC + 0x2027E89));
        StringCopy(&gStringVar2, &gSpeciesNames[11 * *(_WORD *)(v0 + 20)]);
        if ( *(_BYTE *)(v0 + 27) )
_080C0D18:
          v20387E8 = 6;
        else
_080C0CFE:
          v20387E8 = 5;
        break;
      case 5u:
        v2 = &gStringVar1;
        v3 = (_BYTE *)(36 * v202E8CC + 33717880);
        goto _080C0D46;
      case 6u:
        v2 = &gStringVar1;
        v3 = (_BYTE *)(36 * v202E8CC + 33717880);
        goto _080C0D46;
      case 7u:
        v20387E8 = 11;
        break;
      case 8u:
      case 9u:
      case 0xAu:
        v2 = &gStringVar1;
        v3 = (_BYTE *)(36 * v202E8CC + 33717870);
_080C0D46:
        sub_80C08FC(v2, v3, *(_BYTE *)(36 * v202E8CC + 0x2027E89));
        v20387E8 = 11;
        break;
      case 0xBu:
        sub_80EB3FC(&gStringVar1, *(_WORD *)(36 * v202E8CC + 0x2027E84));
        if ( *(_BYTE *)(v0 + 27) )
          v20387E8 = 13;
        else
          v20387E8 = 12;
        break;
      case 0xCu:
      case 0xDu:
        sub_80EB3FC(&gStringVar1, *(_WORD *)(36 * v202E8CC + 0x2027E84));
        sub_80C08FC(&gStringVar2, (_BYTE *)(v0 + 2), *(_BYTE *)(v0 + 29));
        sub_80C08FC(&gStringVar3, (_BYTE *)(v0 + 12), *(_BYTE *)(v0 + 29));
        v20387E8 = 14;
        break;
      case 0xEu:
        sub_80C08FC(&gStringVar1, (_BYTE *)(36 * v202E8CC + 33717870), *(_BYTE *)(36 * v202E8CC + 0x2027E89));
        v4 = StringCopy(&gStringVar2, &gSpeciesNames[11 * *(_WORD *)(v0 + 10)]);
        TVShowDone(v4);
        break;
      default:
        break;
    }
  }
  box_related_two__2((int)*(&gUnknown_083D1548 + v1));
  return v6;
}
