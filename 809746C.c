int sub_809746C()
{
  unsigned int v0; // r0@4
  unsigned int v1; // r4@4
  int v2; // r0@7
  char v3; // r0@8
  int v4; // r0@11
  char v5; // r0@11
  int v6; // r0@13
  int v7; // r0@13
  int v9; // [sp+4h] [bp-4h]@0

  if ( v2000004 <= 4u )
  {
    switch ( v2000004 )
    {
      case 0u:
        sub_8098898(6);
        sub_8096264(33563504, 7, 0xDACAu, 3);
        sub_809634C(v203847E);
        ++v2000004;
        break;
      case 1u:
        v0 = sub_8096368() << 24;
        v1 = v0 >> 24;
        if ( v0 >> 24 != 200 )
        {
          if ( v1 == 201 )
          {
            sub_8098A5C(v0);
            sub_809635C();
            sub_8096310();
            goto _0809755E;
          }
          v2 = sub_809B62C(v0 >> 24) << 24;
          if ( v2 )
          {
            sub_8098A5C(v2);
            sub_809635C();
            sub_8096310();
            v3 = 2;
          }
          else
          {
            sub_8098898(8);
            v3 = 4;
          }
          v2000004 = v3;
          v203847E = v1;
        }
        break;
      case 2u:
        v4 = party_compaction(v2000004);
        sub_8099310(v4);
        v5 = v2000004 + 1;
        goto _08097582;
      case 3u:
        if ( !(sub_8099374() << 24) )
        {
          v6 = sub_809B6BC();
          v7 = BoxSetMosaic(v6);
          sub_80987DC(v7);
_0809755E:
          sub_8096BE0((int)sub_8096C84);
        }
        break;
      case 4u:
        if ( word_300179E & 3 )
        {
          sub_8098898(6);
          v5 = 1;
_08097582:
          v2000004 = v5;
        }
        break;
      default:
        return v9;
    }
  }
  return v9;
}
