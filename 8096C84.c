int sub_8096C84()
{
  unsigned int v0; // r0@3
  int v1; // r2@10
  int v2; // r3@10
  signed __int16 v3; // r0@18
  int v4; // r2@23
  int v5; // r3@23
  int v6; // r0@44
  signed int v7; // r0@48
  int v9; // [sp+4h] [bp-4h]@0

  if ( v2000004 <= 6u )
  {
    switch ( v2000004 )
    {
      case 0u:
        v0 = (unsigned __int8)sub_809CA40() - 1;
        if ( v0 <= 0xF )
        {
          switch ( v0 )
          {
            case 0u:
              audio_play(5u);
              v2000004 = 1;
              return v9;
            case 4u:
              if ( v2000005 == 2 )
              {
                sub_809B0D4();
                sub_8096BE0((int)sub_8096FC8);
              }
              else
              {
                sub_8098898(16);
                v2000004 = 3;
              }
              return v9;
            case 5u:
              if ( v2000005 == 2 )
              {
                if ( sub_809BF20() << 24 && itemid_is_mail(v20011F2, 4594, v1, v2) << 24 )
                  goto _08096E4C;
                sub_8096BE0((int)sub_8097004);
              }
              return v9;
            case 3u:
              sub_8096BE0((int)sub_8097BA0);
              return v9;
            case 0xFu:
              sub_8096BE0((int)sub_8097CC0);
              return v9;
            case 6u:
              audio_play(5u);
              sub_8096BE0((int)sub_809789C);
              return v9;
            case 7u:
              audio_play(5u);
              sub_8096BE0((int)sub_8097078);
              return v9;
            case 8u:
              audio_play(5u);
              v20008B2 = v20300A0 + 1;
              if ( v20300A0 + 1 <= 13 )
                goto _08096E18;
              v3 = 0;
              goto _08096E16;
            case 9u:
              audio_play(5u);
              v20008B2 = v20300A0 - 1;
              if ( v20300A0 - 1 < 0 )
              {
                v3 = 13;
_08096E16:
                v20008B2 = v3;
              }
_08096E18:
              sub_8099C70(v20008B2);
              v2000004 = 2;
              return v9;
            case 0xAu:
              if ( sub_809BE80() << 24 )
                goto _08096E96;
              if ( itemid_is_mail(v20011F2, 4594, v4, v5) << 24 )
              {
_08096E4C:
                v2000004 = 5;
              }
              else
              {
                audio_play(5u);
                sub_8096BE0((int)sub_809746C);
              }
              return v9;
            case 0xCu:
              if ( sub_809BE80() << 24 )
                goto _08096E96;
              audio_play(5u);
              sub_8096BE0((int)sub_80972A8);
              break;
            case 0xDu:
              if ( sub_809BEBC() << 24 )
              {
                audio_play(5u);
                sub_8096BE0((int)c3_0808DC50);
              }
              else
              {
_08096E96:
                v2000004 = 4;
              }
              break;
            case 0xBu:
              audio_play(5u);
              sub_8096BE0((int)sub_8097390);
              break;
            case 0xEu:
              audio_play(5u);
              sub_8096BE0((int)sub_80972FC);
              break;
            default:
              return v9;
          }
        }
        break;
      case 1u:
        if ( !(sub_809AC00() << 24) )
        {
          if ( sub_809BF48() << 24 )
            sub_80986E8();
          else
            sub_8098710();
          if ( v20011F6 )
            BoxSetMosaic(v20011F6);
          v2000004 = 0;
        }
        break;
      case 2u:
        if ( !(sub_8099D34() << 24) )
        {
          v20300A0 = v20008B2;
          if ( !v203847C && !(sub_809BF20() << 24) )
          {
            v6 = sub_809B440();
            BoxSetMosaic(v6);
          }
          goto _08096F70;
        }
        break;
      case 3u:
        if ( word_300179E & 0xF3 )
        {
          sub_8098A5C();
_08096F70:
          v2000004 = 0;
        }
        break;
      case 4u:
        audio_play(0x20u);
        v7 = 13;
        goto _08096F92;
      case 5u:
        audio_play(0x20u);
        v7 = 22;
_08096F92:
        sub_8098898(v7);
        v2000004 = 6;
        break;
      case 6u:
        if ( word_300179E & 0xF3 )
        {
          sub_8098A5C();
          sub_8096BE0((int)sub_8096C84);
        }
        break;
      default:
        return v9;
    }
  }
  return v9;
}
