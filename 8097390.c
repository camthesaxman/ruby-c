int sub_8097390()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( v2000004 <= 5u )
  {
    switch ( v2000004 )
    {
      case 0u:
        if ( (unsigned __int8)calc_player_party_count() == 6 )
        {
          sub_8098898(14);
          v2000004 = 1;
        }
        else
        {
          sub_809B0E0();
          sub_809B100(0);
          v2000004 = 2;
        }
        break;
      case 1u:
        if ( word_300179E & 0xF3 )
        {
          sub_8098A5C(word_300179E & 0xF3);
          sub_8096BE0((int)sub_8096C84);
        }
        break;
      case 2u:
        if ( !(sub_809B130() << 24) )
        {
          sub_809880C();
          goto _0809744C;
        }
        break;
      case 3u:
        if ( !(sub_8098830() << 24) )
        {
          sub_809B100(1);
          goto _0809744C;
        }
        break;
      case 4u:
        if ( !(sub_809B130() << 24) )
        {
          sub_80987DC();
_0809744C:
          ++v2000004;
        }
        break;
      case 5u:
        sub_8096BE0((int)sub_8097004);
        break;
      default:
        return v1;
    }
  }
  return v1;
}
