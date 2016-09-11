int __fastcall sub_80A47E8(unsigned __int8 a1, unsigned __int8 a2, int a3, int a4)
{
  int v5; // [sp+8h] [bp-4h]@0

  if ( (unsigned int)v2038559 <= 4 )
  {
    switch ( v2038559 )
    {
      case 0:
      case 1:
        sub_80A4380(a1, a2, a3, a4);
        break;
      case 4:
        sub_80A444C(a1, a2, a3, a4);
        break;
      case 2:
        sub_80A4548(a1, a2, a3, a4);
        break;
      case 3:
        sub_80A46FC(a1, a2, a3, a4);
        break;
      default:
        break;
    }
  }
  if ( byte_3005D10[4 * v2038559 + 1] )
    sub_80F979C(0, 0);
  else
    sub_80F979C(0, 1);
  if ( byte_3000701 == 5 )
  {
    if ( (unsigned __int8)byte_3005D10[4 * v2038559 + 1] + 8 >= (unsigned __int8)byte_3005D10[4 * v2038559 + 2] )
    {
_080A48D8:
      sub_80F979C(1, 1);
      return v5;
    }
  }
  else if ( (unsigned __int8)byte_3005D10[4 * v2038559 + 1] + 8 >= (unsigned __int8)byte_3005D10[4 * v2038559 + 2] + 1 )
  {
    goto _080A48D8;
  }
  sub_80F979C(1, 0);
  return v5;
}
