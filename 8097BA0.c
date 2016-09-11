int sub_8097BA0()
{
  int v0; // r0@6
  int v1; // r1@8
  int v2; // r0@14
  int v4; // [sp+4h] [bp-4h]@0

  if ( v2000004 <= 4u )
  {
    switch ( v2000004 )
    {
      case 0u:
        if ( sub_809BF20() << 24 )
        {
          audio_play(0x20u);
          sub_8098898(15);
          v2000004 = 1;
        }
        else
        {
          audio_play(5u);
          sub_8098898(0);
          sub_8098A38(0);
          v2000004 = 2;
        }
        return v4;
      case 1u:
        v0 = word_300179E & 0xF3;
        if ( word_300179E & 0xF3 )
          goto _08097C4A;
        return v4;
      case 2u:
        v0 = ProcessMenuInputNoWrap() << 24;
        v1 = v0 >> 24;
        if ( v0 >> 24 )
        {
          if ( v1 > 0 )
          {
            if ( v1 != 1 )
              return v4;
          }
          else
          {
            v0 = -1;
            if ( v1 != -1 )
              return v4;
          }
_08097C4A:
          sub_8098A5C(v0);
          sub_8096BE0((int)sub_8096C84);
        }
        else
        {
          v2 = audio_play(3u);
          sub_8098A5C(v2);
          ++v2000004;
        }
        break;
      case 3u:
        v200000C = 14;
        v200000E = -9520;
        v2000010 = 20;
        v2000012 = 0;
        sub_80C5E38(33554444);
        ++v2000004;
        return v4;
      case 4u:
        if ( sub_80C5F98() << 24 )
        {
          byte_3004350 = calc_player_party_count();
          SetMainCallback2((int)sub_80961A8);
        }
        return v4;
      default:
        return v4;
    }
  }
  return v4;
}
