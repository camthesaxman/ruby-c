int DoTVShowPokemonFanClubLetter()
{
  int v0; // r5@1
  int v1; // r7@1
  unsigned int v2; // r2@4
  unsigned int v3; // r0@10
  int v4; // r0@10
  int v6; // [sp+10h] [bp-4h]@0

  v0 = 36 * v202E8CC + 33717868;
  v202E8DC = 0;
  v1 = v20387E8;
  if ( v20387E8 <= 0x33u )
  {
    switch ( v20387E8 )
    {
      case 0u:
        sub_80C08FC(&gStringVar1, (_BYTE *)(36 * v202E8CC + 33717884), *(_BYTE *)(36 * v202E8CC + 0x2027E84));
        StringCopy(&gStringVar2, &gSpeciesNames[11 * *(_WORD *)(v0 + 2)]);
        v20387E8 = 50;
        break;
      case 1u:
        v2 = (Random() & 3) + 1;
        if ( v2 == 1 )
          v20387E8 = 2;
        else
          v20387E8 = v2 + 2;
        break;
      case 2u:
        v20387E8 = 51;
        break;
      case 3u:
        v20387E8 += (unsigned __int16)Random() % 3u + 1;
        break;
      case 4u:
      case 5u:
      case 6u:
        sub_80BF79C(36 * v202E8CC + 33717868);
        v20387E8 = 7;
        break;
      case 7u:
        v3 = (unsigned __int16)Random() % 0x1Fu;
        v4 = sub_80BF088(2u, (v3 + 70) & 0xFFFF);
        TVShowDone(v4);
        break;
      case 0x32u:
        ConvertEasyChatWordsToString(&gStringVar4, 36 * v202E8CC + 33717872, 2, 2);
        box_related_two__2((int)&gStringVar4);
        v20387E8 = 1;
        return v6;
      case 0x33u:
        ConvertEasyChatWordsToString(&gStringVar4, 36 * v202E8CC + 33717872, 2, 2);
        box_related_two__2((int)&gStringVar4);
        v20387E8 = 3;
        return v6;
      default:
        break;
    }
  }
  box_related_two__2((int)*(&gUnknown_083D1470 + v1));
  return v6;
}
