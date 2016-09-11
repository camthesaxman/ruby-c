int sub_8097078()
{
  int v0; // r0@3
  unsigned int v1; // r0@4
  int v2; // r0@8
  int v3; // r0@9
  int v4; // r0@11
  int v5; // r0@12
  int v6; // r2@13
  int v7; // r3@13
  int v8; // r0@15
  int v9; // r2@16
  int v10; // r3@16
  signed int v11; // r0@25
  int v13; // [sp+4h] [bp-4h]@0

  if ( v2000004 <= 5u )
  {
    switch ( v2000004 )
    {
      case 0u:
        v0 = sub_8098898(4);
        sub_809CE84(v0);
        v2000004 = 1;
        return v13;
      case 1u:
        v1 = (signed __int16)(sub_809CF30() + 1);
        if ( v1 <= 9 )
        {
          switch ( v1 )
          {
            case 0u:
            case 1u:
              sub_8098A5C(v1);
              sub_8096BE0((int)sub_8096C84);
              break;
            case 4u:
              if ( sub_809BE80() << 24 )
                goto _080971D6;
              v2 = audio_play(5u);
              sub_8098A5C(v2);
              sub_8096BE0((int)sub_80972A8);
              break;
            case 6u:
              v3 = audio_play(5u);
              sub_8098A5C(v3);
              sub_8096BE0((int)sub_80972FC);
              break;
            case 5u:
              if ( !(sub_809BEBC() << 24) )
                goto _080971D6;
              v4 = audio_play(5u);
              sub_8098A5C(v4);
              sub_8096BE0((int)c3_0808DC50);
              break;
            case 3u:
              v5 = audio_play(5u);
              sub_8098A5C(v5);
              sub_8096BE0((int)sub_8097390);
              break;
            case 2u:
              if ( sub_809BE80() << 24 )
                goto _080971D6;
              if ( itemid_is_mail(v20011F2, 4594, v6, v7) << 24 )
                goto _08097210;
              v8 = audio_play(5u);
              sub_8098A5C(v8);
              sub_8096BE0((int)sub_809746C);
              break;
            case 8u:
              if ( sub_809BE80() << 24 )
              {
_080971D6:
                v2000004 = 2;
              }
              else if ( v20011F9 )
              {
                v2000004 = 4;
              }
              else if ( itemid_is_mail(v20011F2, 4594, v9, v10) << 24 )
              {
_08097210:
                v2000004 = 3;
              }
              else
              {
                audio_play(5u);
                sub_8096BE0((int)sub_8097594);
              }
              break;
            case 7u:
              audio_play(5u);
              sub_8096BE0((int)sub_8097788);
              break;
            case 9u:
              audio_play(5u);
              sub_8096BE0((int)sub_80977E4);
              break;
            default:
              return v13;
          }
        }
        return v13;
      case 2u:
        audio_play(0x20u);
        v11 = 13;
        goto _08097274;
      case 4u:
        audio_play(0x20u);
        v11 = 17;
        goto _08097274;
      case 3u:
        audio_play(0x20u);
        v11 = 22;
_08097274:
        sub_8098898(v11);
        v2000004 = 5;
        break;
      case 5u:
        if ( word_300179E & 0xF3 )
        {
          ((void (*)(void))sub_8098A5C)();
          sub_8096BE0((int)sub_8096C84);
        }
        break;
      default:
        return v13;
    }
  }
  return v13;
}
