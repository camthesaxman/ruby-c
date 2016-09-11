int __fastcall sub_80E2B74(unsigned __int8 a1)
{
  int v1; // r4@1
  signed int v2; // r2@1
  __int16 *v3; // r1@3
  signed __int16 v4; // r0@3
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = sub_80E1DC4(word_3004B00[0]);
  if ( (unsigned __int8)byte_300428C <= 9u )
  {
    switch ( byte_300428C )
    {
      case 0:
        v3 = word_3004B00;
        v4 = 2828;
        goto _080E2C48;
      case 1:
        v3 = word_3004B00;
        v4 = 2528;
        goto _080E2C48;
      case 2:
        v3 = word_3004B00;
        v4 = 12062;
        goto _080E2C48;
      case 3:
        v3 = word_3004B00;
        v4 = 18432;
        goto _080E2C48;
      case 4:
        v3 = word_3004B00;
        v4 = 32459;
        goto _080E2C48;
      case 5:
        v3 = word_3004B00;
        v4 = 32459;
        goto _080E2C48;
      case 6:
        v3 = word_3004B00;
        v4 = 10774;
        goto _080E2C48;
      case 7:
        v3 = word_3004B00;
        v4 = 3374;
        goto _080E2C48;
      case 8:
      case 9:
        v3 = word_3004B00;
        v4 = 0x7FFF;
_080E2C48:
        v3[4] = v4;
        break;
      default:
        break;
    }
  }
  sub_80E2C8C(v1, v2);
  return v6;
}
