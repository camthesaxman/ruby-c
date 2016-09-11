int __fastcall sub_80E2A7C(unsigned __int8 a1)
{
  int v1; // r7@1
  signed int v2; // r5@1
  char *v3; // r0@4
  char *v4; // r1@4
  char *v5; // r2@10
  _BYTE *v6; // r0@10
  unsigned int v7; // r4@13
  unsigned __int8 v9; // [sp+0h] [bp-18h]@4
  unsigned __int8 v10; // [sp+1h] [bp-17h]@1
  int v11; // [sp+14h] [bp-4h]@19

  v1 = a1;
  v10 = -1;
  v2 = sub_80E1DC4(1u);
  if ( (unsigned int)word_3004B00[0] <= 7 )
  {
    switch ( word_3004B00[0] )
    {
      case 2:
        v2 = 0;
        goto _080E2AD2;
      case 0:
_080E2AD2:
        v3 = (char *)&v9;
        v4 = (char *)33748936;
        goto _080E2AE2;
      case 3:
        v2 = 0;
        goto _080E2ADE;
      case 1:
_080E2ADE:
        v3 = (char *)&v9;
        v4 = (char *)33748937;
_080E2AE2:
        *v3 = *v4;
        break;
      case 4:
        v9 = v202F7C8;
        v10 = v202F7C9;
        break;
      case 5:
        v9 = -1;
        break;
      case 6:
        v2 = 0;
        v5 = (char *)&v9;
        v6 = (_BYTE *)33748936;
        goto _080E2B1E;
      case 7:
        v2 = 0;
        v5 = (char *)&v9;
        v6 = (_BYTE *)33748937;
_080E2B1E:
        *v5 = *v6 ^ 2;
        break;
      default:
        break;
    }
  }
  v7 = 0;
  do
  {
    if ( v7 != v9 && v7 != v10 && b_side_obj__get_some_boolean(v7) << 24 )
      v2 |= 0x10000 << sub_80793A8(v7);
    v7 = (v7 + 1) & 0xFF;
  }
  while ( v7 <= 3 );
  sub_80E2C8C(v1, v2);
  return v11;
}
