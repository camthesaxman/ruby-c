int DoTVShowTheNameRaterShow()
{
  int v0; // r6@1
  signed int v1; // r7@1
  int v2; // r0@4
  int v3; // r0@10
  int v4; // r0@24
  int v6; // [sp+18h] [bp-4h]@0

  v0 = 36 * v202E8CC + 33717868;
  v202E8DC = 0;
  v1 = v20387E8;
  if ( v20387E8 <= 0x12u )
  {
    switch ( v20387E8 )
    {
      case 0u:
        sub_80C08FC(&gStringVar1, (_BYTE *)(36 * v202E8CC + 33717883), *(_BYTE *)(36 * v202E8CC + 0x2027E8A));
        StringCopy(&gStringVar2, &gSpeciesNames[11 * *(_WORD *)(v0 + 2)]);
        sub_80C08FC(&gStringVar3, (_BYTE *)(v0 + 4), *(_BYTE *)(v0 + 31));
        v20387E8 = sub_80BF7E8(v0) + 1;
        break;
      case 1u:
      case 3u:
      case 4u:
      case 5u:
      case 6u:
      case 7u:
      case 8u:
        v2 = *(_BYTE *)(36 * v202E8CC + 0x2027E86);
        if ( *(_BYTE *)(36 * v202E8CC + 0x2027E86) )
        {
          if ( v2 == 1 )
          {
            v20387E8 = 10;
          }
          else if ( v2 == 2 )
          {
            v20387E8 = 11;
          }
        }
        else
        {
          v20387E8 = 9;
        }
        break;
      case 2u:
        sub_80C08FC(&gStringVar1, (_BYTE *)(36 * v202E8CC + 33717883), *(_BYTE *)(36 * v202E8CC + 0x2027E8A));
        v3 = *(_BYTE *)(v0 + 26);
        if ( *(_BYTE *)(v0 + 26) )
        {
          if ( v3 == 1 )
          {
            v20387E8 = 10;
          }
          else if ( v3 == 2 )
          {
            v20387E8 = 11;
          }
        }
        else
        {
          v20387E8 = 9;
        }
        break;
      case 9u:
      case 0xAu:
      case 0xBu:
        sub_80BF820(0, 1u, 0, 1, 0, 36 * v202E8CC + 33717868);
        sub_80C08FC(&gStringVar3, &gStringVar1, *(_BYTE *)(v0 + 31));
        sub_80BF820(0, 0, 0, 1, 0, v0);
        sub_80C08FC(&gStringVar2, &gStringVar1, *(_BYTE *)(v0 + 31));
        sub_80C08FC(&gStringVar1, (_BYTE *)(v0 + 4), *(_BYTE *)(v0 + 31));
        v20387E8 = 12;
        break;
      case 0xDu:
        sub_80BF820(0, 0, 3u, 1, 0, 36 * v202E8CC + 33717868);
        sub_80C08FC(&gStringVar3, &gStringVar1, *(_BYTE *)(v0 + 31));
        sub_80BF820(0, 0, 2u, 0, 0, v0);
        sub_80C08FC(&gStringVar2, &gStringVar1, *(_BYTE *)(v0 + 30));
        sub_80C08FC(&gStringVar1, (_BYTE *)(v0 + 15), *(_BYTE *)(v0 + 30));
        v20387E8 = 14;
        break;
      case 0xEu:
        sub_80BF820(0, 0, 3u, 0, 0, 36 * v202E8CC + 33717868);
        sub_80C08FC(&gStringVar3, &gStringVar1, *(_BYTE *)(v0 + 30));
        sub_80BF820(0, 0, 2u, 1, 0, v0);
        sub_80C08FC(&gStringVar2, &gStringVar1, *(_BYTE *)(v0 + 31));
        sub_80C08FC(&gStringVar1, (_BYTE *)(v0 + 15), *(_BYTE *)(v0 + 30));
        goto _080C1354;
      case 0xFu:
        sub_80BF820(1u, 0, 2u, 1, 0, 36 * v202E8CC + 33717868);
        sub_80C08FC(&gStringVar1, &gStringVar2, *(_BYTE *)(v0 + 31));
        StringCopy(&gStringVar2, &gSpeciesNames[11 * *(_WORD *)(v0 + 2)]);
        sub_80BF820(2u, 0, 3u, 2, *(_WORD *)(v0 + 2), v0);
        v20387E8 = 16;
        break;
      case 0x10u:
        sub_80BF820(0, 0, 3u, 1, 0, 36 * v202E8CC + 33717868);
        sub_80C08FC(&gStringVar3, &gStringVar1, *(_BYTE *)(v0 + 31));
        sub_80BF820(0, 0, 2u, 2, *(_WORD *)(v0 + 2), v0);
        v20387E8 = 17;
        break;
      case 0x11u:
        sub_80BF820(1u, 0, 2u, 1, 0, 36 * v202E8CC + 33717868);
        sub_80C08FC(&gStringVar1, &gStringVar2, *(_BYTE *)(v0 + 31));
        sub_80BF820(2u, 0, 3u, 2, *(_WORD *)(v0 + 28), v0);
        StringCopy(&gStringVar2, &gSpeciesNames[11 * *(_WORD *)(v0 + 28)]);
_080C1354:
        v20387E8 = 18;
        break;
      case 0xCu:
        v1 = 18;
        v20387E8 = 18;
        goto _080C1370;
      case 0x12u:
_080C1370:
        sub_80C08FC(&gStringVar1, (_BYTE *)(36 * v202E8CC + 33717872), *(_BYTE *)(36 * v202E8CC + 0x2027E8B));
        v4 = sub_80C08FC(&gStringVar2, (_BYTE *)(v0 + 15), *(_BYTE *)(v0 + 30));
        TVShowDone(v4);
        break;
      default:
        break;
    }
  }
  box_related_two__2((int)*(&gUnknown_083D1584 + v1));
  return v6;
}
