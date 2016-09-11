int sub_8097594()
{
  signed int v0; // r0@4
  signed int v1; // r1@4
  int v2; // r0@10
  int v3; // r0@10
  int v4; // r0@11
  int v5; // r0@15
  int v6; // r0@17
  signed int v7; // r0@17
  int v8; // r0@22
  int v9; // r0@25
  int v10; // r0@25
  int v11; // r0@31
  int v13; // [sp+4h] [bp-4h]@0

  if ( v2000004 <= 0xDu )
  {
    switch ( v2000004 )
    {
      case 0u:
        sub_8098898(9);
        sub_8098A38(1);
        ++v2000004;
        goto _08097600;
      case 1u:
_08097600:
        v0 = ProcessMenuInputNoWrap() << 24;
        v1 = v0 >> 24;
        if ( !(v0 >> 24) )
        {
          v2 = sub_8098A5C(v0);
          v3 = sub_809B7D4(v2);
          sub_809B6DC(v3);
          goto _08097744;
        }
        if ( v1 > 0 )
        {
          if ( v1 != 1 )
            return v13;
        }
        else
        {
          v0 = -1;
          if ( v1 != -1 )
            return v13;
        }
        sub_8098A5C(v0);
_080976E0:
        sub_8096BE0((int)sub_8096C84);
        return v13;
      case 2u:
        v4 = sub_809B960();
        if ( sub_809B734(v4) << 24 )
          return v13;
        break;
      case 3u:
        v6 = sub_809B760();
        sub_809801C(v6);
        v7 = 10;
        goto _08097740;
      case 4u:
        if ( !(word_300179E & 3) )
          return v13;
        v7 = 11;
        goto _08097740;
      case 5u:
        if ( !(word_300179E & 3) )
          return v13;
        sub_8098A5C(word_300179E & 3);
        if ( v203847C )
        {
          v8 = party_compaction(v203847C);
          sub_8099310(v8);
_08097744:
          ++v2000004;
        }
        else
        {
          v2000004 = 7;
        }
        return v13;
      case 6u:
        if ( sub_8099374() << 24 )
          return v13;
        v9 = sub_809B440();
        v10 = BoxSetMosaic(v9);
        sub_80987DC(v10);
        goto _08097744;
      case 7u:
        goto _080976E0;
      case 8u:
        v7 = 10;
        goto _08097740;
      case 9u:
        if ( !(word_300179E & 3) )
          return v13;
        v7 = 21;
        goto _08097740;
      case 0xAu:
        if ( !(word_300179E & 3) )
          return v13;
        v11 = sub_8098A5C(word_300179E & 3);
        sub_8099958(v11);
        goto _08097744;
      case 0xBu:
        if ( sub_8099990() << 24 )
          return v13;
        sub_809B7AC();
        v7 = 19;
        goto _08097740;
      case 0xCu:
        if ( !(word_300179E & 3) )
          return v13;
        v7 = 20;
_08097740:
        sub_8098898(v7);
        goto _08097744;
      case 0xDu:
        if ( word_300179E & 3 )
        {
          sub_8098A5C(word_300179E & 3);
          sub_8096BE0((int)sub_8096C84);
        }
        return v13;
      default:
        return v13;
    }
    while ( 1 )
    {
      v5 = (char)sub_809B960();
      if ( (char)v5 == 1 )
        break;
      if ( !v5 )
      {
        v2000004 = 8;
        return v13;
      }
    }
    ++v2000004;
  }
  return v13;
}
