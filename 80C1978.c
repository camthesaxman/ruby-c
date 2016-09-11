int DoTVShowRecentHappenings()
{
  int v0; // r5@1
  int v1; // r6@1
  int v3; // [sp+10h] [bp-4h]@0

  v0 = 36 * v202E8CC + 33717868;
  v202E8DC = 0;
  v1 = v20387E8;
  if ( v20387E8 <= 0x32u )
  {
    switch ( v20387E8 )
    {
      case 0u:
        sub_80C08FC(&gStringVar1, (_BYTE *)(36 * v202E8CC + 33717884), *(_BYTE *)(36 * v202E8CC + 0x2027E84));
        sub_80BF79C(v0);
        v20387E8 = 50;
        break;
      case 1u:
        v20387E8 += (unsigned __int16)Random() % 3u + 1;
        break;
      case 2u:
      case 3u:
      case 4u:
        v20387E8 = 5;
        break;
      case 5u:
        TVShowDone(33785832);
        break;
      case 0x32u:
        ConvertEasyChatWordsToString(&gStringVar4, 36 * v202E8CC + 33717872, 2, 2);
        box_related_two__2((int)&gStringVar4);
        v20387E8 = 1;
        return v3;
      default:
        break;
    }
  }
  box_related_two__2((int)gUnknown_083D1490[v1]);
  return v3;
}
